#include "header.h"

/*la procedura movimento() effettua un movimento bancario tra 2 utenti che vogliamo
INPUT: passiamo la variabile i per effettuare il controllo sulla validità degli ID che effettuano il movimento
OUTPUT : nessuno*/
void movimento(i)
{
    printf("\n      - MOVIMENTO BANCARIO -\n\n");//stampa il nome della sezione del menù che stiamo visitando

    int mittente,destinatario,movimento;//dichiariamo le variabili che rappresentano gli ID degli utenti coinvolti nel movimento e il movimento in sè

    printf("Inserire l'ID dell'utente che vuole trasferire denaro: ");
    scanf("%d",&mittente);//chiede il mittente
    if(mittente<0 || mittente>i-1)//si assicura che il mittente esista
        {printf("ID non presente nel sistema.\n");//se non esiste restituisce un messaggio di errore
        return;}//e interrompe il movimento

    printf("Inserire l'ID del destinatario: ");
    scanf("%d",&destinatario);//chiede il destinatario
    if(destinatario<0 || destinatario>i-1)//si assicura che il destinatario esista
        {printf("ID non presente nel sistema.\n");
        return;}//e interrompe il movimento

    if (mittente==destinatario)//si assicura che mittente e destinatario siano diversi
        {printf("Non puoi trasferire denaro a te stesso!\n");
        return;}//e interrompe il movimento

    printf("Quanto denaro vuoi trasferire? ");//chiede la somma da trasferire
    scanf("%d",&movimento);
     if (movimento<=0)//e si assicura che la somma da trasferire sia > 0
        {printf("Trasferimento non eseguibile. Inserisci una cifra maggiore di 0.\n");
        return;}//se il movimento è <= 0 interrompe la procedura

    if (data()==1)//se la function data restituisce 1 (e quindi la data inserita è corretta) viene salvato il movimento bancario
        {int a, b;//dichiaro 2 variabili per salvare in numero del movimento effettuato
	    a = utente[mittente].n_mov;
 	    b = utente[destinatario].n_mov;
        //salvo i dati del trasferimento bancario (soldi trasferiti e la data)
        utente[mittente].op[a].saldo= -movimento; // assegno il saldo del movimento al mittente(cambia il segno poiche al mittente i soldi sono tolti)
	    utente[mittente].n_mov++;//incremento il numero movimenti del mittente
	    utente[destinatario].op[b].saldo=movimento;// assegno il saldo del movimento al mittente
    	utente[destinatario].n_mov++;//incremento il numero movimenti del destinatario

    	//salvo la data del movimento sia per il mittente che per il destinatario
        utente[mittente].op[a].giorno=giorno;
	    utente[destinatario].op[b].giorno=giorno;
	    utente[mittente].op[a].mese=mese;
	    utente[destinatario].op[b].mese=mese;
	    utente[mittente].op[a].anno=anno;
	    utente[destinatario].op[b].anno=anno;
        printf("Trasferimento completato!\n");}//comunica all'utente che tutto è stato eseguito correttamente
}
