#include <stdio.h>

void vPrintFunc(void)
{
	int i = 0 ;
	for(i = 0 ; i< 5; i++)
	printf("Call in Calling function\n");
	return;
}

int main()
{

  signed int i=5;
  for (int i = 5 ; i ; i--)
  printf("Print count = %d \n", i);
  
  
  return;

}
