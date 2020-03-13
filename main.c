#include <stdio.h>
#include "nodo.h"

	void stampa(Nodo *head);

	int main(){
	
	/*Aggiungiamo il valore NULL alla testa della coda di nodi*/
	
    	Nodo *head = NULL;

     /* Creiamo il nodo principale di nome A */
    
   		 Nodo A;
   		 
    	 A.x = 9;
   		 A.next = NULL;
   		 
     /* Dopodichè aggiungiamo A alla coda dei nodi sostituendo il valore del nodo A con il NULL precedente. */
    
   		 head = &A;

     /* Creiamo il secondo nodo di nome B */
    
  		 Nodo B;
  		 
    	 B.x = 8;
   		 B.next = NULL;
   		 
     /* Posizioniamo il nodo B dopo il nodo A */
    
   		 A.next = &B;

     /* Creiamo l'ultimo nodo di nome C */
    
   		 Nodo C;
   		 
   		 C.x = 2;
   		 C.next = NULL;
   		 
   	 /* Inseriamo il valore nel nodo C in testa (prima posizione) alla coda */
   	
   		 C.next = head;
   		 head = &C;

	 /* Stampiamo la serie dei nodi*/

   		 stampaNodi(head);
    
    return 0;
}

/*Funzione per stampare i valori di ogni nodo in ordine*/
	 void stampaNodi(Nodo *head){
	 	
    	 Nodo *temp;
		 temp = head;
    
    	 while (temp != NULL) {
    	
         	 printf("%d_", temp->x);
        
        	 temp = temp->next;
     }
    
    	 printf("null");
    
}
