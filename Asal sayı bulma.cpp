#include <stdio.h>

int asalKontrol (int sayi) 
{
	int sayac = 0;
	
	if (sayi <= 1) {
		return 0;
	}
	
	for(int i = 2; i < sayi; i++) {
		if(sayi %i == 0) {
			sayac++;
		}
	
	}
		if (sayac > 0) {
			return 0;
		}else {
			return 1;
		}
}

int main () 
{
	int sayi, sonuc;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	sonuc = asalKontrol (sayi);
	
	if (sonuc == 0) {
		printf("%d sayisi asal degildir.", sayi);
	}else if (sonuc == 1) {
		printf("%d sayisi asaldir.", sayi);	
	}
	
	return 0;
	
}
