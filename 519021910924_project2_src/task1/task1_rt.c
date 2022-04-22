#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sched.h>

void main(void)
{
  pid_t pid = getpid();
  struct sched_param param;
  param.sched_priority = sched_get_priority_max(SCHED_FIFO); // 也可用SCHED_RR
  sched_setscheduler(pid, SCHED_RR, &param);                 // 设置当前进程
  pthread_setschedparam(pthread_self(), SCHED_FIFO, &param); // 设置当前线程
  int a = 0;
  char pid1[10];
  printf("pid=%d\n", getpid());
  while (1)
  {
    // a = 0;
    // a = a + 1;
    // if (a == 1000)
    //   a = 0;
  }
}