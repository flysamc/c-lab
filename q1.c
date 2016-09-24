#include <stdio.h>
//enter an array of number.
int main()
{
    int a[20];
    int b,i;
    printf("input numbers to fill an array of 20\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array of numbers:\n");
    for(i=0;i<10;i++)
    {   
        
        printf("%d",a[i]);
        if(a[i]<19)
        printf(",");
    }
    printf("\n");
    
    
    
}
//print the array
//input a number you want to search
//search the number
//print the number