#include <stdio.h>
#include <math.h>
int BToD(long long n);
long long DToB(int n);

int main()
{
	 int dn;
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
	
    printf("Enter a decimal number: ");
    scanf("%d", &dn);
    printf("%lld in binary = %d in decimal\n", n, BToD(n));
    printf("%d in decimal = %lld in binary\n", dn, DToB(dn));
 
}

int BToD(long long n)
{
    int dec = 0, i = 0, rem;
    while (n!=0)
    {
        rem = n%10;
        n /= 10;
        dec += rem*pow(2,i);
        ++i;
    }
    return dec;
}
long long DToB(int n)
{
    long long binary = 0;
    int rem, i = 1;

    while (n!=0)
    {
        rem = n%2;
        n /= 2;
        binary += rem*i;
        i *= 10;
    }
    return binary;
}

