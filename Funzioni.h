/*Di seguito la dichiarazione della struttura con i suoi 2 campi. Da tale struct genereremo il nuovo tipo Cella che deriverà da
struct cella.*/
struct cella
{
    int numero;
    char lettera;
};
typedef struct cella Cella;
/*Di seguito la procedura che stamperà a video il contenuto della matrice di tipo Cella. Non restituendo nulla al main è di tipo void
e ha come unico parametro d'ingresso la prima matrice.*/
void visualizzaM(Cella[][4]);
/*Di seguito la procedura che stamperà a video il contenuto della seconda matrice di tipo Cella. Non restituendo nulla al main è di
tipo void e ha come unico parametro d'ingresso la seconda matrice.*/
void visualizzaM1(Cella[][4]);
/*Di seguito la procedura per la lettura del numero sottoforma di stringa. Non restituisce nulla al main e avrà come unico parametro
di input la stringa stessa.*/
void letturaN(char[]);
/*Di seguito la function per il conteggio dei valori contenuti nella posizione di ogni lettera della stringa 'numero' all'interno
della matrice. E' di tipo int perchè restituisce il risultato della somma generata per ogni lettera al main. Ha come parametri d'ingresso
la matrice di tipo Cella, la stringa 'numero', e la lunghezza di quest'ultima.*/
int calcolo(Cella[][4],Cella[][4],char[],int);
/*Function contenuta all'interno della function 'calcolo'. Usufruita per la ricerca di ogni lettera della stringa 'numero' positiva
all'interno della matrice di tipo Cella. Restituisce il numero contenuto nella posizione della lettera all'interno della matrice.
Ha come parametri d'ingresso la matrice,la lettera della stringa al passo i e la lunghezza di quest'ultima.*/
int ricerca(Cella[][4],char[],int);
/*Function contenuta all'interno della function 'calcolo'. Usufruita per la ricerca di ogni lettera della stringa 'numero' negativa
all'interno della matrice di tipo Cella. Restituisce il numero contenuto nella posizione della lettera all'interno della matrice.
Ha come parametri d'ingresso la matrice, la lettera della stringa al generico passo i e la lunghezza di quest'ultima.*/
int ricerca1(Cella[][4],char[],int);
