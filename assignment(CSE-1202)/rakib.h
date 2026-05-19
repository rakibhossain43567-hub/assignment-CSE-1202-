#include <stdio.h>
#include <math.h>
#include<stdbool.h>

// ---------- Basic Functions ----------
int max(int a, int b) {
    if(a>b) return a;
    else return b;
}

int min(int a, int b) {
    if(a<b) return a;
    else return b;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i<=n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isOdd(int n) {
    if(n%2!=0) return true;
    else return false;
}

bool isEven(int n) {
    if(n % 2 == 0) return true;
    else return false;
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}



// ---------- Number Conversion ----------
void decimalToBinary(int n) {
    if (n == 0) { 
        printf("0"); 
        return; 
    }
    int bin[32], i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        i++;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}


void binaryToDecimal(long long n) {
    long long dec=0, base=1;
    while(n>0) {
        int lastDigit = n % 10;
        dec += lastDigit * base;
        base *= 2;
        n /= 10;
    }
    printf("%d",dec);
}




void decimalToOctal(int n) {
    int octal[100], i = 0;

    while (n > 0) {
        octal[i] = n % 8; 
        n /= 8;             
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);  
    }
    printf("\n");
}


void decimalToHex(int n) {
    char hex[100];
    int i = 0;

    while (n > 0) {
        int rem = n % 16;   
        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';
        n /= 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]); 
    }
    printf("\n");
}



// ---------- Additional Functions ----------
long long factorial(int n) {
    if (n == 0) return 1;
    long long fact=1;
    for(int i=n;i>=1;i--) {
        fact*=i;
    }
    return fact;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

long long power(int base, int pow) {
    long long result = 1;
    for (int i = 0; i < pow; i++) {
        result *= base;
    }
    return result;
}

bool isPalindrome(int n) {
    if(n == reverseNumber(n)) return true;
    else return false;
}

