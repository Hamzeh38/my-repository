#include <stdio.h>

int main(){

    int number , is_primary = 1 ;

    /*System input*/
    printf("Enter a number : ");
    scanf("%d" , &number);

    /*Checking if primary*/
    if(number <= 1)
       is_primary = 0;
    else 
        for (int i = 2 ; i <= (number / 2) ; i++)
            if( number % i == 0 )
                is_primary = 0 ;
                
    /*Display*/
    if (is_primary == 1)
        printf("%d is a primary number" , number);
    else
        printf("%d is not a primary number" , number);

    return 0;
}