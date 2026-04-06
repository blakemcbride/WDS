@echo off
if exist cleanxx.bat goto exit
del /q *.dm *.mak *.def algocorp.ico *.ide s32.* s16.* 2>nul
call ..\setup\clean
:exit
