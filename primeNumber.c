#include <stdio.h>

int primaryChecking(int number){

    /*Checking if primary*/
    int is_primary = 1;
    if(number <= 1)
        is_primary = 0;
    else 
        for (int i = 2 ; i <= (number / 2) ; i++)
            if( number % i == 0 )
                is_primary = 0 ;
    return is_primary;
}

/*
int main(){

    int Input;

    System input
    printf("Enter a number : ");
    scanf("%d" , &Input);

    Call the function
    int Check = primaryChecking(Input);

    Display
    if (Check == 1)
        printf("%d is a prime number" , Input);
    else
        printf("%d is not a prime number" , Input);

    return 0;
}
*/