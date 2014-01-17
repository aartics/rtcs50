#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int k; 
    int i=0;
    int j=0;
    int h=0;
    do 
    { 
        printf("Height: "); 
        k = GetInt(); 
    } while (k < 0 || k > 23);
        
    for (h=0; h<k; h++)
        {
             for(i=h; i<(k-1); i++)
             {
                printf(" ");
            
             }
             
             for(j=0; j<(h+1); j++)
             {
                printf("#");
             }
            printf("#");
            printf("\n");    
        }
        
        return 0;
        
}
