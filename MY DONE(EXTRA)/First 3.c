#include <stdio.h>

int main()
{
	int c = 0; 
	int n = 0;
	int nmb =0;

printf("Enter number \n");
scanf("%d",&n);
	int number = n;

while (n != 0)   // it finds no. of digits
{
    n /= 10;
    c++;
}

printf("No. of digits is/are %d\n",c);
	nmb=c;  // no. of digits
	int numberArray[c]; // max array

	c = 0;     // so start with 0
	n = number; // again user entered no.

while (n != 0) // user entered no.(quotient) = 0
{
 numberArray[c] = n % 10;
    n /= 10;
    c++;
}

printf("which nth digit do u want?\n");
scanf("%d",&c);
printf("That digit is %d\n",numberArray[nmb - c - 1]);
	
	getchar();
	return 0;
}
