#include <stdio.h>

void vPrintFunc(void)
{
	printf("Call in Calling function\n");
	return;
}

int main()
{

  signed int i=5;
  for (int i = 5 ; i ; i--)
  printf("Print count = %d \n", i);
  
  
  return 0;

}
