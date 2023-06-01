/* Name -- Anik Saha
*/

#include <stdio.h>
#include <string.h>

void  print_freq(char  *p)
{
	int c = 0, count[26] = {0}, x;
	while (*(p+c) != '\0') {
   /** Considering characters from 'a' to 'z' only and ignoring others. */

      if (*(p+c) >= 'a' && *(p+c) <= 'z') {
         x = *(p+c) - 'a';
         count[x]++;
      }

      c++;
   }

   for (c = 0; c < 26; c++)
   		if(count[c] != 0 )
   		{
   			printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
   			
		}
}
int main()
{
   char string[100];
   char *p;
   //int c = 0, count[26] = {0}, x;

   printf("Enter a string\n");
   gets(string);
   p=string;
   print_freq(p);
   



   return 0;
}
