#include <stdio.h>
#include <stdlib.h>

int main (){

    double N;
    int M, C;

    scanf ("%lf", &N);

    M=(N);
    C=((N-M)*100);

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", M/100);
    M=(M%100);
    printf ("%d nota(s) de R$ 50.00\n", M/50);
    M=(M%50);
    printf ("%d nota(s) de R$ 20.00\n", M/20);
    M=(M%20);
    printf ("%d nota(s) de R$ 10.00\n", M/10);
    M=(M%10);
    printf ("%d nota(s) de R$ 5.00\n", M/5);
    M=(M%5);
    printf ("%d nota(s) de R$ 2.00\n", M/2);
    M=(M%2);
    printf("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", M/1);
    printf ("%d moeda(s) de R$ 0.50\n", C/50);
    C=(C%50);
    printf ("%d moeda(s) de R$ 0.25\n", C/25);
    C=(C%25);
    printf ("%d moeda(s) de R$ 0.10\n", C/10);
    C=(C%10);
    printf ("%d moeda(s) de R$ 0.05\n", C/5);
    C=(C%5);
    printf ("%d moeda(s) de R$ 0.01\n", C/1);

    return 0;
}