#include "holberton.h"

/**
  *argstostr- concats all the arguments
  *@ac:int
  *@av:char
  *Return: char
  */

char *argstostr(int ac, char **av)
{

char *ar;
int i, j, x = 0;
int count = 0;

if (ac == 0 || av == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		count++;
	}
	count++;
}
ar = (char *)malloc((count + 1) * sizeof(char));

if (ar == NULL)
{
	free(ar);
	return (NULL);

}
for (x = 0; x < count;)
{
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, x++)
			ar[x] = av[i][j];


		ar[x] = '\n';
		x++;
	}
}

return (ar);
}
