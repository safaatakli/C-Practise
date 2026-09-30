#include <stdio.h>

int main ()
{
	int i, j;
	int matrisDegerleri[3][3];
	
	printf("Lutfen 3*3 matrisin  ");
	
	for (i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d. satir %d. sutundaki sayiyi giriniz: ", i+1, j+1);
			scanf("%d", &matrisDegerleri[i][j]);
		}
	}
	printf("______SONUC______\n");
	printf("Girdiginiz matris tablosu: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", matrisDegerleri[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
	
}
