#include <stdio.h>
#include <stdlib.h>

int Is_even_or_odd(int number) {
    if(number%2 == 0) {
        printf("even number, ");
    } else {
        printf("odd number, ");
    }
}

int Is_prime(int devisors) {
    if(devisors == 2) {
        printf("a prime number.");
    } else {
        printf("not a prime number.");
    }
}

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
    Is_even_or_odd(num);
    printf("and it is ");
    Is_prime(number_of_devisors);
    return 0;
}

//This program was created by Tarik Abdelkader
