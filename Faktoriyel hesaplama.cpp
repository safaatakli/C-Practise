#include <stdio.h>

int faktoriyel(int sayi) 
{
	if (sayi <=  1) {
		return 1;
	}
	else {
		return sayi * faktoriyel(sayi - 1);
	}
}

int main () 
{
	int sayi;
	
	printf("Lutfen faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	int sonuc = faktoriyel(sayi);
	
	printf("Girdiginiz sayilarin faktoriyeli: %d", sonuc);
	return 0;
}
