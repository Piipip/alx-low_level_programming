#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
    int pass[100];
    int i, sum, n;

    sum = 0;

    srand(time(NULL));
    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 1000; // Generating random numbers between 0 and 999
        sum += pass[i]; // Accumulating the sum of the generated numbers
    }

    // Calculating the average of the generated numbers
    n = sum / 100;

    printf("Average of the 100 random numbers: %d\n", n);

    return 0;
}

