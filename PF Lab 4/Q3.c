#include<stdio.h>

int main(){
	
	int choice;
	int small;
	int quantity;
	int amount;
	
	
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
							printf("Your total is 8$ for 1 pizza");
						}
						else if(amount == 2){
							printf("Your total is 15$ for 2 pizzas");
						}
						else if(amount == 3){
							printf("Your total is 21$ for 3 pizzas");
						}
							
					}
					
			}
}	
