#include <stdio.h>

int main()
{
    int N, i, sum = 1;
    scanf("%d", &N);
    if (N <= 0 || 13 <= N)
    {
        exit(0);
    }

    for (i = 1; i <= N; i++)
    {
        sum *= i;
    }
    printf("%d\n", sum);

    return 0;
}


