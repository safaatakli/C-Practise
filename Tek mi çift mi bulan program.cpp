#include <stdio.h>
int main ()
{
	int number;
	
	printf("Lutfen bir sayii giriniz: ");
	scanf("%d", &number);
	
	if (number %2 == 0) {
		printf("Sayiniz cifttir");
	}
	else {
		printf("Sayiniz tektir");
	}
	
	return 0;	
}
