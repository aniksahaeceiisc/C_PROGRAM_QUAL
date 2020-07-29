/* Name -- Anik Saha
Company Name-Qualcomm
Employee ID-138451*/


#include <stdio.h> 
#define bit 8 // If anyone want CountZeroBits(0x4C);    ==> should return 13 instead of 5, just change the bit to 16
int CountZeroBits(unsigned char   c);
int main()
{
	
unsigned char value = 0x4C ;
int k;


k= CountZeroBits(value);
printf("%d",k);
}

int CountZeroBits(unsigned char   value)
{
	
	int bitCount = 0;

	
	while (value > 0)
	{
		
	    if ( value & 1 == 1 ) 
	        bitCount++;
	    value >>= 1;
	}
	
	
	return (bit-bitCount);
	
}
