#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int sum;
    for(int i = 0; i<1000;i++)
    {
        if((i % 5) == 0 || (i % 3) == 0 )
        sum = sum + i;
    }
    printf("answer is: %i\n", sum);
}

/* project euler problem 1 answer (C language) 
by Mustafa Kadan */ 