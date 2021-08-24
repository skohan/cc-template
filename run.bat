@echo off
cls
echo Compiling
g++  -std=c++11 -O2 -Wall  %1.cpp -o a.exe && echo Running && a.exe < in.txt > out.txt && del a.exe
rem g++  -std=c++11 -O2 -Wall  %1.cpp -o a.exe && echo Running && a.exe < in.txt && del a.exe

