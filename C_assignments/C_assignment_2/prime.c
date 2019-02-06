#include <stdio.h>
int main()
{
    int l, h, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &h);

    printf("Prime numbers between %d and %d are: ", l, h);

    while (l < h)
    {
        flag = 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}

