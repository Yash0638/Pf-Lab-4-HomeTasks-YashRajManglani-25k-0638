#include<stdio.h>

int main(){
	int choice;
	int amount;
	int quant;
	printf("Hello Sir\nWelcome to Yash's Pizza Place! ");
	printf("What pizza would you like to have\n1. Small\n2. Medium\n3. Large ");
	scanf("%d", &choice);
	if(choice == 1){
		printf("You chose small pizza!\n");
		printf("How many pizzas do you want? ");
		scanf("%d", &amount);
		if(amount > 1){
			printf("Check out our multi-pizza deals!\n1. 8$\n2. 15$\n3. 21$");
			scanf("%d", &quant);
			if(quant == 1){
				printf("Your total is 8 for 1 pizza");
				
			}else if(quant == 2){
				printf("Your total is 15$ for 2 Pizzas\n");
			}else if(quant == 3){
				printf("Your total is 21$ for 3 Pizzas\n");
			}
			
		
		}else{
			printf("Your total is 8$");
		}
	
		
	}
	else if(choice == 2){
		printf("You chose medium pizza!\n");
		
	}
	else if(choice == 3){
		printf("You chose large pizza!\n");
		
	}
	else{
		printf("Invalid Size\n");
		
	}
	
		
	return 0;
}
