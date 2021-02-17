/* Programm moodustab t�isarvuliste v��rtuste jaoks ahela.
 * Vaata, millises j�rjekorras andmeid lisatakse ehk lisa v�ljatr�kk
 * eelmisest n�itest l�htudes 
 */

#include <stdio.h>
#include <stdlib.h>


int main(void){
    struct element {
           int info; 
           struct element *next;
    };
/* Kaks muutujat - head selleks, et seal ahela esimese elemendi aadressi s�ilitada ning node abimuutujaks uue elemendi lisamisel. */
    struct element *head, *node, *current;
    int arv;
    
    head = NULL;
    printf("Sisesta arv! (L�petamiseks 0)");
/* Andmete sisestus (t�isarvud!) t��tab seni, kuni kasutaja tr�kib arvu 0 */
    scanf("%d",&arv);
    while (arv != 0){
          node = malloc(sizeof *node); 
          node->next = head; 	       
          node->info = arv;
          head = node; 		          
          printf("Sisesta arv! (L�petamiseks 0)");
          scanf("%d",&arv);
    }
    /*tekkinud ahela valjatrukk*/
    current = node;
    printf("Numbrid: ");
    while(current != NULL){
	    printf("%d\t", current->info);
	    current = current->next;
	}
	/*uue elemendi lisamine ahela algusesse, arv kusi kasutajalt*/
	printf("Millist elemendi lisame algusesse? ");
	scanf("%d, &arv);
}
