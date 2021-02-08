#include <stdio.h>
#include <math.h>
main(){
	float a, b, c, juur1, juur2;
	printf("Sisesta ruutv6rrandi muutujad, kujul ax2 + bx + c = 0: ");
	scanf("%f %f %f", &a, &b, &c);
	if((b*b-4*a*c) >= 0){
		printf("Muutuja a on %f.\nMuutuja b on %f.\nMuutuja c on %f.\n", a, b, c);
		juur1 = (-1 * b + sqrt(b*b-4*a*c))/(2*a);
		juur2 = (-1 * b - sqrt(b*b-4*a*c))/(2*a);
		if(juur1 == juur2){
			printf("Juureks on %f.", juur1);
		}else{
			printf("Juurteks on %f ja %f.", juur1, juur2);
		}
	}else{
		printf("Diskriminant on v2hem kui 0!\nReaalarvulised lahendid puuduvad.");
	}
}
