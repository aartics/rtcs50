#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int count = 0;
    int count25 = 0;
    int count10 = 0;
    int count5 = 0;
    int count1 = 0;
    int remainder_25 = 0;
    int remainder_10 = 0;
    int remainder_5 = 0;
    
    printf("How much change?\n");
    float user_float = GetFloat();
    float round_float = roundf(user_float * 100);
    int user_int = (int)(round_float);
    
    if (user_int >= 25)
    {
        count25 = user_int / 25;
        count = count + count25;
        
        remainder_25 = user_int % 25;
        
        if (remainder_25 >= 10)
        {
            count10 = remainder_25 / 10;
            count = count + count10;
        
            remainder_10 = remainder_25 % 10;
            
            if (remainder_10 >= 5)
            {
                count5 = remainder_10 / 5;
                count = count + count5;
                
                count1 = remainder_10 % 5;
                count = count + count1;
            }
            else if (remainder_10 < 5)
            {
                count1 = remainder_10;
                count = count + count1;
            }
        }
        
        else if (remainder_25 < 10 && remainder_25 >= 5)
        {
            count5 = remainder_25 / 5;
            count = count + count5;
                
            remainder_5 = remainder_25 % 5;
            
            if (remainder_5 >= 1)
            {
                count1 = remainder_5;
                count = count + count1;
            }
        }
        
        else if (remainder_25 < 5)
        {
            count1 = remainder_25;
            count = count + count1;
        }
    }
    
    else if (user_int < 25 && user_int >= 10)
    {
        count10 = user_int / 10;
        count = count + count10;
        
        remainder_10 = user_int % 10;
            
        if (remainder_10 >= 5)
        {
            count5 = remainder_10 / 5;
            count = count + count5;
                
            count1 = remainder_10 % 5;
            count = count + count1;
        }
        else if (remainder_10 < 5)
        {
            count1 = remainder_10;
            count = count + count1;
        }
    }
    
    else if (user_int < 10 && user_int >= 5)
    {
        count5 = user_int / 5;
        count = count + count5;
                
        remainder_5 = remainder_25 % 5;
            
        if (remainder_5 >= 1)
        {
            count1 = remainder_5;
            count = count + count1;
        }
    }
    else if (user_int < 5 && user_int >= 0)
    {
        count1 = user_int;
        count = count + count1;
    }
    
    else if (user_int < 0)
    {
        main();
    }
    printf("%d\n", count);
    
}


