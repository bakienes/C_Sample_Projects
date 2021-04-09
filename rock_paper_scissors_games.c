#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	printf("Rock Paper Scissors Games\n\n");
	/*
	Rock -> Scissors
	Scissors -> Paper
	Paper -> Rock
	*/
	srand(time(NULL));
	int i = 0, tahmin;
	int kullaniciSkor = 0, bilgisayarSkor = 0;
	
	while(i < 5){
		printf("Please enter your guess (1. rock, 2. Paper, 3. Scissors): \n");
		scanf("%d",&tahmin);
		
		int bilgisayartahmini = (rand()%3)+1;
		
		if(tahmin == 1){
			
			if(bilgisayartahmini == 3)
			{
				kullaniciSkor++;
				printf("you won \n");
			}
			else if(bilgisayartahmini == 2)
			 {
			 	bilgisayarSkor++;
				printf("computer won \n");
			 }
			else if(bilgisayartahmini == 1)
				printf("draw \n");
				
		}else if(tahmin == 2){
			
			if(bilgisayartahmini == 3)
			{
				bilgisayarSkor++;
				printf("computer won \n");
			}
			else if(bilgisayartahmini == 1)
			{
				kullaniciSkor++;
				printf("you won \n");
			}
			else if(bilgisayartahmini == 2)
				printf("draw \n");
				
		}else if(tahmin == 3){
						
			if(bilgisayartahmini == 1)
			{
				bilgisayarSkor++;
				printf("computer won \n");
			}
			else if(bilgisayartahmini == 2)
			{
				kullaniciSkor++;
				printf("you won \n");
			}
			else if(bilgisayartahmini == 3)
				printf("draw \n");
				
		}else{
			printf("Illegal forecast entry!!\n");
		}
		
		i++;
	}
	printf("User %d - %d Computer", kullaniciSkor, bilgisayarSkor);
	return 0;
}
