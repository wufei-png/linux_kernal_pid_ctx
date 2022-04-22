// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     while (1)
//     {
//         a = a + 1;
//         if (a == 1000)
//             a = 0;
//     }
//     return 0;
// }

#include <stdio.h>

#include <pthread.h>

#include <unistd.h>

void *tfn()
{
    int a = 0;
    while (1)
    {
        a = a + 1;
        if (a == 1000)
            a = 0;
    }
}

void main(void)

{
    for (int i = 0; i < 5; i++)
    {
        pthread_t tid;

        pthread_create(&tid, NULL, tfn, NULL);

        // sleep(1);

        // printf("我是进程，我的进程ID = %d\n", getpid());
    }
    while (1)
        sleep(1);
}