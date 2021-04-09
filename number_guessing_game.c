#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	int rasgelesayi = (rand()%10)+1;
	int tahmin, kacdefa = 1;
	
	printf("Number Guessing Game \n\n");
	printf("%d\n", rasgelesayi);
	printf("Please enter your guess: \n");
	scanf("%d", &tahmin);
	
	while(rasgelesayi != tahmin){
		kacdefa++;
		if(tahmin > rasgelesayi)
		{
			printf("Think down the forecast! \n");
			scanf("%d", &tahmin);
		} 
		else if(tahmin < rasgelesayi)
		{
			printf("Increase the forecast! \n");
			scanf("%d", &tahmin);
		}
	}
	printf("%d Trying times, you found the right answer.", kacdefa);
	return 0;
}
