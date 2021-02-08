#include <stdio.h>
#include <stdbool.h>

main(){
	float arv1, arv2, tulemus;
	int valik;
	bool kasKorrata = true;
	
	printf("Sisetage kaks arvu:");
	scanf("%f %f", &arv1, &arv2);
	while(kasKorrata){
		printf("__________MENU__________\n1.Liitmine\n2.Lahutamine\n3.Korrutamine\n4.Jagamine\n5.V2lju\n");
		scanf("%d", &valik);
		if(valik > 0 && valik < 6){
			if(valik == 1){
				tulemus = arv1 + arv2;
			}else if(valik == 2){
				printf("Milline arv on lahutaja?\n1.Esimene\n2.Teine\n");
				scanf("%d", &valik);
				if(valik > 0 && valik < 3){
					if(valik == 1){
						tulemus = arv1 - arv2;	
					}else if(valik == 2){
						tulemus = arv2 - arv1;
					}
				}
			}else if(valik == 3){
				tulemus = arv1 * arv2;
			}else if(valik == 4){
				printf("Milline arv on jagaja?\n1.Esimene\n2.Teine\n");
				scanf("%d", &valik);
				if(valik > 0 && valik < 3){
					if(valik == 1){
						tulemus = arv1 / arv2;
					}else if(valik == 2){
						tulemus = arv2 / arv1;
					}
				}
			}if(valik == 5){
				kasKorrata=false;
				return;
			}
			printf("Tulemus on %f.\n", tulemus);
			printf("Kas tahad nende numbritega teisi tehteid teha?\n1.Jah\n2.Ei\n");
			scanf("%d", &valik);
			if(valik != 1){
				kasKorrata=false;
				return;
			}
		}
	}
}


