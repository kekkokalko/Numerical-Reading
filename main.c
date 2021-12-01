/*Per soddisfare le richieste della traccia si è pensato di usufruire di due matrici di tipo Cella (struct). La prima che contiene
esattamente gli stessi valori, sia numerici che letterari, della matrice presente nella traccia; la seconda avente gli stessi valori numerici
ma invertiti di segno. Si necessita di una stringa che contenga un numero (tra quelli presenti nella matrice), in forma letteraria. Ci serviranno
anche due fucntion: la prima, per il calcolo della somma di tutti i valori corrispondenti alle posizioni delle varie lettere della stringa
all'interno della matrice; la seconda, presente nella prima, per la ricerca di ogni lettera della stringa all'interno della matrice. Se il numero
digitato in origine è positivo, l'algoritmo lavorerà sulla prima matrice, se il numero è negativo (stringa che inizia con il '!'), allora si lavorerà
sulla seconda amatrice.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funzioni.h"

int main()
{
    printf("Lettura numerica!\n");
    //Variabile che indica la lunghezza della stringa che conterrà il numero lettera per lettera
    int length;
    //Array che conterrà il valore letterario del numero scelto
    char numero[13];
    int n,i;
    /*Di seguito la matrice che avrà per ogni cella un valore numerico e un carattere (ogni cella sarà di tito Cella). Verrà usufruiita qualora
    il numero digitato sia positivo*/
    Cella matrice[4][4]={-04,'E',17,'I',-2,'N',16,'S',
                          24,'L',-9,'F',20,'T',-6,'R',
                         -25,'W',12,'U',-22,'G',7,'O',
                         01,'V',-27,'X',11,'Y',-3,'M',};
    /*Di seguito la matrice che avrà per ogni cella un valore numerico e un carattere (ogni cella sarà di tito Cella). Verrà usufruiita qualora
    il numero digitato sia negativo*/
    Cella matrice1[4][4]={04,'E',-17,'I',2,'N',-16,'S',
                         -24,'L',9,'F',-20,'T',6,'R',
                          25,'W',-12,'U',22,'G',-7,'O',
                         -01,'V',27,'X',-11,'Y',3,'M',};
    visualizzaM(matrice);
    visualizzaM1(matrice1);
    //For che permetterà di soddisfare per 3 volte le richieste della traccia
    for(i=0;i<3;i++)
    {
        letturaN(numero);
        length=strlen(numero);
        n=calcolo(matrice,matrice1,numero,length);
        printf("Il valore numerico della parola digitata e':%d\n",n);
    }
    return 0;
}

