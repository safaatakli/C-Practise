#include <stdio.h>

struct Ogrenci {
		int numara;
		int vizeNotu;
		int finalNotu;
	};

int main ()
{
	struct Ogrenci ogr1;
	
	printf("Lutfen ogrencinin\n Numarasini:\n Vize Notunu:\n Final Notunu:\ giriniz: ");
	scanf("%d %d %d", &ogr1.numara, &ogr1.vizeNotu, &ogr1.finalNotu);
	
	double ortalama;
	
	ortalama = (0.40 * ogr1.vizeNotu) + (0.60 * ogr1.finalNotu);
	
	printf("Ogrencinizin numarasi: %d\n", ogr1.numara);
	printf("Ogrencinizin not ortalamasi: %.2lf", ortalama);
	
	return 0;
}
