@echo off

color 07
echo                                          sean
echo           ===========================================================
echo           ===========================================================
echo           ��ϵ� - ���̹�,����,����,���̽���,Ʈ����,�ν�Ÿ�׷�,��Ʃ��
echo           ===========================================================
echo           ����Ű - ���̹�= n, ����= g, ����= d, ���̽���= f, 
echo           ===========================================================
echo                       Ʈ����= t, �ν�Ÿ�׷�= i, ��Ʃ��= y
echo           ===========================================================  
echo                         ����ϽǷ���  Enter�� ��������
pause>nul  

:restart

color 02
echo ex)-----------------------'���̹�' Or 'n' Or 'naver'-----------------------
set /p c=�����Ͻ� ����Ʈ �̸��� �Է����ּ���.(Enter�� ������ ����˴ϴ�.) :
echo =================================================================
if "%c%"=="���̹�" explorer "https://www.naver.com"
if "%c%"=="n" explorer "https://www.naver.com"
if "%c%"=="naver" explorer "https://www.naver.com"

if "%c%"=="����" explorer "https://www.google.com"
if "%c%"=="g" explorer "https://www.google.com"
if "%c%"=="google" explorer "https://www.google.com"

if "%c%"=="����" explorer "https://www.daum.net"
if "%c%"=="d" explorer "https://www.daum.net"
if "%c%"=="daum" explorer "https://www.daum.net"

if "%c%"=="���̽���" explorer "https://www.facebook.com"
if "%c%"=="f" explorer "https://www.facebook.com"
if "%c%"=="facebook" explorer "https://www.facebook.com"

if "%c%"=="Ʈ����" explorer "https://twitter.com"
if "%c%"=="f" explorer "https://twitter.com"
if "%c%"=="twiiter" explorer "https://twitter.com"

if "%c%"=="�ν�Ÿ�׷�" explorer "https://www.instagram.com"
if "%c%"=="i" explorer "https://www.instagram.com"
if "%c%"=="instagram" explorer "https://www.instagram.com"

if "%c%"=="��Ʃ��" explorer  https://www.youtube.com"
if "%c%"=="y" explorer "https://www.youtube.com"
if "%c%"=="youtube" explorer  https://www.youtube.com"
echo                      �Է��Ͻ� "%c%"�� �����ϴ� ���Դϴ�.
echo                      ===================================

if "%c%"=="" exit
set /p first=�� �ٸ� ����Ʈ�� �����ϽǷ��� '1' �� �Է��Ͽ� �������ּ���.�����ϽǷ��� Enter.:

if "%first%"=="1" goto restart

if not "%first%"=="1" exit



pause>nul