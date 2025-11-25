// malloc_free.c
#include <stdio.h>
// #include <mm_malloc.h>

void Test()
{
    short* p = (short*)malloc(100);
    // free(p);

}

int main()
{
    int i;
    for(i = 0; i < 100; i++) Test();

    return 0;
}