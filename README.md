# self-learning-cs
혼자 공부하는 컴퓨터구조+운영체제

### 개발환경 세팅
- wsl2 설치
- Ubuntu 설치
- Ubuntu 세팅
  - apt-get update & apt-get upgrade
  - apt-get install build-essential
- VS Code(Window) 설치 및 Ubuntu 연동
  - VSCode에서 연결하는 방법  
    WSL 확장팩 설치
  -  Ubuntu 터미널에서 연결  
    터미널에 code . 입력
      
    ※ WSL $PATH 환경 변수 Windows 공유 설정  
    /etc/wsl.conf 수정  
          
    ※ 환경변수 PATH 추가(~/.bashrc)  
    export PATH=$PATH:/mnt/c/DEV/Tools/Microsoft\ VS\ Code/bin
- github 연동
- .vscode
  - tasks.json 컴파일러 빌드 세팅
    - gcc
    - g++
  - launch.json 디버거 세팅

 ### 프로세스
 - getpid()
 - fork()
