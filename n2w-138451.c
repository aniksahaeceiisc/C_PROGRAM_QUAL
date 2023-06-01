/* Name -- Anik Saha
*/


 #include <stdio.h>
 void Num2Words(int num, char *p)
 {
 	
 	int i;
 	for(i=0;i<num;i++)
	{
		//printf("%c\n",*(p+i));
		if(*(p+i)=='0')
		{
			printf("zero\t");
		}
		else if (*(p+i)=='1')
		{
			printf("one\t");
		}
		else if (*(p+i)=='2')
		{
			printf("two\t");
		}
		else if (*(p+i)=='3')
		{
			printf("three\t");
		}
		else if (*(p+i)=='4')
		{
			printf("four\t");
		}
		else if (*(p+i)=='5')
		{
			printf("five\t");
		}
		else if (*(p+i)=='6')
		{
			printf("six\t");
		}
		else if (*(p+i)=='7')
		{
			printf("seven\t");
		}
		else if (*(p+i)=='8')
		{
			printf("eight\t");
		}
		else if (*(p+i)=='9')
		{
			printf("nine\t");
		}
		else
		{
			printf("please enter number\n");
			break; 
		}
	}
 }
 
 
 
 main(){
	
	char a[10]={'1','2','3','4','0'};  //one cant take the string other way aslo
	char *p ;
	p=&a ;
	//ReverseString(p);
	int c=0;
	//int i;
	while(*(p+c) !='\0')
	{
		c++;
	}
	printf("length of the string is %d\n",c);
	Num2Words(c,p);
	
}
