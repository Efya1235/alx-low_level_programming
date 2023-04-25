BraveStarShalom
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Beta Try the new code view
alx-low_level_programming/0x02-functions_nested_loops/104-fibonacci.c
@BraveStarShalom
BraveStarShalom 98 fabonacci
 1 contributor
44 lines (39 sloc)  765 Bytes
#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers without hardcode.
  *
  * Return: Always 0 success
  */
int main(void)
{
	unsigned long int p;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (p = 1; p < 91; p++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / l);
	bef2 = (bef % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (p = 92; p < 99; ++p)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}

