@echo off
if exist cleanxx.bat goto exit
rm -zq *.dm *.mak *.def algocorp.ico *.ide s32.* s16.*
call ..\setup\clean
:exit
