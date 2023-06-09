@echo off
COLOR 0B
TITLE Arma 3 server auto restarter
SETLOCAL EnableExtensions enabledelayedexpansion
set EXE=arma3server_x64.exe

echo "Arrêt Arma 3 server......"
timeout 5 >nul
taskkill /F /IM %EXE% >nul
timeout 20 >nul
echo "Demarrage Arma 3 server......"
start arma3server_x64.exe  -port=2302 "-config=C:\arma3_serveur\TADST\default\TADST_config.cfg" "-cfg=C:\arma3_serveur\TADST\default\TADST_basic.cfg" "-profiles=C:\arma3_serveur\TADST\default" -name=default -filePatching "-mod=@Ultra Arma3 RolePlay" -autoInit "-serverMod=@infiSTAR_A3;@The_Programmer;@extDB3;@life_server"
timeout 5 >nul
exit