#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort_ptr3ary(int* x[])
{
    if (*x[0] > *x[1])
        swap(x[0], x[1]);
    if (*x[1] > *x[2])
        swap(x[1], x[2]);
    if (*x[0] > *x[1])
        swap(x[0], x[1]);
}

int main(void)
{
    int a = 5, b = 8, c = 6;
    int* p[3] = { &a, &b, &c};

    puts("Before：ソート前");
    printf("*p[0]=%d\n", *p[0]);
    printf("*p[1]=%d\n", *p[1]);
    printf("*p[2]=%d\n", *p[2]);

    sort_ptr3ary(p);
    puts("After：ソート後");
    printf("*p[0]=%d\n", *p[0]);
    printf("*p[1]=%d\n", *p[1]);
    printf("*p[2]=%d\n", *p[2]);

    return(0);
}