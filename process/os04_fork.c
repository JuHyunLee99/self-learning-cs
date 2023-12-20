#include <stdio.h>
#include <unistd.h>
// 동일한 작업을 하는 프로세스 만들기

void foo()
{
    printf("execute foo\n");
}

int main()
{
    if (fork() == 0)
    {
        printf("child pid is %d\n", getpid());
        foo();
    }
    else
    {
        printf("parent pid is %d\n", getpid());
        foo();
    }
    return 0;
}