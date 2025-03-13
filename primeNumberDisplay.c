#include <stdio.h>

/*Display all primary number lower than the input using the function 'primaryChecking' in "primaryNumber" file*/
int main(){
    
    /*Read the input number*/
    int Input;
    printf("enter a number to display all primary number below it : ");
    scanf("%d",&Input);

    /*Define the function primaryChecking to use it*/
    int primaryChecking(int number);

    /*Display all primary number using the function*/
    int check = 0;
    for (int i = 2 ; i <= Input ; i++){
        check = primaryChecking(i);
        if (check == 1)
            printf("%d \n", i);
    }

    return 0;
}