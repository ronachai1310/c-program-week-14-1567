#include <stdio.h>
int testPointerByPointer()
{
    int *pc, c,d;
    float *pa, e;
    c = 5;
    d = -15;
    e = 20.5;

    pc = &c;
    printf("%d\n", *pc); // ? 5
    pc = &d;
    printf("%d", pc); // ? -15
    pa = &e;
    printf("%d", pa); // 20.5
    return 0;
}