@echo off
echo Compiling C++ files...
g++ *.cpp -o all.exe
if %errorlevel% == 0 (
    echo Compilation successful!
    echo Running all.exe...
    all.exe
) else (
    echo Compilation failed!
)
pause
