// malloc_name.c
#include <stdio.h>
// #include <mm_malloc.h>
#include <malloc.h>

int main()
{
    char* p_name;
    p_name = (char*)malloc(20);

    if(p_name != NULL)
    {
        printf("Enter your name : >>> ");
        gets(p_name);

        // if(p_name == "Quit" || p_name == "Q") break;

        printf("Hi~~ %s\n", p_name);

        free(p_name);
    }
    else
    {
        printf("Error : Memory alloc error!\n");
    }

    return 0;
}