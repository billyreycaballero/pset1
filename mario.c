#include <stdio.h>
#include <cs50.h>


int halfPyramid(int h);

int main(void)
{
    int height;
    
    do
    {
        printf("Enter the height of the half pyramid: ");
        height = GetInt();
    }
    while(height < 0 || height > 23);
    
    halfPyramid(height);
}

int halfPyramid(int h)
{
    int space = h - 1;
    int hash = 2;
    
    if(h == 0)
    {
        printf("");
    }
    else
    {
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < space; j++)
            {
                printf(" ");
            }
            for(int k = 0; k < hash; k++)
            {
                printf("#");
            }
            
            printf("\n");
            
            space--;
            hash++;
        }
    }
    return 0;
}

