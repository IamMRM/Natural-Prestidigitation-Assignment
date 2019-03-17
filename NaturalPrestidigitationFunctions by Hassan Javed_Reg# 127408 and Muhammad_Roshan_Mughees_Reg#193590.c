
 /* NaturalPrestidigitationFunctions.c -- utility functions for digit pattern problem. *
 * *
 * Author : Muhammad Roshan Mughees and Hassan Javed .*
 **BS-CS-6A
 **Reg# 193590 and 127408 respectively
 * Purpose. function definitions for different digit utilities. *
 * *
 * Usage. *
 * Call the functions in main() to compute digit properties. *
 ********************************************************/
 
#include "types.h"

#include "NaturalPrestidigitationFunctions.h"

/*
 * countDigits(num) 
 * calculates the number of digits in the integer num.
 */

int countDigits( int num )
{

	int i=0;
	while(num>0)
	{
		num=num/10;
		i++;
	}
	return i;
}

/*
 * nthDigitBack(n,num) 
 * finds the nth lowest order digit in num
 */
 
int nthDigitBack( int n, int num )
{

	int i=0;
	while(n>=0)
	{
		i=num;
		num=num/10;
		i=i%10;
		n--;
	}
		return i;
}
/*
 * nthDigit(n,num)
 * finds the nth highest order digit of num
 */

int nthDigit( int n, int num )
{
	int reverse=0;
   while (num != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + num%10;
      num       = num/10;
   }
   int count=nthDigitBack( n, reverse );
  return count;
}

/*
 * nthDigitTallyOne1(n, num, tally)
 * assumes that tally is a 10 element list tallying the number of nth digits seen so far. 
 * It updates tally to reflect the nth digit of num.
 */

int nthDigitTallyOne( int n, int num, int tally[] )
{
	int i = nthDigit(n,num);
	tally[i]++;
	return tally[i];
}


/*
 * nthDigitTally(n, nums)
 * returns a tally of frequencies of 0–9 
 * as the nth digits of all the numbers in nums.
 */
 
 int* nthDigitTally( int n, int len, int nums[] )
{

 static int tally[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	 int i=0;

	for ( i = 0; i < len; i++)
	{
		 nthDigitTallyOne(n, nums[i], tally);
		
	}
	return tally;
}
 
