#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int choice;
	float small = 8;
	float small2 = 15;
	float small3 = 21;
	int crust;
	int quantity;
	int amount;
	char cheese;
	int time;
	
	
	
	
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
							printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
							scanf("%d", &crust);
							if(crust == 1){
								small = small + 0;
							}	
							else if(crust == 2){
								small = small + 1;
							}
							else if(crust == 3){
								small = small + 2;
							}
								printf("Your total cost now is: %f\n", small);
								
							printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
							getchar();
							scanf("%c", &cheese);
							
							if(cheese == 'y'){
								
								printf("Your total cost now is %f\n", small + 1.5);			
							}
							else if(cheese == 'Y'){
								printf("Your total cost now is %f\n", small + 1.5);
							}
							
							else if(cheese == 'n' ){
								printf("Your total cost now is %f", small);
								
							}
							else if(cheese == 'N' ){
								printf("Your total cost now is %f\n", small);
								
							}
							printf("What time is it? (Enter in 0-23  format): ");
							scanf("%d", &time);
							if(time > 11 && time < 14){
								printf("Great, you recieve a discount!\n");
								small = small * 0.9;
								printf("You total price now is: %f\n", small);
								
							}else{
								printf("Sorry we can not provide the discount at this time\n");
								printf("Your total price is still: %f\n", small);
							}
												
						}
						
						else if(amount == 2){
									
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
										
									printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
									getchar();
									scanf("%c", &cheese);
									
									if(cheese == 'y' || cheese == 'Y'){
										small2 = small2 + 1.5;
										printf("Your total cost now is %f\n", small2);			
									}
									
									
									else if(cheese == 'n' || cheese == 'N'){
										
										printf("Your total cost now is %f\n", small2);
										
									}
									
									printf("What time is it? (Enter in 0-23  format): ");
									scanf("%d", &time);
									if(time > 11 && time < 14){
										printf("Great, you recieve a discount!\n");
										small2 = small2 * 0.9;
										printf("You total price now is: %f\n", small2);
										
									}
									else{
										printf("Sorry we can not provide the discount at this time\n");
										printf("Your total price is still: %f\n", small2);
									}
									
								
						}	
								
						else if(amount == 3){
									
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
										
									printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
									getchar();
									scanf("%c", &cheese);
									
									if(cheese == 'y' || cheese == 'Y'){
										small3 = small3 + 1.5;
										printf("Your total cost now is %f\n", small3);			
									}
									
									
									else if(cheese == 'n' || cheese == 'N'){
										
										printf("Your total cost now is %f\n", small3);
										
									}
									
									printf("What time is it? (Enter in 0-23  format): ");
									scanf("%d", &time);
									if(time > 11 && time < 14){
										printf("Great, you recieve a discount!\n");
										small3 = small3 * 0.9;
										printf("You total price now is: %f\n", small3);
										
									}
									else{
										printf("Sorry we can not provide the discount at this time\n");
										printf("Your total price is still: %f\n", small3);
									}
									
						}
					}
					
					
			}
			
}
		

