@echo off

color 07
echo                                          sean
echo           ===========================================================
echo           ===========================================================
echo           목록들 - 네이버,구글,다음,페이스북,트위터,인스타그램,유튜브
echo           ===========================================================
echo           단축키 - 네이버= n, 구글= g, 다음= d, 페이스북= f, 
echo           ===========================================================
echo                       트위터= t, 인스타그램= i, 유튜브= y
echo           ===========================================================  
echo                         계속하실려면  Enter를 누르세요
pause>nul  

:restart

color 02
echo ex)-----------------------'네이버' Or 'n' Or 'naver'-----------------------
set /p c=접속하실 사이트 이름을 입력해주세요.(Enter를 누르면 종료됩니다.) :
echo =================================================================
if "%c%"=="네이버" explorer "https://www.naver.com"
if "%c%"=="n" explorer "https://www.naver.com"
if "%c%"=="naver" explorer "https://www.naver.com"

if "%c%"=="구글" explorer "https://www.google.com"
if "%c%"=="g" explorer "https://www.google.com"
if "%c%"=="google" explorer "https://www.google.com"

if "%c%"=="다음" explorer "https://www.daum.net"
if "%c%"=="d" explorer "https://www.daum.net"
if "%c%"=="daum" explorer "https://www.daum.net"

if "%c%"=="페이스북" explorer "https://www.facebook.com"
if "%c%"=="f" explorer "https://www.facebook.com"
if "%c%"=="facebook" explorer "https://www.facebook.com"

if "%c%"=="트위터" explorer "https://twitter.com"
if "%c%"=="f" explorer "https://twitter.com"
if "%c%"=="twiiter" explorer "https://twitter.com"

if "%c%"=="인스타그램" explorer "https://www.instagram.com"
if "%c%"=="i" explorer "https://www.instagram.com"
if "%c%"=="instagram" explorer "https://www.instagram.com"

if "%c%"=="유튜브" explorer  https://www.youtube.com"
if "%c%"=="y" explorer "https://www.youtube.com"
if "%c%"=="youtube" explorer  https://www.youtube.com"
echo                      입력하신 "%c%"로 접속하는 중입니다.
echo                      ===================================

if "%c%"=="" exit
set /p first=또 다른 사이트에 접속하실려면 '1' 을 입력하여 선택해주세요.종료하실려면 Enter.:

if "%first%"=="1" goto restart

if not "%first%"=="1" exit



pause>nul