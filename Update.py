# WIP

# import datetime
import os
import shutil
#from subprocess import CREATE_NO_WINDOW
# import sys

import tempfile

# Get some vars prepared
baseDir = os.getcwd()
#baseDir = os.path.realpath("/home/glados/Projects/Business/TesPro/Vulcan/Program/Builds/Ver 1.56.2")
archiveDir = os.path.join(baseDir, "archived")
programFiles = ["images", "instructions", "flame-32.ico", "Main.exe"]
settingsFiles = ["settings.json", "profiles.json"]
downloadURL = ""

def archiveCurrent():
    """
    Check if any of the files in the current directory are program files and move them.
    """
    for filename in os.listdir(baseDir):
        src = os.path.join(baseDir, filename)
        dest = os.path.join(archiveDir,filename)
        moveIt(filename, src, dest)


def reset():
    """
    Returns the just archived program files back to the current working directory
    """
    for filename in os.listdir(archiveDir):
        src = os.path.join(archiveDir,filename)
        dest = os.path.join(baseDir, filename)
        moveIt(filename, src, dest)


def moveIt(filename, src, dest):
    """
    Moves the program files in the current directory to an archive directory
    in preperation for the new program files. Copies  the setttings and profile files
    to the archive, leaving them intact in the program folder.
    """
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


def downloadViaGit():
    """
    Download the latest stable release via git.
    """
    import git

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
    import requests
    r = requests.get('https://github.com/owid/covid-19-data/blob/master/public/data/ecdc/COVID-2019%20-%20ECDC%20(2020).csv')

def downloadViaWget():
    import wget
    # This did work
    target = os.path.join(baseDir, "pythonLogo.png")
    wget.download(downloadURL, target)
    print("\n")
    os.path.exists(target)


def downloadViaURLOpen():
    import urllib
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
    downloadOk = downloadViaWget()
    if not downloadOk:
        print("Download of new program failed. Reseting previous version...")
        reset()
        print("Previous version restored.")

    var = input("Press any key to end ...") # Put this in just to stop term windows from closing before I get a chance to read it.
