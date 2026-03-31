#include <stdio.h>


int factorial(int n);

int main(){
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n , factorial(n));
    return 0;
}

int factorial(int n){
    if (n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}