#include <stdio.h>
#include <math.h>
 
int main()
{
    int n, s, r, final , temp;
	s=0;
	r=0;
	final=0;
	temp=0;
 
    printf ("enter a number");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        r = n % 10;
        final = pow(r, 3);
        s = s + final;
        n = n / 10;
    }
    if (s == temp)
        printf ("The given number is armstrong no");
    else
        printf ("The given number is not a armstrong no");
}

