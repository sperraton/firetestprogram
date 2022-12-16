START /B /WAIT python -m nuitka --onefile --plugin-enable=numpy --windows-icon-from-ico=flame-32.ico --include-data-file="C:\Users\freya\Documents\TesPro\src\firetestprogram\splash.jpg"=images Main.pyw

@echo OFF
FOR /F "tokens=1" %%G IN (buildNum.txt) DO SET buildNum=%%G
@REM SET buildNum=3
ECHO %buildNum%

XCOPY .\Main.exe .\Builds\Ver%buildNum%\Main.exe /i /f /v
XCOPY .\images\* .\Builds\Ver%buildNum%\images\* /f /s /e /v
XCOPY .\instructions\* .\Builds\Ver%buildNum%\instructions\* /f /s /e /v
@REM XCOPY .\splash.jpg .\Builds\Ver%buildNum%\splash.jpg /i /f /v
@REM XCOPY .\flame-32.ico .\Builds\Ver%buildNum%\flame-32.ico /i /f /v
@REM XCOPY .\settings.json .\Builds\Ver%buildNum%\settings.json /i /f /v
@REM XCOPY .\profiles.json .\Builds\Ver%buildNum%\profiles.json /i /f /v

:: If file has whitepace between name - use double quote
::COPY "D:\my file.txt" E:\