#include<stdio.h>

int main(){
	printf("THE PROGRAM TO CALCULATE THE AREA OF THE SQUARE\n\n");
	
	int kareninkenari;
	int alan,cevre;
	
	printf("Enter the size of one side of the squarez: \n");
	scanf("%d", &kareninkenari);
	
	alan = kareninkenari ** 2;
	cevre = kareninkenari * 4;
	printf("Area of ​​the square: %d \n", alan);
	printf("Circumference of the square: %d \n", cevre);
	
	return 0;
}
