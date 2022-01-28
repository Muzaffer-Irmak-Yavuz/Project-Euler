/**
 * @file main.c
 * @author Muzaffer Irmak Yavuz (muzafferirmakyavuz@gmail.com)
 * @brief Find the sum of all the multiples of 3 or 5 below 1000.
 * @version 1.1
 * @date 2022-01-28
 * 
 * 
 */


#include <stdio.h>


int sum_of_multiplies(void)
{
    int sum = 0;
    const int MAX_NUM = 1000;

    for (size_t index = 0; index < MAX_NUM; index++)
    {
        if (index % 3 == 0 || index % 5 == 0) {
            sum += index;
        }
    }
    return sum;
    
}



int main(void)
{
    printf("%d",sum_of_multiplies());
    
    return 0;
}
