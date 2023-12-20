#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("parent pid is %d\n", getpid());

    // fork(): 자식 프로세스 생성
    // 반환되는 값이 0인 프로세스는 자식 프로세스
    // 반환되는 값이 자식프로세스의 PID 인 프로세스는 부모 프로세스
    if (fork() == 0)
    {
        printf("child pid is %d\n", getpid());

    }
    return 0;
}