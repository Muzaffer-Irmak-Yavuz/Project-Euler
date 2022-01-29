/**
 * @file main.c
 * @author Muzaffer Irmak Yavuz (muzafferirmakyavuz@gmail.com)
 * @brief By considering the terms in the Fibonacci sequence whose values do not
 *  exceed four million, find the sum of the even-valued terms.
 * @version 0.1
 * @date 2022-01-29
 * 
 * 
 * 
 */


#include <stdio.h>

int fibonacci(void)
{
    int sum = 2;
    int num1 = 1;
    int num2 = 2;
    int temp = num1;
    //printf("%d",1);
    while (num2 <= 4000000 && num1 <= 4000000)
    {
        //printf("%d  ",num2);
        num1 = num2;
        num2 = num1 + temp;
        temp = num1;

        if (num2 % 2 == 0)
        {
            sum += num2;
        }
        
    }
    return sum;
}



int main(int argc, char const *argv[])
{
    
    printf("%d",fibonacci());
    return 0;
}
