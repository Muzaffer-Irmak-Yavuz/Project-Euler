/**
 * @file main.c
 * @author Muzaffer Irmak Yavuz (muzafferirmakyavuz@gmail.com)
 * @brief What is the smallest positive number 
 * that is evenly divisible by all of the numbers from 1 to 20?
 * 
 * @version 0.1
 * @date 2022-02-01
 * 
 * 
 * 
 */


#include <stdio.h>
#include <limits.h>

int find_evenly_divisible(void)
{
    
    for (size_t i = 1; i < INT_MAX-1; i++)
    {
        int divisible_to = 1;
        for (size_t j = 2; j <= 20; j++)
        {
            if (i % j == 0)
            {
                divisible_to++;
            }
        }

        if (divisible_to == 20)
        {
            return i;
        }
        
    }
    
}



int main(int argc, char const *argv[])
{
    printf("Number is = %d",find_evenly_divisible());
    return 0;
}
