/* Name -- Anik Saha
Company Name-Qualcomm
Employee ID-138451*/

#include <stdio.h>


void ReverseString(char *p)
{
	int c=0;
	int i;
	while(*(p+c) !='\0')
	{
		c++;
	}
	printf("length of the string is %d\n",c);
	printf("--------------\n");
	printf("printing the reverse string one by one\n");
	for(i=c;i>=0;i--)
	{
		printf("%c\n",*(p+i));
	}
}
main(){
	
	char a[10]={'A','N','I','K','S','A','H','A'}; // one can take the string in other way also
	char *p ;
	p=&a ;
	ReverseString(p);
	
}


