// 2d_ptr_getMyData.c
#include <stdio.h>
#include <malloc.h>
// #include <mm_malloc.h>

void GetMyData(int** q)
{
    *q = (int*)malloc(8);
}

int main()
{
    int* p;
    GetMyData(&p);
    *p = 5;

    printf("p (주소): %p\t", p);
    printf("p (값) : %d\n", *p);

    free(p);

    return 0;
}