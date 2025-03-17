#include<stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) { // Only check up to sqrt(num) for efficiency
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num)); // Directly print the result of isPrime
    }
    return 0;
}
