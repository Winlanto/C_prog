#include <stdio.h>

main(){
	int numbriteArv;
	printf("Kui palju numbre soovite lisada?\n");
	scanf("%d", &numbriteArv);
	int numbrid[numbriteArv]; 
	int i, j, suurim, eelSuurim;
	for(i = 0; i<numbriteArv; i++){
		printf("Sisesta number %d: ", (i+1));
		scanf("%d", &numbrid[i]);
	}
	suurim = numbrid[0];
	for(j = 1; j<numbriteArv; j++){
		if(suurim < numbrid[j]){
			eelSuurim = suurim;
			suurim=numbrid[j];
		}
	}for(i = 0; i<numbriteArv; i++){
		printf("%d\t", numbrid[i]);		
	}printf("\nSuurim: %d.\nEelsuurim: %d.", suurim, eelSuurim);
}
