#include "header.h"

void main()
{
    int i=0;//la variabile i terr� conto del numero di ID creati
    int n=0;//questa variabile permette� di uscire dal ciclo while
    int selezione_menu;//questa variabile indica la scelta presa nel men� del programma
    printf("\n========================================================\n");//stampa un benvenuto all'utente
    printf("   BENVENUTO NEL PROGRAMMA DI GESTIONE CONTO CORRENTE   ");
    printf("\n========================================================\n");
    while(n==0)//fin quando l'utente non decider� di uscire il men� apparir� automaticamente alla fine di ogni operazione
    {
        printf("\n      - MENU' PRINCIPALE - \n\n1 - Inserire nuovo correntista;\n2 - Effettua un movimento\n3 - Visualizza lista dei movimenti;\n0 - Termina il programma.\nScelta: ");//Stampo il men� del programma
        fflush(stdin);//ripuliamo il buffer
        scanf("%d",&selezione_menu);//dico al programma cosa voglio fare
        system("cls");//quest'istruzione pulisce lo schermo del computer
        switch(selezione_menu)
        {
        case 1:       //inserendo 1 inserisco un nuovo correntista
            i=i+aggiunta_utente(i); //la function aggiunta_utente incrementa una variabile i che tiene conto del numero di utenti creati per generare sempre ID diversi
            break;
        case 2:      //inserendo 2 possiamo effettuare un movimento. nota:per effettuare un movimento devono essere creati almeno 2 utenti
            movimento(i);
            break;
        case 3:     //inserendo 3 abbiamo accesso alla lista dei movimenti effettuati
            lista_movimenti(i);
            break;
        case 0:     //inserendo 0 usciamo dal menu� e possiamo terminare il programma
            n++;    //incrementando la variabile n possiamo uscire dal while
            printf("\n       - CONTO CORRENTE -\n\n");
            printf("Grazie per aver utilizzato il programma!\n");
            break;
        default:    //inserendo un elemento non riconosciuto apparir� una scritta che ci chiede di riprovare
            printf("Operazione richiesta non riconosciuta. Riprovare.\n");
            system("\nPAUSE");//mette in pausa l'esecuzione del programma fin quando l'utente non preme un tasto
            break;
        }
    }
}
