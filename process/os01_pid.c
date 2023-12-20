#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("hello, os\n");
    // 프로세스 id 출력
    printf("my pid is %d\n", getpid());
    return 0;
}