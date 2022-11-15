#python -m nuitka --onefile --plugin-enable=numpy --windows-icon-from-ico=flame-32.ico --include-data-file="C:\Users\freya\Documents\TesPro\src\firetestprogram\splash.jpg"=images Main.pyw

@echo OFF
:: For copying from one drive to another -xyz.txt from D:\ to E:\
COPY Main.exe \Builds\Ver
COPY images \Builds\Ver
COPY instructions \Builds\Ver
COPY splash.jpg \Builds\Ver
COPY flame-32.ico \Builds\Ver
COPY settings.json \Builds\Ver
COPY profiles.json \Builds\Ver

:: If file has whitepace between name - use double quote
::COPY "D:\my file.txt" E:\