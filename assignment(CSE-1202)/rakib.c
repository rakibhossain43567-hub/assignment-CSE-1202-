#include <stdio.h>
#include "rakib.h"


int main() {
    // Basic Functions
    printf("Max(10, 20) = %d\n", max(10, 20));

    printf("Min(10, 20) = %d\n", min(10, 20));

    if(isPrime(29)) printf("29 is a prime number\n");
    else printf("29 is a not prime number\n");

    if(isOdd(7)) printf("7 is a odd number\n");
    else printf("7 is a even number number\n");

    if(isEven(8)) printf("8 is a even number\n");
    else printf("8 is a odd number number\n");


    printf("digitSum(12345) = %d\n", digitSum(12345));

    printf("reverseNumber(1234) = %d\n", reverseNumber(1234));

    if(isPalindrome(121)) printf(" Palindrome. \n");
    else printf("Not palindrome.\n");

    printf("\n\n");

    // Number Conversion
    printf("Decimal to Binary (10): ");
    decimalToBinary(10);
    printf("\n");

    printf("Binary to Decimal (1010): ");
    binaryToDecimal(1010);
    printf("\n");

    decimalToOctal(100);
    decimalToHex(255);
    printf("\n");

    // Additional Functions
    printf("Factorial(5) = %lld\n", factorial(5));
    printf("GCD(48, 18) = %d\n", gcd(48, 18));
    printf("LCM(12, 15) = %d\n", lcm(12, 15));
    printf("Power(2^10) = %lld\n", power(2, 10));

    return 0;
}
