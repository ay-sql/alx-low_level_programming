#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that calculates the minimum number of coins
 * @amount: The amount for which we want to find the minimum coins
 * Return: The number of coins needed for the given amount
 */
int coinConverter(int amount)
{
    int coins[] = {25, 10, 5, 2, 1};
    int coin_count = 0;

    if (amount <= 0)
        return 0;

    for (int i = 0; i < 5; i++)
    {
        while (amount >= coins[i])
        {
            amount -= coins[i];
            coin_count++;
        }
    }

    return coin_count;
}

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    int amount = atoi(argv[1]);

    if (amount < 0)
        printf("0\n");
    else
    {
        int coin_count = coinConverter(amount);
        printf("%d\n", coin_count);
    }

    return 0;
}
