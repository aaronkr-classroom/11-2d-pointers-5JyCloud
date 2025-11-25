// 2d_ptr_malloc.c
#include <stdio.h>
#include <malloc.h>
// #include <mm_malloc.h>

int main()
{
    short** pp;
    // 4바이트를 할당함, 두 번쨰 상자 만듬

    pp = (short**)malloc(sizeof(short*));

    *pp = (short*)malloc(sizeof(short));

    **pp = 10;
    printf("**pp : %d\n", **pp);

    free(*pp);
    free(pp);
    return 0;
}