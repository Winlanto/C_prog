#include <stdio.h>
#include <math.h>
main(){
	int kaatet1, kaatet2;
	float hypotenuus, pindala;
	printf("Sisesta kaatetid: ");
	scanf("%d %d", &kaatet1, &kaatet2);
	printf("Kaatedid on %d %d.\n", kaatet1, kaatet2);
	hypotenuus=sqrt(kaatet1*kaatet1+kaatet2*kaatet2);
	printf("Hüpotenuus on %f.\n", hypotenuus);
	pindala=(float)kaatet1 *kaatet2/2;
	printf("Pindala on %f.\n Lõpetan tööd..", pindala);
}
