#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char* s = malloc(12*sizeof(char));
    if (s != NULL)
    {
        sprintf(s, "Hello World");
        printf("%s\n", s);
    }
}
