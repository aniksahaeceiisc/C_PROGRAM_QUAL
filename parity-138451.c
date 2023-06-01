/*  Name -- Anik Saha
*/ 

#include <stdio.h>
#include <string.h>
unsigned char cep (unsigned char val)
{
  unsigned char v;
  v = val;
  int onecount = 0;
  while (val > 0)
    {
      if (val & 1 == 1)
      {
	    onecount++;
      }
      val >>= 1;
    }
  if (onecount % 2 == 0)
    v &= ~(1 << 7);
  else
    v |= (1 << 7);

  return (v);
}

void main ()
{
  unsigned char value = 0x45;
  unsigned char value_parity;
  value_parity = cep (value);
  printf ("%X", value_parity);
}
