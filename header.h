#include <stdio.h>

void funcforHeaderfile();
static void funcfromAnotherpage()
{
	printf("Hello world in another page\n");
	return;
}
