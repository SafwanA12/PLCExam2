// Safwan alam Exam 2 Problem 3 002248637
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void staticFunction(void)
{
    static int a[1];
}

void stackFunction(void)
{
    static int b[1];
}

void heapFunction(void)
{
    static int c[1];
}

main(void)
{
    struct timespec runtime1, runtime2;
    clock_gettime(CLOCK_REALTIME, &runtime1);
    for (int i = 0; i < 1000000; i++)
    {
        staticFunction();
    }
    clock_gettime(CLOCK_REALTIME, &runtime2);
    printf("it took %ld nanoseconds to run staticFunction 1000,000 times: \n", runtime2.tv_nsec - runtime1.tv_nsec);

    clock_gettime(CLOCK_REALTIME, &runtime1);
    for (int i = 0; i < 1000000; i++)
    {
        stackFunction();
    }
    clock_gettime(CLOCK_REALTIME, &runtime2);
    printf("it took %ld nanoseconds to run staticFunction 1000,000 times: \n", runtime2.tv_nsec - runtime1.tv_nsec);

    clock_gettime(CLOCK_REALTIME, &runtime1);
    for (int i = 0; i < 1000000; i++)
    {
        heapFunction();
    }
    clock_gettime(CLOCK_REALTIME, &runtime2);
    printf("it took %ld nanoseconds to run staticFunction 1000,000 times: \n", runtime2.tv_nsec - runtime1.tv_nsec);
}
