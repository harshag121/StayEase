@echo off
set SOURCE_FILES=main.cpp HotelManager.cpp
set OUTPUT_FILE=hotel_management.exe

echo Compiling...
g++ -std=c++11 -Wall %SOURCE_FILES% -o %OUTPUT_FILE%

if %ERRORLEVEL% neq 0 (
    echo Compilation failed.
    exit /b
)

echo Compilation successful.
echo.
echo Running...
%OUTPUT_FILE%
