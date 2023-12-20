#include <stdio.h>
#include <unistd.h>

void foo()
{
    printf("execute foo\n");
}
// fork() 이후 부모와 자식 프로세스가 동시에 실행되므로, 
// 어떤 프로세스가 먼저 실행될지는 운영 체제에 의해 결정됨.
int main()
{
    if (fork() == 0)
    {
        if (fork() == 0)
        {
        // 13에서 fork된 또 다른 child 프로세스
        printf("child of child pid is %d\n", getpid());
        foo();    
        }
        else
        // 11줄에서 fork된 child 프로세스
        {
            printf("child pid is %d\n", getpid());
            foo();
        }
    }
    else
    {
        if(fork() == 0)
        {
            // 28줄에서 fork 된 child 프로스세스
            printf("child pid is %d\n", getpid());
            foo();
        }
        else
        {
            // parent 프로세스
            printf("parent pid is %d\n", getpid());
            foo();
        }
    }
    return 0;
}