@echo off&title �˿ڼ��ر�
set port=0
::set is="n"

ECHO. *************************** �˿���� *********************************
:menu
	ECHO.
	ECHO. **********************************************************************
	ECHO.
	ECHO. ������˿ں�:
	ECHO.
set /p ID=
	set port=%id%
	ECHO.
	
	:: δ����ʱ��ʾ��������
	IF "%port%"=="" (
		call:menu
	)
	
	call:detection

	call:menu
	


:detection
	ECHO.
	echo. ���ڲ��Ҷ˿� "%port%"
	:: ���ĳ���˿��Ƿ�ռ��
	for /f "tokens=3 delims=: " %%a in ('netstat -an') do (
	:: ���ռ��ĳ���˿ڣ� ��ر�����˿�
		if "%%a"=="%port%" (
			call:estimate

		)
	)
	
	ECHO.
	echo "%port%" �˿�δ����
	
	goto:eof


:estimate

	ECHO.
	ECHO. �ѷ��� "%port%" �˿ڣ�����y�ر�...
	ECHO.
	set /p fir=

	if "%fir%"=="y" (
		call:close
	)else (
		ECHO. 
		ECHO. �û������ر� "%port%" �˿�
		call:menu
	)
	goto:eof


:: �رն˿�
:close
	ECHO. ���ڹرն˿�
	for /f "tokens=1-5" %%a in ('netstat -ano ^| find ":%port%"') do (
		ECHO.
		echo %%a %%e
		taskkill /f /pid %%e >null
		ECHO.
		echo %port%�ѱ��ر�
		ECHO.
		
		call:menu
	)
	goto:eof


pause
