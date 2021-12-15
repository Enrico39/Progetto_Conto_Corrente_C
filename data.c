#include "header.h"

/*la function data() permette di inserire giorno mese e anno di un movimento bancario all'utente
e ne controlla la validità (es. giorno<32,mese<13,anno<2022).
INPUT: nessuno
OUTPUT:Se la data non è valida la function restituisce 0, e non permette al controllo if(data()==1) dove è stata chiamata di essere verificato. se la function ritorna 1 è andato tutto a buon fine*/
int data()
{
    printf("Inserisci il giorno: ");
    scanf("%d",&giorno);      //chiede il giorno del movimento
    if(giorno<1 || giorno >31)//controlla che il giorno sia opportuno
        {printf("Inserimento della data errato, riprova.\n");//se inopportuno restituisce un messaggio di errore
        return 0;}//ed esce dalla function e il controllo if(data()==1) non sarà valido

    printf("Inserisci il mese: ");
    scanf("%d",&mese);    //chiede il mese del movimento
    if(mese<1 || mese >12)//controlla che il mese sia opportuno
        {printf("Inserimento della data errato, riprova.\n");//se inopportuno restituisce un messaggio di errore
        return 0;}//ed esce dalla function e il controllo if(data()==1) non sarà valido

    printf("Inserisci l'anno: ");
    scanf("%d",&anno);        //chiede l'anno del movimento
    if(anno<1926 || anno>2021)//controlla che l'anno sia opportuno
        {printf("Inserimento della data errato, riprova.\n");//se inopportuno restituisce un messaggio di errore
        return 0;}//ed esce dalla function e il controllo if(data()==1)non sarà valido

    return 1;//se la function ritorna 1 è andato tutto a buon fine e il controllo if(data()==1)avrà successo
}

