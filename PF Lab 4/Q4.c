#include<stdio.h>

int main(){
	
	int choice;
	float small1 = 8;
	float small2 = 15;
	float small3 = 21;
	int quantity;
	int amount;
	int crust;
	
	
	printf("Hello Sir\nWelcome to Yash's Pizza Place!\nWhat pizza would you like to have?\n"); 
	printf("1.Small\n2.Medium\n3.Large ");
	scanf("%d", &choice);
	
	
			if(choice == 1){
			
		
			
					printf("You chose small pizza\n");
					printf("How many pizza's do you want? ");
					scanf("%d", &quantity);
				
					if(quantity > 1){
						printf("Check out out multi-pizza deals:\n");
						printf("1 pizza : 8$\n2 pizzas : 15$\n3 pizzas : 21$\n");
						scanf("%d", &amount);		
						
						
						if(amount == 1){
							printf("Your total is %f for 1 pizza\n", small1);
							printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
							scanf("%d", &crust);
							if(crust == 1){
								small1 = small1 + 0;
							}	
							else if(crust == 2){
								small1 = small1 + 1;
							}
							else if(crust == 3){
								small1 = small1 + 2;
							}
								printf("Your total cost now is: %f\n", small1);
						
						}
						else if(amount == 2){
							printf("Your total is %f for 2 pizzas\n", small2);
							printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
							scanf("%d", &crust);
							if(crust == 1){
								small2 = small2 + 0;
							}	
							else if(crust == 2){
								small2 = small2 + 1;
							}
							else if(crust == 3){
								small2 = small2 + 2;
							}
								printf("Your total cost now is: %f\n", small2);
							
						}
						else if(amount == 3){
							printf("Your total is %f for 3 pizzas\n", small3);
							printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
							scanf("%d", &crust);
							if(crust == 1){
								small3 = small3 + 0;
							}	
							else if(crust == 2){
								small3 = small3 + 1;
							}
							else if(crust == 3){
								small3 = small3 + 2;
							}
								printf("Your total cost now is: %f\n", small3);
						}
							
					}
					
			}
}
