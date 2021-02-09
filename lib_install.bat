REM Batch command for making sure the proper Python libraries are installed


cls
echo Installing and updating libraries ...


pip install matplotlib
pip install wxPython
pip install Pypubsub
pip install numpy
pip python-dateutil
pip install Phidget22

echo ===================
echo Libraries installed
echo ===================
echo Running Python version:
python --version
pause