#include <stdio.h>

int main ()
{
	int array[5];
	int en_buyuk;
	
	printf("Lutfen 5 adet tam sayi giriniz: ");
	
	for(int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
		
	}
	en_buyuk = array[0];
	 for (int i = 0; i < 5; i++) {
	 	if (array[i] > en_buyuk) {
	 		en_buyuk = array[i];
		 }
	 }
	
	printf("Girdiginiz sayilardan en buyugu: %d", en_buyuk);
	
	return 0;
}
