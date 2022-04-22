
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>
int main()
{
    printf("pid=%d\n", getpid());
    while (1)
        getchar();
    return 0;
}