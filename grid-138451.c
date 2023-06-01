/*  Name -- Anik Saha
*/ 

#include <stdio.h>
#include <string.h>

void main()
{
    char name[]="WELCOME";
    int i,j,len;
    len = strlen(name);
    
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==0)
            printf("%c",name[j]);
            else if(j==0)
            printf("%c",name[i]);
            else if(i==len-1)
            printf("%c",name[len-j-1]);
            else if(j==len-1)
            printf("%c",name[len-i-1]);
            else
            printf(" ");
        }
        printf("\n");
    }
}
