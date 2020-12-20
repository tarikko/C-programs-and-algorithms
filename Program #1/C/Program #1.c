#include <stdio.h>

int main()
{   
    int num;  
    int number_of_devisors;

    printf("Please enter a number.\n");
    scanf("%d", &num);

    printf("The divisors of %d are : ", num);
    for (int i = 1; i <= num; i++){
        if (num%i == 0) {
            printf("%d ", i);
            number_of_devisors++;
        }
    }
    printf("\n");
    printf("This number is an ");
    if(num%2 == 0) {
        printf("even number, ");
    } else {
        printf("odd number, ");
    }
    printf("and it is ");
    if(number_of_devisors == 2) {
        printf("a prime number.");
    } else {
        printf("not a prime number.");
    }
    Is_prime(number_of_devisors);
    return 0;
}
//This program was created by Tarik Abdelkader
