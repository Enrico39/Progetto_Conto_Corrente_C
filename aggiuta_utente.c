#include "header.h"
/*la function aggiunta_utente() serve ad aggiungere un utente al programma.
INPUT:  variabile i usata per assegnare gli ID.
OUTPUT: Ogni volta che sarà creato un nuovo utente la function restituirà 1, quest'unità andrà ad incrementare i nel main.*/
int aggiunta_utente(int i)
{
    printf("\n     - INSERIMENTO UTENTE -\n\n");//stampa il nome della sezione del menù che stiamo visitando
    fflush(stdin);//ripuliamo il buffer

    printf("Nome del nuovo utente: ");
    gets(utente[i].nome);//inseriamo il nome utente nell'opportuna struct
    if (strlen(utente[i].nome)>M)//se il nome è troppo lungo verrà segnalato un errore e la function finirà, la lunghezza massima M è 20 caratteri
        {printf("Nome troppo lungo, riprova.\n");
        return 0;}

    printf("Cognome del nuovo utente: ");
    gets(utente[i].cognome);//chiede il cognome
    if (strlen(utente[i].cognome)>M)//se il cognome è troppo lungo verrà segnalato un errore e la function finirà, la lunghezza massima M è 20 caratteri
        {printf("Cognome troppo lungo, riprova.\n");
        return 0;};

    utente[i].op[i].ID=i;//assegno un ID univoco al nuovo utente
	utente[i].n_mov=0;//inizializzo il numero di movimenti che ha fatto l'utente a 0

    printf("Riepilogo dati: Conto di %s %s [ID = %d]\n",utente[i].nome,utente[i].cognome,utente[i].op[i].ID);//riepilogo dati
    return 1;
}
