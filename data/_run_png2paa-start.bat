for /F "Tokens=2* skip=2" %%A In ('REG QUERY "HKEY_CURRENT_USER\Software\Bohemia Interactive\DayZ Tools\ImageToPAA" /v "tool"') DO SET ImageToPAAPath=%%B

rem mask - quick, as they are simple images with few colors
rem 1st
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\m_0*.png

rem satellite texture
rem 1st
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\s_00*.png
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\s_01*.png
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\s_02*.png
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\s_03*.png

rem normal
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\n_00*.png
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\n_01*.png
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\n_02*.png
START "" /D"%CD%" /B "%ImageToPAAPath%" layers\n_03*.png
