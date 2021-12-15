#include "header.h"

/*la procedura lista_movimenti ci permette di visualizzare i movimenti effettuati
da un utente da selezionare(id) controllando se questi sono avvenuti nella data selezionata
INPUT: i per controllare la validità dell id che verrà chiesto
OUTPUT: nessuno*/
void lista_movimenti(i)
{
    int id;//rappresenta l'ID dell'utente che cerchiamo
    printf("\n       - LISTA MOVIMENTI -\n\n");//stampa il nome della sezione del menù che stiamo visitando
    printf("Inserire l'ID di un utente per visualizzare la sua lista movimenti: ");
    scanf("%d",&id);//chiede l ID dell'utente di cui vogliamo conoscere i movimenti
    if(id<0 || id>i-1)//se l ID inserito non è stato ancora generato
        {printf("ID non presente nel sistema.\n");//avvisa che l'ID non esiste
        return;}//e termina la ricerca
    printf("L'utente %s %s ha effettuato %d movimenti totali.\n",utente[id].nome,utente[id].cognome,utente[id].n_mov);//stampa il totale dei movimenti dell'utente

    if(data()==1)//se l'inserimento della data è corretto saranno cercati i movimenti bancari
        {int j,trovato=0;//la variabile trovato variabile tiene il conto dei movimenti trovati

        for (j = 0; j < utente[id].n_mov; j++)//controllo ogni operazione effettuata dall'utente scelto
	        {if ((utente[id].op[j].giorno==giorno) && (utente[id].op[j].mese==mese) && (utente[id].op[j].anno==anno))//Se l'utente ha effettuato operazioni nella data indicata
		        {trovato++;//incrementa trovato
                printf("%d-esimo movimento rilevato nella data scelta: %d euro.\n",trovato, utente[id].op[j].saldo);}}//stampa il movimento
	    if (trovato == 0)//se alla fine della ricerca non è stato trovato nulla
		    printf("Non sono stati effettuati movimenti in questa data.\n\n");}//avvisia l'utente che non ci sono movimenti
}

