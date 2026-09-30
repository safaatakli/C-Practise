#include <stdio.h>

struct Ogrenci {
	char isim[30];
	int numara;
	int vizeNotu;
	int finalNotu;
};

int main () 
{
	struct Ogrenci ogr[3];
	double ortalama[3];
	int enBuyuk = 0;
	
	printf("Lutfen ogrencilerinizin bilgilerini giriniz: \n");
	
	for (int i = 0; i < 3; i++) {
		printf("%d. Ogrencinizin adini giriniz: ", i+1);
		scanf("%s", ogr[i].isim);
		
		printf("%d. Ogrencinizin numarasini giriniz: ", i+1);
		scanf("%d", &ogr[i].numara);
		
		printf("%d. Ogrencinizin vize notunu giriniz: ", i+1);
		scanf("%d", &ogr[i].vizeNotu);
		
		printf("%d. Ogrencinizin final notunu giriniz: ", i+1);
		scanf("%d", &ogr[i].finalNotu);
		
		ortalama[i] = (0.40 * ogr[i].vizeNotu) + (0.60 * ogr[i].finalNotu);
	}
	
	for (int i = 0; i < 2; i++) {
		if (ortalama[i] > ortalama[i+1]) {
			enBuyuk = i;
		}if (ortalama[i] < ortalama[i+1]) {
			enBuyuk = i+1;
		}
	}

}
