#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cella
{
    int numero;
    char lettera;
};
typedef struct cella Cella;
void visualizzaM(Cella matrice[][4])
{
    int i,j;
    printf("Se il numero selezionato sara' positivo la matrice su cui si lavorera' e':\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t\t\t%d/",matrice[i][j].numero);
            printf("%c",matrice[i][j].lettera);
        }
        printf("\n");
    }
}
void visualizzaM1(Cella matrice1[][4])
{
    int i,j;
    printf("Se il numero selezionato sara' negativo la matrice su cui si lavorera' e':\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t\t\t%d/",matrice1[i][j].numero);
            printf("%c",matrice1[i][j].lettera);
        }
        printf("\n");
    }
}
void letturaN(char numero[])
{
    printf("Inserire a lettere il valore da ricercare (in maiuscolo!); se si vuole inserire un numero negativo inserire il '!' all'inzio della stringa:");
    gets(numero);
}
int calcolo(Cella matrice[][4],Cella matrice1[][4],char numero[],int length)
{
    int i,n1=0;
    if(!(numero[0]=='!'))
    {
        for(i=0;i<length;i++)
            {
                n1=n1+ricerca(matrice,numero,i);
            }
    }
    else
    {
        for(i=0;i<length;i++)
            {
                n1=n1+ricerca1(matrice1,numero,i);
            }
    }
    return n1;
}
int ricerca(Cella matrice[][4],char numero[],int i)
{
    int j,x,n=0;
        for(j=0;j<4;j++)
        {
            for(x=0;x<4;x++)
            {
                if(numero[i]==matrice[j][x].lettera)
                {
                    printf("La posizione della lettera %c dell'array 'numero' e' [%d],[%d]\n",numero[i],j,x);
                    n=n+matrice[j][x].numero;
                }
            }
        }
    return n;
}
int ricerca1(Cella matrice1[][4],char numero[],int i)
{
    int j,x,n=0;
        for(j=0;j<4;j++)
        {
            for(x=0;x<4;x++)
            {
                if(numero[i]==matrice1[j][x].lettera)
                {
                    printf("La posizione della lettera %c dell'array 'numero' e' [%d],[%d]\n",numero[i],j,x);
                    n=n+matrice1[j][x].numero;
                }
            }
        }
    return n;
}

