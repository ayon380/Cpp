#include <stdio.h>
#include<string.h>
int main()
{
    char s1[]="hello";
    char s2[100];
    scanf("%s", s2);
    if(strcmp(s1,s2)==0){
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}