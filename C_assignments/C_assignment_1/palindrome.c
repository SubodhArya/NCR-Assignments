#include <stdio.h>
int main()
{
    int n, rI = 0, rem, ori;

    printf("Enter an integer: ");
    scanf("%d", &n);

    ori = n; 
    while( n!=0 )
    {
        rem = n%10;
        rI = rI*10 + rem;
        n = n/10;
    }

       if (ori == rI)
        printf("%d is a palindrome.", ori);
    else
        printf("%d is not a palindrome.", ori);
    
    return 0;
}

