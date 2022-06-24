#include <cstring>
#include <iostream>
#include <cstdio>
#include <cctype>

int main() {

int nota[8][2];
int i,j;
int maior, menor;
maior = nota[0][0];
menor = nota[0][0];
for (i = 0; i < 8; i++)
{
    for (j = 0; j < 2; j++)
    {
        printf ("Informe uma nota para o aluno %d: ", i+1,":/n");
        scanf ("%d", &nota[i][j]);
        if (nota[i][j] > maior)
        {maior = nota[i][j];}
        if (nota[i][j] < menor)
        {menor = nota[i][j];}
    }
    
}
printf ("\nNota maior: %d", maior);
printf ("\nNota menor: %d", menor);
printf ("\n");
return 0;
}