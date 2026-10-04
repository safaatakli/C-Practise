#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
	char tercih;
	
	printf("Lutfen matrisinizin nasil doldurulacagini seciniz: \n");
	printf("A-Otomatik doldurulsun \nB-Kendim Dolduracagim\n");
	scanf("%c", &tercih);
	
	if (tercih != 'A' && tercih != 'a' && tercih != 'B' && tercih != 'b') {
		printf("Hatali secim yaptiniz. Lutfen tekrar deneyiniz...");
		return 1;
	}
	
	
	if (tercih == 'A' || tercih == 'a') {
		srand(time(NULL));
		
		int m, n;
		
		printf("Lutfen matrisinizin kac carpi kac(m*n) olacagini seciniz: \n");
		printf("m: ");
		scanf("%d", &m);
		printf("n: ");
		scanf("%d", &n);
		
		int matris[m][n];
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				matris[i][j] = (rand () % 100) + 1;
			}
		}
		
		printf("Olusturulan matris: \n");
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d\t", matris[i][j]);
			}
			printf("\n");
		}
		return 0;
		
	}else if (tercih == 'B' || tercih == 'b') {
		
		int m, n;
		
		printf("Lutfen olusturmak istediginiz matrisin kac carpi kac(m+n) oldugunu giriniz: \n");
		printf("m: ");
		scanf("%d", &m);
		printf("n: ");
		scanf("%d", &n);
		
		int Matris[m][n];
		
		printf("Lutfen degerlerinizi giriniz: \n");
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d. satir %d. sutun: ", i+1, j+1 );
				scanf("%d", &Matris[i][j]);
			}
		}
		
		printf("Girdiginiz matris: \n");
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d\t", Matris[i][j]);
			}
			printf("\n");
		}
		
		return 0;
		
	}
	
	
}
