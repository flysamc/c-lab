#include <stdio.h>

int main()
{
    //try to print the memory address of any variable
    int sam = 0;
    printf("memory address|\tname\t|value\t|\n");
    printf("%p|%s\t|%d\t|\n",&sam,"sam",sam);
    //pointers are special type of variables that hold memory addresses.
    int * pSam = &sam;//defining pointer
     printf("%p|%s\t|%p\t|\n",&pSam,"pSam",pSam);
     //pointer are special variable which store the memory address of some variable in its
     //own new memory address.
     //Dereferencing pointer-used to get the value  of variable whom address the pointer has
     printf("*pSam: %d\n",*pSam);
     //changing value of a variable by dereferencing 
     *pSam = 71;
     printf("changing the value by dereferencing:\n");
     printf("now sam is %d\n",*pSam);
     //pointer and arrays
     int i;
     int array[5] = {1,9,2,8,3};
     for(i=0;i<5;i++)
     {
         printf("array[%d]\t%p\t%d\n",i,&array[i],array[i]);
     }
     printf("array\t\t%p\n",array);//array names are just first element.
    //accesing element value of an array using dereferencing.
    
    for(i=0;i<5;i++)
     {
         printf("array[%d]\tvalue: %d\n",i,*(array+i));
     }
    
}