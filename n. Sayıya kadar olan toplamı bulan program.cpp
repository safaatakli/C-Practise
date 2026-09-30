#include <stdio.h>

int main () 
{
	int number;
	int last_number = 0;
	int toplayici = 0;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &number);
	
	while(1) {
		if (last_number > number) {
			break;
		}
		else{
			toplayici += last_number;
			last_number ++;
		}
	}
	
	printf("Isleminizin sonucu: %d", toplayici);
	
	return 0;
	
}
