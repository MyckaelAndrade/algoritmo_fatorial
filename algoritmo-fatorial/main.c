#include <stdio.h>
main()
{
    int n, fatorial = 1;
    printf("Digite um número inteiro para calcular o fatorial: "); scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    printf("%d! = %d", n, fatorial);
}
