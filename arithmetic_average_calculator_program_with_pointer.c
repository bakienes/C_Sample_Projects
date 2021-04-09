#include<stdio.h>

int main(){
	printf("Arithmetic Average Calculator Program with Pointer \n\n");
	
	int sayilar[5],i,j,toplam = 0;
	int *ptr;
	int sonuc = 0;
	printf("Please enter 5 values: \n");
	for(i = 0;i<5; i++ ){
		scanf("%d", &sayilar[i]);
	}
	ptr = &sayilar[0]; // sayilar

	for(j = 0; j<5 ; j++){
		toplam = toplam + *ptr;
		ptr++;
	}
	
	sonuc = toplam / 5;
	printf("arithmetic mean of the numbers entered: %d \n", sonuc);

	return 0;
}
