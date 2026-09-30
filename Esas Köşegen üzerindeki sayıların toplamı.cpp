#include <stdio.h>

int main () 
{
	int i, j;
	int toplam = 0;
	int matris[3][3];
	
	printf("Lutfen 3*3 matrisi doldurunuz: \n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d. satir %d. sutunun degerini giriniz: ", i+1, j+1);
			scanf("%d", &matris[i][j]);
			
			if (i == j) {
				toplam += matris[i][j];
			}
		}
	}
	
	printf("Girdiginiz matris tablosunun esas kosegen uzerindeki sayilarin toplami: %d", toplam);
	
	return 0;
	
}
