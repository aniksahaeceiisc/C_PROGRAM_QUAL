/*  Name -- Anik Saha
Company Name-Qualcomm
Employee ID-138451*/ 
#include <stdio.h> 

#define OUT 0 
#define IN 1 


int word_count(char *str) 
{ 
	int state = OUT; 
	unsigned wc = 0; 

	
	while (*str) 
	{ 
 
		if (*str == ' ' || *str == '\n' || *str == '\t') 
			state = OUT; 


		else if (state == OUT) 
		{ 
			state = IN; 
			++wc; 
		} 

		
		++str; 
	} 

	return wc; 
} 


int main(void) 
{ 
	char str[] = "One two three \nfour\tfive\tsix\tseven\teight "; 
	printf("No of words : %u", word_count(str)); 
	return 0; 
} 

