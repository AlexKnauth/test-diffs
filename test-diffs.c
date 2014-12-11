#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char* s = malloc(12*sizeof(char));
    sprintf(s, "Hello World");
    printf("%s\n", s);
}
