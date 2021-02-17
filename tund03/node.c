/* Ahela moodustamine "kirve meetodil".
 * Programmi eesm�rk on demonstreerida viitmuutujate kasutamist ja
 * �he h�sti v�ikese ahela (kolm elementi) tegemist.
 * Ahel koostatakse kirjetest (struct), mille �heks koostisosaks on viida- ehk aadressi-t��pi v�li.
 * Aadresside abil �hendatakse elemendid ahelaks.
 * Sarnane n�ide on N. Parlante materjalis "Linked List Basics."
 */

#include <stdlib.h>
#include <stdio.h>

/* T��piline n�ide elemendi kirjeldamiseks viitadega andmestruktuuri jaoks
 * N�ites on �ks aadressiv�li "next", kuid neid v�ib ka olla rohkem (enamasti kaks)
 * Info jaoks on t�isarvuline v�li "info".
 */


int main(void) {
    struct node {
        int info; 
        struct node *next;
    };
/* Viida t��pi muutujate (4 tk) deklareerimine struct element abil. K�ik nad on etten�htud viitama eespool kirjeldatud struktuurile ehk
   neisse v�ib omistada struct elemendi aadressi. */
 
    struct node *first, *second, *third, *current;
    printf("T�helepanu-t�helepanu, kohe tehakse ahel, mis koosneb kolmest s�lmest!\n");
 
/* Kolme malloc-k�suga eraldatakse kolme elemendi jagu m�lu, millede algusaadressid kirjutatakse muutujatesse essa, tessa ja kossa */
    first = malloc(sizeof *first);      
    second = malloc(sizeof *second);
    third = malloc(sizeof (struct node));
 
    printf("sizeof *first %d\n", sizeof *first);      
    printf("sizeof *second%d\n", sizeof *second);
    printf("sizeof (struct node)%d\n", sizeof (struct node));
/* Loodud elementide v�ljadesse "info" omistatakse t�isarvuline v��rtus
   Noolega (->) kirjapildi v�ib asendada j�rgmisega: (*first).info = 1;
   M�lema variandi t�hendus:
   V�ta muutujas first olev m�luaadress. Sellel aadressil paikneva struct'i v�lja "info" omista mingi v��rtus.*/
    first->info = 1;    
    second->info = 2;
    third->info = 3;
 
/* Elementide v�ljadesse "next" kirjutatakse m�luaadressid, mis on muutujates "second" ja "third". Viimase elemendi aadressiv�lja
   omistatakse NULL.
   Tulemuseks on ahelalaadselt omavahel �hendatud elemendid. */

    first->next = second;
    second->next = third;  
    third->next = NULL;   
/*
    printf("%p ",first->next);
    printf("%p ",second->next);
    printf("%p\n",third->next);
*/ 
/* Siit algab standardne ts�kkel ahela sisu (arvude) v�ljatr�kkimiseks.
   Selline ahela l�bimine ja tr�kkimine sobib �ks k�ik millisel viisil loodud ahela jaoks.
   Loomulikult saab tr�kkimise asemel ka midagi kasulikumat teha */

/* Et ahela esimese elemendi aadress first kaotsi ei l�heks, kasutame liikumiseks muutujat "current".
   Kuni viimase elemendi viidav�ljast talle NULL v��rtuseks antakse. Selle j�rgi on v�imalik tuvastada, et k�ik elemendid t��deldud on */
    printf("J�rgneb ahelas olevate andmete v�ljatr�kkimine: \n");
    current = first;
    while (current != NULL) {               
        printf("Arv on %d\n",current->info);            
        current = current->next;              
/* Muutuja current nihutatakse �he elemendi v�rra edasi, j�rgmise elemendi aadress saadakse jooksva elemendi viidav�ljast */
    }
}
