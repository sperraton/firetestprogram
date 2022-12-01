# WIP

# import datetime
import os
import shutil
#from subprocess import CREATE_NO_WINDOW
# import sys
# import urllib
# import wget

import git
import tempfile

    # Get some vars prepared
baseDir = os.getcwd()
#baseDir = os.path.realpath("/home/glados/Projects/Business/TesPro/Vulcan/Program/Builds/Ver 1.56.2")
archiveDir = os.path.join(baseDir, "archived")
programFiles = ["images", "instructions", "flame-32.ico", "Main.exe"]
settingsFiles = ["settings.json", "profiles.json"]
dl_url = ""

def archiveCurrent():
    # Check if any of the files in the current directory are program files and move them.
    for filename in os.listdir(baseDir):
        src = os.path.join(baseDir, filename)
        dest = os.path.join(archiveDir,filename)
        moveIt(filename, src, dest)


def reset():
    for filename in os.listdir(archiveDir):
        src = os.path.join(archiveDir,filename)
        dest = os.path.join(baseDir, filename)
        moveIt(filename, src, dest)


def moveIt(filename, src, dest):
        try:
            if filename in settingsFiles: # Leave the current profiles and settings intact
                shutil.copy2(src, dest)
                print(f"{src} copied successfully.")
            elif filename in programFiles:
                shutil.move(src, dest)
                print(f"{src} moved successfully.")
        
        # If source and destination are same
        except shutil.SameFileError:
            print("Source and destination represents the same file.")  
        # If there is any permission issue
        except PermissionError:
            print("Permission denied.")
        except IOError as e:
            print(f"IO Error: {e}")
        # For other errors
        except:
            print("Other error occurred while copying file.")


def downloadNew():
    # Get the latest stable release

    try:
        # Create temporary dir
        tempDir = tempfile.mkdtemp()
        # Clone into temporary dir
        print("Downloading new update. This may take a few moments ...")
        git.Repo.clone_from("https://github.com/sperraton/firetestprogram.git", tempDir, branch='master', depth=1)
        # Copy desired file from temporary dir
        stableDir = os.path.join(tempDir,"Builds/Latest Stable")
        verDir = os.listdir(stableDir)[0] # There should only ever be one version folder in the Latest Stable
        print(f"Version found {verDir}")
        # Copy over all relevant files
        for filename in os.listdir(os.path.join(stableDir, verDir)):
            src = os.path.join(stableDir, verDir, filename) # Move down into the version directory
            dest = os.path.join(baseDir, filename)
            moveIt(filename, src, dest)

        # Remove temporary dir
        shutil.rmtree(tempDir)
        return True

    except IOError as e:
        print("!!! Download failed !!!")
        print(f"Error: {e}")
        return False


def downloadViaRequests():
    pass
# import requests
    # r = requests.get('https://github.com/owid/covid-19-data/blob/master/public/data/ecdc/COVID-2019%20-%20ECDC%20(2020).csv')

def downloadViaWget():
    # This did work
    target = os.path.join(baseDir, "pythonLogo.png")
    wget.download(dl_url, target)
    print("\n")
    os.path.exists(target)


def downloadViaURLOpen():
    pass
    # dl_file = open(cwd, 'w')
    # http_stream = urllib.urlopen(dl_url)
    # total_size = None
    # bytes_so_far = 0
    # chunk_size = 8192
    # try:
    #     total_size = int(http_stream.info().getheader('Content-Length').strip())
    # except:
    #     # The header is improper or missing Content-Length, just download
    #     dl_file.write(http_stream.read())

    # while total_size:
    #     chunk = http_stream.read(chunk_size)
    #     dl_file.write(chunk)
    #     bytes_so_far += len(chunk)

    #     if not chunk:
    #         break

    #     percent = float(bytes_so_far) / total_size
    #     percent = round(percent*100, 2)
    #     sys.stdout.write("Downloaded %d of %d bytes (%0.2f%%)\r" % (bytes_so_far, total_size, percent))

    #     if bytes_so_far >= total_size:
    #         sys.stdout.write('\n')

    # http_stream.close()
    # dl_file.close()



###############################################################################
#  Program Entry
###############################################################################
if __name__ == '__main__':

    # Check if we can even do this
    if not os.access(baseDir, os.W_OK):
        print(f"Cannot update -- unable to write to {baseDir}")

    # Save the current version
    print("Archiving current program files ...")
    archiveCurrent()
    downloadOk = downloadNew()
    if not downloadOk:
        print("Download of new program failed. Reseting previous version...")
        reset()
        print("Previoud version restored.")

    var = input("Press any key to end ...") # Put this in just to stop term windows from closing before I get a chance to read it.















# def update(dl_url, force_update=False):
#     """
# Attempts to download the update url in order to find if an update is needed.
# If an update is needed, the current script is backed up and the update is
# saved in its place.
# """

#     import re
#     from subprocess import call
#     def compare_versions(vA, vB):
#         """
# Compares two version number strings
# @param vA: first version string to compare
# @param vB: second version string to compare
# @author <a href="http_stream://sebthom.de/136-comparing-version-numbers-in-jython-pytho/">Sebastian Thomschke</a>
# @return negative if vA < vB, zero if vA == vB, positive if vA > vB.
# """
#         if vA == vB: return 0

#         def num(s):
#             if s.isdigit(): return int(s)
#             return s

#         seqA = map(num, re.findall('\d+|\w+', vA.replace('-SNAPSHOT', '')))
#         seqB = map(num, re.findall('\d+|\w+', vB.replace('-SNAPSHOT', '')))

#         # this is to ensure that 1.0 == 1.0.0 in cmp(..)
#         lenA, lenB = len(seqA), len(seqB)
#         for i in range(lenA, lenB): seqA += (0,)
#         for i in range(lenB, lenA): seqB += (0,)

#         rc = cmp(seqA, seqB)

#         if rc == 0:
#             if vA.endswith('-SNAPSHOT'): return -1
#             if vB.endswith('-SNAPSHOT'): return 1
#         return rc

#     # dl the first 256 bytes and parse it for version number
#     try:
#         http_stream = urllib.urlopen(dl_url)
#         update_file = http_stream.read(256)
#         http_stream.close()
#     except IOError as e:
#         print("Unable to retrieve version data")
#         print("Error: {e}")
#         return

#     match_regex = re.search(r'__version__ *= *"(\S+)"', update_file)
#     if not match_regex:
#         print("No version info could be found")
#         return
#     update_version = match_regex.group(1)

#     #########################
#     if not update_version:
#         print("Unable to parse version data")
#         return

#     if force_update:
#         print("Forcing update, downloading version %s..." % update_version)
#     else:
#         cmp_result = compare_versions(__version__, update_version)
#         if cmp_result < 0:
#             print "Newer version %s available, downloading..." % update_version
#         elif cmp_result > 0:
#             print "Local version %s newer then available %s, not updating." \
#                 % (__version__, update_version)
#             return
#         else:
#             print "You already have the latest version."
#             return






    # # dl, backup, and save the updated script
    # app_path = os.path.realpath(sys.argv[0])

    # if not os.access(app_path, os.W_OK):
    #     print("Cannot update -- unable to write to %s" % app_path)

    # dl_path = app_path + ".new"
    # backup_path = app_path + ".old"


    # try:
    #     dl_file = open(dl_path, 'w')
    #     http_stream = urllib.urlopen(dl_url)
    #     total_size = None
    #     bytes_so_far = 0
    #     chunk_size = 8192
    #     try:
    #         total_size = int(http_stream.info().getheader('Content-Length').strip())
    #     except:
    #         # The header is improper or missing Content-Length, just download
    #         dl_file.write(http_stream.read())

    #     while total_size:
    #         chunk = http_stream.read(chunk_size)
    #         dl_file.write(chunk)
    #         bytes_so_far += len(chunk)

    #         if not chunk:
    #             break

    #         percent = float(bytes_so_far) / total_size
    #         percent = round(percent*100, 2)
    #         sys.stdout.write("Downloaded %d of %d bytes (%0.2f%%)\r" %
    #             (bytes_so_far, total_size, percent))

    #         if bytes_so_far >= total_size:
    #             sys.stdout.write('\n')

    #     http_stream.close()
    #     dl_file.close()
    # except IOError, (errno, strerror):
    #     print "Download failed"
    #     print "Error %s: %s" % (errno, strerror)
    #     return

    # try:
    #     os.rename(app_path, backup_path)
    # except OSError, (errno, strerror):
    #     print "Unable to rename %s to %s: (%d) %s" \
    #         % (app_path, backup_path, errno, strerror)
    #     return

    # try:
    #     os.rename(dl_path, app_path)
    # except OSError, (errno, strerror):
    #     print "Unable to rename %s to %s: (%d) %s" \
    #         % (dl_path, app_path, errno, strerror)
    #     return

    # try:
    #     import shutil
    #     shutil.copymode(backup_path, app_path)
    # except:
    #     os.chmod(app_path, 0755)

    # print "New version installed as %s" % app_path
    # print "(previous version backed up to %s)" % (backup_path)
    # return