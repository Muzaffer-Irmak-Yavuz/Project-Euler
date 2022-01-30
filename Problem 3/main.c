/**
 * @file main.c
 * @author Muzaffer Irmak Yavuz (muzafferirmakyavuz@gmail.com)
 * @brief What is the largest prime factor of the number 600851475143 ?
 * @version 0.1
 * @date 2022-01-30
 * 
 * 
 * 
 */


#include <stdio.h>
#include <stdint.h>

int isPrime(uint64_t number)
{
    for(size_t i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void largest_prime_factor_of(uint64_t number)
{
     for (uint64_t i = 2; i < number; i++)
     {
         
        if ( isPrime(i) && (number % i == 0)) {
            
            printf("%d ",i);
         }

         
     }

}



int main(int argc, char const *argv[])
{
    largest_prime_factor_of(600851475143 );
    return 0;
}
