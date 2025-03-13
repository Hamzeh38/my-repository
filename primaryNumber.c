#include <stdio.h>

int primaryChecking(int number){
    int is_primary = 1;
    if(number <= 1)
        is_primary = 0;
    else 
        for (int i = 2 ; i <= (number / 2) ; i++)
            if( number % i == 0 )
                is_primary = 0 ;
    return is_primary;
}

int main(){

    int Input;

    /*System input*/
    printf("Enter a number : ");
    scanf("%d" , &Input);

    /*Checking if primary*/
    int check = primaryChecking(Input);
      
    /*Display*/
    if (check == 1)
        printf("%d is a primary number" , Input);
    else
        printf("%d is not a primary number" , Input);
        
    return 0;
}