/*
Nome del progetto: Conto corrente

Creatore del programma: Madonna Enrico

Descrizione:Si supponga di voler gestire i conti correnti di n utenti. Ogni utente è identificato dal
Cognome, Nome, numero del conto, lista movimenti.
Gestire i conti correnti e gestire le seguenti operazioni
• Inserire un nuovo correntista a cui viene assegnato un codice univoco.
• Visualizzare la lista movimenti di un dato correntista (dato il numero del
conto o Cognome/Nome) in una fissata data.
*/

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
//Le librerie di cui il programma ha bisogno
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 20//definisco la dimensione degli array del programma

//definisco una struct per gestire le operazioni
typedef struct _operazioni{int ID;//variabile per salvare l'id di ogni correntista
                           int giorno;//variabile per salvare il giorno delle operazioni bancarie
                           int mese;//variabile per salvare il giorno delle operazioni bancarie
                           int anno;//variabile per salvare il giorno delle operazioni bancarie
                           int saldo;}operazioni;//variabile per salvare saldo delle operazioni bancarie

//definisco una struct per gestire gli utenti
typedef struct _correntista{char cognome[M];//variabile per salvare il nome di ogni correntista
                            char nome[M];//variabile per salvare il cognome di ogni correntista
                            int n_mov;//variabile per salvare numero di movimenti di ogni correntista
                            operazioni op[M];}correntista;

//prototipi
int aggiunta_utente(int);//aggiunge un utente al sistema
void movimento(int);//effettua un movimentro tra 2 utenti
void lista_movimenti(int);//visualizza la lista di movimenti di un utente
int data();//richiede l'inserimento di una data

correntista utente[M];//dichiarazione della variabile di tipo correntista che immagazzina le informazioni degli utenti(nome,cogmoe,ID,movimenti)
int giorno, mese, anno;//altre variabili globali utilizzate in più di una function

#endif // HEADER_H_INCLUDED
