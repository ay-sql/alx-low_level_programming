#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <string.h>

/* reverse:  reverse string s in place */
void *reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;

	}
}

void itoa(long n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)  /* record sign */
		n = -n;          /* make n positive */
	i = 0;
	do {       /* generate digits in reverse order */
		s[i++] = n % 10 + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main(void)
{
	long num1;
	long num2;
	long product;
	char test [10000];
	unsigned int counter = 0;
	int flag;
	long highest;
	int length = 0;

	for (num1 = 999; num1 > 0; num1--)
	{
		for (num2 = 999; num2 > 0; num2--)
		{
			product = num1 * num2;
			itoa(product, test);
			length = strlen(test);
			counter = 0;
			flag = 0;
			while (counter < length)
			{
				if (test[counter] == test[(length - 1) - counter])
					{
						flag++;

					}
				counter++;
			}


			if (flag == counter)
			{
				if (product > highest)
					highest = product;
			}
		}


	}
	printf("%ld", highest);
	return (0);
}


