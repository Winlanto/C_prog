/*
 *  Katsetatakse viitadega.
 *  Demonstreeritakse viitmuutujate deklareerimist, jaoks m�lu eraldamist, viitade omistamist.
 */

#include <stdlib.h>
#include <stdio.h>
main()
{ 
    int k = 8;                 /* tavaline t�isarv. */
    int *ptr;                  /* viitmuutuja (aadress t�isarvule, pointer) */
    int *ptr1, *ptr2, *ptr3;   /* veel kolm on viitmuutujat */
  
    printf("Kas viitmutuujasse satub deklareerimisel NULL?\n");
    if (ptr == NULL){ 
        printf("Antud juhul jah.\n"); 
    }
    else {
        printf("Seekord ei.\n");
    }
    
    ptr = &k;      /* Muutujasse ptr omistatakse muutuja k aadress. */
    printf("Muutujas k olev arv tema aadressi j�rgi %d\n", *ptr);   
    *ptr = 12; 
    printf("Muutuja k uuesti: %d\n", k);
 
/* Funktsioon malloc() reserveerib palutud arvu baite (antud juhul 1 int-i jagu) ning nende
 * baitide algusaadressi paneb muutujasse ptr1.
 * sizeof on operaator, mille j�rele v�ib kirjutada andmet��bi (sulud vajalikud!).
 */
    ptr1 = malloc(sizeof (int));
    *ptr1 = 20;   /* Aadressi ptr1 kaudu omistatakse 20 */
    printf("Muutuja ptr1 poolt viidatavasse kohta pandi %d\n", *ptr1);

/* Mis juhtub aadresside omistamisel? */

    ptr2 = ptr1;
    printf("Viitmuutuja ptr2 kaudu leiame arvu %d.\n", *ptr2);
 
/* Formaatimise symbol %p on kasutatav viitade ehk aadresside jaoks.*/
    printf("ptr1-s olev aadress on %p ja ptr2-s olev aadress on %p.\n", ptr1, ptr2);
    if (ptr1 == ptr2) {
        printf("Muutujad ptr1 ja ptr2 viitavad samasse kohta.\n");
    }
    else {
        printf("Muutujad ptr1 ja ptr2 ei viita samasse kohta.\n");
    }
    
    /*Lisa programmi j�rgmised tegevused:
	- eralda m�lu �he t�isarvu jagu, pane aadress muutujasse ptr3 ja k�si kasutajalt v��rtus aadressil ptr3 paiknevasse m�luv�lja. 
	NB! scanf() vajas v��rtuse sisselugemiseks m�luaadressi. Seega kuidas seda seekord kirjutada?
	- Pane ptr1 viitama samale m�lupesale, kuhu ptr3-gi.
	- Kuidas saame n��d k�tte arvu 20, mis lausega *ptr1 = 20; m�llu kirjutati? Tr�ki v�lja.
	- Tr�ki v�lja muutuja k aadress ja muutuja ptr sisu. Mida m�rkad?*/
    ptr3 = malloc(sizeof(int));
    printf("Andke palun mingit arvu:\n");
    scanf("%d", ptr3);
    printf("Sisseloetud arv oli %d.\n", *ptr3);
    ptr1 = ptr3;
    printf("Sisseloetud arv ptr1 kaudu: %d.\n", *ptr1);
    printf("Viitmuutuja ptr2 kaudu leiame arvu %d.\n", *ptr2);
    printf("k aadress on %p ja ptr sisu on %d.\n", &k, ptr);
	
}
