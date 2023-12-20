#include <stdio.h>
#include <unistd.h>
// 동일한 작업을 하는 프로세스 만들기
int main()
{
    printf("parent pid is %d\n", getpid()); // 한번 출력

    // fork(): 자식 프로세스 생성
    // 반환되는 값이 0인 프로세스는 자식 프로세스
    // 반환되는 값이 자식프로세스의 PID 인 프로세스는 부모 프로세스
    // fork() 이후 부모와 자식 프로세스는 동일한 프로그램 코드부터 실행을 시작
    if (fork() == 0)
    {
        printf("child pid is %d\n", getpid());
    }
    
    printf("executed!\n");  // 두번 출력.

    return 0;
}