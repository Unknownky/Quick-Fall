@echo off&title 端口检测关闭
set port=0
::set is="n"

ECHO. *************************** 端口面板 *********************************
:menu
	ECHO.
	ECHO. **********************************************************************
	ECHO.
	ECHO. 请输入端口号:
	ECHO.
set /p ID=
	set port=%id%
	ECHO.
	
	:: 未输入时提示重新输入
	IF "%port%"=="" (
		call:menu
	)
	
	call:detection

	call:menu
	


:detection
	ECHO.
	echo. 正在查找端口 "%port%"
	:: 检测某个端口是否被占用
	for /f "tokens=3 delims=: " %%a in ('netstat -an') do (
	:: 如果占用某个端口， 则关闭这个端口
		if "%%a"=="%port%" (
			call:estimate

		)
	)
	
	ECHO.
	echo "%port%" 端口未开启
	
	goto:eof


:estimate

	ECHO.
	ECHO. 已发现 "%port%" 端口，输入y关闭...
	ECHO.
	set /p fir=

	if "%fir%"=="y" (
		call:close
	)else (
		ECHO. 
		ECHO. 用户放弃关闭 "%port%" 端口
		call:menu
	)
	goto:eof


:: 关闭端口
:close
	ECHO. 正在关闭端口
	for /f "tokens=1-5" %%a in ('netstat -ano ^| find ":%port%"') do (
		ECHO.
		echo %%a %%e
		taskkill /f /pid %%e >null
		ECHO.
		echo %port%已被关闭
		ECHO.
		
		call:menu
	)
	goto:eof


pause
