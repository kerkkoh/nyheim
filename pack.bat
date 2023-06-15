:: Epic Cool Packing Script for trerik using pboProject
@echo off

:: --> Configuration start
:: If you have any problems understanding these, google or modders discord is your friend

:: You need to know your P: -drive location, that is, where the fake p-drive is mounted
SET pDriveLocation=F:\DayZ
:: Leave this as is, and remember to rename nyheim repository to trerik4
SET trerikLocation=P:\trerik4
:: Where should the output addons and keys go? !!!NOTE!!! The "Addons" folder will be deleted from this folder!!!
SET outputFolder=F:\Nyheim\NyheimNightly
:: Where your biprivate key is
SET privatekey=F:\DayZ\DayZRPNyheim.biprivatekey
:: DO NOT CHANGE THIS
SET prePackedAddonsFolder=%trerikLocation%\source\_dist\Addons
:: Where you pboProject.exe is located
SET pboproject="C:\Program Files (x86)\Mikero\DePboTools\bin\pboProject.exe"

::
:: Configuration end <--



:: Kills any existing pboproject (smooth runs)
tasklist /FI "IMAGENAME eq pboProject.exe" 2>NUL | find /I /N "pboProject.exe">NUL
if "%ERRORLEVEL%"=="0" taskkill /F /IM pboProject.exe /T


:: Check that folders/files exist
IF NOT EXIST %pDriveLocation% echo "pDriveLocation doesn't exist :(" && pause
IF NOT EXIST %outputFolder% echo "outputFolder doesn't exist :(" && pause
IF NOT EXIST %privatekey% echo "privatekey doesn't exist :(" && pause
IF NOT EXIST %pboproject% echo "pboproject doesn't exist :(" && pause

:: Refresh P-drive because I forget to mount it sometimes :(
subst P: /D
subst P: %pDriveLocation%

:: Check that folders/files exist within the P-drive
IF NOT EXIST %trerikLocation% echo "trerikLocation doesn't exist :(" && pause
IF NOT EXIST %prePackedAddonsFolder% echo "prePackedAddonsFolder doesn't exist :(" && pause

:: Empty build location
RMDIR /S /Q %outputFolder%\Addons

:: Copy pre-built PBOs
xcopy /S /Y /Q %prePackedAddonsFolder% %outputFolder%\Addons\

:: Pack initial batch of pbos
for %%f in (roads sounds scripts clothing dpl extra lessdoors nature navmesh snow data train ce) do (
    start "%%f" %pboproject% -R -G +P -! -Z +C -W -S -E=dayz +K=%privatekey% -M=%outputFolder% %trerikLocation%\%%f
)

:: Wait for the task to finish
:waitforfinishi
TASKLIST | FIND "pboProject.exe" >NUL
IF %ERRORLEVEL% EQU 0 (
	ping 127.0.0.1 -n 1 > NUL
	goto waitforfinishi
)

:: Pack military and city after dependencies are built
for %%f in (military city) do (
    %pboproject% -R -G +P -! -Z +C -W -S -E=dayz +K=%privatekey% -M=%outputFolder% %trerikLocation%\%%f
)

:: Wait for other builds to finish before packing Nyheim world
:waitforfinish
TASKLIST | FIND "pboProject.exe" >NUL
IF %ERRORLEVEL% EQU 0 (
	ping 127.0.0.1 -n 1 > NUL
	goto waitforfinish
)

:: Always pack world last and without obfuscation or compression (-! -Z) and don't stop on warnings (-W)
for %%f in (world) do (
    %pboproject% -R -G +P -! -Z +C -W -S -E=dayz +K=%privatekey% -M=%outputFolder% %trerikLocation%\%%f
)
