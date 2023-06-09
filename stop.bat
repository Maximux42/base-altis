@echo off
COLOR 0B
TITLE Arma 3 server auto restarter
SETLOCAL EnableExtensions enabledelayedexpansion
set EXE=arma3server_x64.exe

echo "Arrêt Arma 3 server......"
timeout 5 >nul
taskkill /F /IM %EXE% >nul
timeout 10 >nul