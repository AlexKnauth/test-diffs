#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char* s = malloc(sizeof(char));
    sprintf(s, "Hello World");
    printf("%s", s);
}
