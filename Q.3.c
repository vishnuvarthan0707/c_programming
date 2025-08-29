#include<stdio.h>
int main ()
{   
    char message[50];
    printf("ENTER A MESSAGE:");
    scanf("%[^\n]s",&message);
    printf("%s is the given message",message);
    return 0;
}