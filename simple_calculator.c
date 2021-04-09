#include<stdio.h>

int main(){
	printf("SIMPLE CALCULATOR\n\n");
	
	float sayi1, sayi2, sonuc;
	int islem;
	
	printf("Enter the first number: \n");
	scanf("%f", &sayi1);
	
	printf("Enter the second number: \n");
	scanf("%f", &sayi2);
	
	printf("Enter the transaction (1-> Addition  2-> Subtraction  3-> Division  4-> Multiplication): \n");
	scanf("%d", &islem);
	
	if(islem == 1)
		sonuc = sayi1 + sayi2;
	else if(islem == 2)
		sonuc = sayi1 - sayi2;
	else if(islem == 3)
		sonuc = sayi1 / sayi2;
	else if(islem == 4)
		sonuc = sayi1 * sayi2;
		
	printf("The result of the transaction: %.2f", sonuc);
	return 0;
}
