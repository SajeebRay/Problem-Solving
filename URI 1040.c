#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,N,Media;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    Media=(N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;
    printf("Media: %.1lf\n",Media);

    if(Media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }

    else if(Media >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&N);
        printf("Nota do exame: %.1lf\n",N);

        if (N + Media / 2.0 > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (N + Media ) / 2.0);
    }

    else
    {
        printf("Aluno reprovado.\n");
    }
    return 0;

}

