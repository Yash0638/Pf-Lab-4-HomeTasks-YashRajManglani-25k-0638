#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int choice;
	float small = 8;
	float small2 = 15;
	float small3 = 21;
	float med1 = 12;
	float med2 = 22;
	float med3 = 32;
	float large = 18;
	float large2 = 35;
	float large3 = 50;
	int crust;
	int quantity;
	int amount;
	char cheese;
	int time;
	char id;
	int delivery;
	float med = 12;
	
	
	
	
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
							if(time >= 11 && time <= 14){
								printf("Great, you recieve a discount!\n");
								small = small * 0.9;
								printf("You total price now is: %f\n", small);
								
							}else{
								printf("Sorry we can not provide the discount at this time\n");
								printf("Your total price is still: %f\n", small);
							}
							fflush(stdin);
							printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
							scanf("%c", &id);
							if(id == 'y'){
								printf("Congratulations you win a special student discount!\n");
								small = small - 2;
								printf("Your total cost now is: %f\n", small);
							}else if(id == 'n'){
								printf("Sorry you are not eligible for the student discount\n");
								printf("Your total cost now is: %f\n", small);
							}

							printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
							scanf("%d", &delivery);
							if(delivery == 1){
								printf("You chose delivery\nYour total cost now is: %f", small + 3);
								
							}else{
								printf("You chose pickup\nYour total cost is: %f", small);
								
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
									fflush(stdin);
									printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
									scanf("%c", &id);
									if(id == 'y' || id == 'Y'){
										printf("Congratulations you win a special student discount!\n");
										small2 = small2 - 2;
										printf("Your total cost now is: %f\n", small2);
									}else if(id == 'n' || id == 'N'){
										printf("Sorry you are not eligible for the student discount\n");
										printf("Your total cost now is: %f\n", small2);
									}
		
									printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
									scanf("%d", &delivery);
									if(delivery == 1){
										printf("You chose delivery\nYour total cost now is: %f", small2 + 3);
										
									}else{
										printf("You chose pickup\nYour total cost is: %f", small2);
										
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
									fflush(stdin);
									printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
									scanf("%c", &id);
									if(id == 'y' || id == 'Y'){
										printf("Congratulations you win a special student discount!\n");
										small3 = small3 - 2;
										printf("Your total cost now is: %f\n", small3);
									}else if(id == 'n' || id == 'N'){
										printf("Sorry you are not eligible for the student discount\n");
										printf("Your total cost now is: %f\n", small3);
									}
									if(amount == 3 && crust == 3){
										printf("You get a free garlic bread!\n");
									}
										
									printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
									scanf("%d", &delivery);
									if(delivery == 1){
										printf("You chose delivery\nYour total cost now is: %f for 3 small pizzas and a free garlic bread", small3 + 3);
										
									}else{
										printf("You chose pickup\nYour total cost is: %f", small3);
										
									}
								
						}
					
					
					
					
					
					
					
					
					
					
					
					}else if(quantity == 1){
						printf("Your total is 8$");
					}
					
						
					
			}
			else if(choice == 2){
				printf("You chose medium pizza\n");
				printf("How many pizzas do you want? ");
				scanf("%d", &quantity);
				
				
				if(quantity > 1){
						printf("Check out out multi-pizza deals:\n");
						printf("1 pizza : 12$\n2 pizzas : 22$\n3 pizzas : 32$\n");
						scanf("%d", &amount);		
						
						
						if(amount == 1){
							printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
							scanf("%d", &crust);
							if(crust == 1){
								med1 = med1 + 0;
							}	
							else if(crust == 2){
								med1 = med1 + 1;
							}
							else if(crust == 3){
								med1 = med1 + 2;
							}
								printf("Your total cost now is: %f\n", med1);
								
							printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
							getchar();
							scanf("%c", &cheese);
							
							if(cheese == 'y'){
								med1 = med1 + 1.5;
								printf("Your total cost now is %f\n", med1 );			
							}
							else if(cheese == 'Y'){
								med1 = med1 + 1.5;
								printf("Your total cost now is %f\n", med1 );
							}
							
							else if(cheese == 'n' ){
								printf("Your total cost now is %f", med1);
								
							}
							else if(cheese == 'N' ){
								printf("Your total cost now is %f\n", med1);
								
							}
							printf("What time is it? (Enter in 0-23  format): ");
							scanf("%d", &time);
							if(time > 11 && time < 14){
								printf("Great, you recieve a discount!\n");
								med1 = med1 * 0.9;
								printf("You total price now is: %f\n", med1);
								
							}else{
								printf("Sorry we can not provide the discount at this time\n");
								printf("Your total price is still: %f\n", med1);
							}
							fflush(stdin);
							printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
							scanf("%c", &id);
							if(id == 'y'){
								printf("Congratulations you win a special student discount!\n");
								med1 = med1 - 2;
								printf("Your total cost now is: %f\n", med1);
							}else if(id == 'n'){
								printf("Sorry you are not eligible for the student discount\n");
								printf("Your total cost now is: %f\n", med1);
							}

							printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
							scanf("%d", &delivery);
							if(delivery == 1){
								printf("You chose delivery\nYour total cost now is: %f", med1 + 3);
								
							}else{
								printf("You chose pickup\nYour total cost is: %f", med1);
								
							}					
						}
						
						else if(amount == 2){
									
									printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
									scanf("%d", &crust);
									if(crust == 1){
										med2 = med2 + 0;
									}	
									else if(crust == 2){
										med2 = med2 + 1;
									}
									else if(crust == 3){
										med2 = med2 + 2;
									}
										printf("Your total cost now is: %f\n", med2);
										
									printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
									getchar();
									scanf("%c", &cheese);
									
									if(cheese == 'y' || cheese == 'Y'){
										med2 = med2 + 1.5;
										printf("Your total cost now is %f\n", med2);			
									}
									
									
									else if(cheese == 'n' || cheese == 'N'){
										
										printf("Your total cost now is %f\n", med2);
										
									}
									
									printf("What time is it? (Enter in 0-23  format): ");
									scanf("%d", &time);
									if(time > 11 && time < 14){
										printf("Great, you recieve a discount!\n");
										med2 = med2 * 0.9;
										printf("You total price now is: %f\n", med2);
										
									}
									else{
										printf("Sorry we can not provide the discount at this time\n");
										printf("Your total price is still: %f\n", med2);
									}
									fflush(stdin);
									printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
									scanf("%c", &id);
									if(id == 'y' || id == 'Y'){
										printf("Congratulations you win a special student discount!\n");
										med2 = med2 - 2;
										printf("Your total cost now is: %f\n", med2);
									}else if(id == 'n' || id == 'N'){
										printf("Sorry you are not eligible for the student discount\n");
										printf("Your total cost now is: %f\n", med2);
									}
		
									printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
									scanf("%d", &delivery);
									if(delivery == 1){
										printf("You chose delivery\nYour total cost now is: %f", med2 + 3);
										
									}else{
										printf("You chose pickup\nYour total cost is: %f", med2);
										
									}
								
						}	
								
						else if(amount == 3){
									
									printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
									scanf("%d", &crust);
									if(crust == 1){
										med3 = med3 + 0;
									}	
									else if(crust == 2){
										med3 = med3 + 1;
									}
									else if(crust == 3){
										med3 = med3 + 2;
									}
										printf("Your total cost now is: %f\n", med3);
										
									printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
									getchar();
									scanf("%c", &cheese);
									
									if(cheese == 'y' || cheese == 'Y'){
										med3 = med3 + 1.5;
										printf("Your total cost now is %f\n", med3);			
									}
									
									
									else if(cheese == 'n' || cheese == 'N'){
										
										printf("Your total cost now is %f\n", med3);
										
									}
									
									printf("What time is it? (Enter in 0-23  format): ");
									scanf("%d", &time);
									if(time > 11 && time < 14){
										printf("Great, you recieve a discount!\n");
										med3 = med3 * 0.9;
										printf("You total price now is: %f\n", med3);
										
									}
									else{
										printf("Sorry we can not provide the discount at this time\n");
										printf("Your total price is still: %f\n", med3);
									}
									fflush(stdin);
									printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
									scanf("%c", &id);
									if(id == 'y' || id == 'Y'){
										printf("Congratulations you win a special student discount!\n");
										med3 = med3 - 2;
										printf("Your total cost now is: %f\n", med3);
									}else if(id == 'n' || id == 'N'){
										printf("Sorry you are not eligible for the student discount\n");
										printf("Your total cost now is: %f\n", med3);
									}
									if(amount == 3 && crust == 3){
										printf("You get a free garlic bread!\n");
									}
									printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
									scanf("%d", &delivery);
									if(delivery == 1){
										printf("You chose delivery\nYour total cost now is: %f", med3 + 3);
										
									}else{
										printf("You chose pickup\nYour total cost is: %f for 3 med pizzas and a free garlic bread", med3);
										
									}
								
						}
				}else if(quantity == 1){
					printf("Your total is 12$");
				}
			}
			
			else if(choice == 3){
				printf("You chose Large pizza\n");
				printf("How many pizzas do you want? ");
				scanf("%d", &quantity);
				
				
				if(quantity > 1){
						printf("Check out out multi-pizza deals:\n");
						printf("1 pizza : 18$\n2 pizzas : 35$\n3 pizzas : 50$\n");
						scanf("%d", &amount);		
						
						
						if(amount == 1){
							printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
							scanf("%d", &crust);
							if(crust == 1){
								large = large + 0;
							}	
							else if(crust == 2){
								large = large + 1;
							}
							else if(crust == 3){
								large = large + 2;
							}
								printf("Your total cost now is: %f\n", large);
								
							printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
							getchar();
							scanf("%c", &cheese);
							
							if(cheese == 'y'){
								large = large + 1.5;
								printf("Your total cost now is %f\n", large );			
							}
							else if(cheese == 'Y'){
								large = large + 1.5;
								printf("Your total cost now is %f\n", large );
							}
							
							else if(cheese == 'n' ){
								printf("Your total cost now is %f", large);
								
							}
							else if(cheese == 'N' ){
								printf("Your total cost now is %f\n", large);
								
							}
							printf("What time is it? (Enter in 0-23  format): ");
							scanf("%d", &time);
							if(time > 11 && time < 14){
								printf("Great, you recieve a discount!\n");
								med1 = large * 0.9;
								printf("You total price now is: %f\n", large);
								
							}else{
								printf("Sorry we can not provide the discount at this time\n");
								printf("Your total price is still: %f\n", large);
							}
							fflush(stdin);
							printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
							scanf("%c", &id);
							if(id == 'y'){
								printf("Congratulations you win a special student discount!\n");
								large = large - 2;
								printf("Your total cost now is: %f\n", large);
							}else if(id == 'n'){
								printf("Sorry you are not eligible for the student discount\n");
								printf("Your total cost now is: %f\n", large);
							}

							printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
							scanf("%d", &delivery);
							if(delivery == 1){
								printf("You chose delivery\nYour total cost now is: %f", large + 3);
								
							}else{
								printf("You chose pickup\nYour total cost is: %f", large);
								
							}					
						}
						
						else if(amount == 2){
									
									printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
									scanf("%d", &crust);
									if(crust == 1){
										large2 = large2 + 0;
									}	
									else if(crust == 2){
										large2 =  large2 + 1;
									}
									else if(crust == 3){
										large2 = large2 + 2;
									}
										printf("Your total cost now is: %f\n", large2);
										
									printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
									getchar();
									scanf("%c", &cheese);
									
									if(cheese == 'y' || cheese == 'Y'){
										large2 = large2 + 1.5;
										printf("Your total cost now is %f\n", large2);			
									}
									
									
									else if(cheese == 'n' || cheese == 'N'){
										
										printf("Your total cost now is %f\n", large2);
										
									}
									
									printf("What time is it? (Enter in 0-23  format): ");
									scanf("%d", &time);
									if(time > 11 && time < 14){
										printf("Great, you recieve a discount!\n");
										large2 = large2 * 0.9;
										printf("You total price now is: %f\n", large2);
										
									}
									else{
										printf("Sorry we can not provide the discount at this time\n");
										printf("Your total price is still: %f\n", large2);
									}
									fflush(stdin);
									printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
									scanf("%c", &id);
									if(id == 'y' || id == 'Y'){
										printf("Congratulations you win a special student discount!\n");
										large2 = large2 - 2;
										printf("Your total cost now is: %f\n", large2);
									}else if(id == 'n' || id == 'N'){
										printf("Sorry you are not eligible for the student discount\n");
										printf("Your total cost now is: %f\n", large2);
									}
		
									printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
									scanf("%d", &delivery);
									if(delivery == 1){
										printf("You chose delivery\nYour total cost now is: %f", large2 + 3);
										
									}else{
										printf("You chose pickup\nYour total cost is: %f for 2 large pizzas", large2);
									
									}
								
						}	
								
						else if(amount == 3){
									
									printf("What type of crust would you want:\n1. Regular Crust: 0$\n2. Thin Crust: 1$\n3: Stuffed Crust: 2$ ");
									scanf("%d", &crust);
									if(crust == 1){
										large3 = large3 + 0;
									}	
									else if(crust == 2){
										large3 = large3 + 1;
									}
									else if(crust == 3){
										large3 = large3 + 2;
									}
										printf("Your total cost now is: %f\n", large3);
										
									printf("Do you want cheese with that? (Enter 'Y' for yes and 'N' for no) ");
									getchar();
									scanf("%c", &cheese);
									
									if(cheese == 'y' || cheese == 'Y'){
										large3 = large3 + 1.5;
										printf("Your total cost now is %f\n", large3);			
									}
									
									
									else if(cheese == 'n' || cheese == 'N'){
										
										printf("Your total cost now is %f\n", large3);
										
									}
									
									printf("What time is it? (Enter in 0-23  format): ");
									scanf("%d", &time);
									if(time > 11 && time < 14){
										printf("Great, you recieve a discount!\n");
										large3 = large3 * 0.9;
										printf("You total price now is: %f\n", large3);
										
									}
									else{
										printf("Sorry we can not provide the discount at this time\n");
										printf("Your total price is still: %f\n", large3);
									}
									fflush(stdin);
									printf("Do you have an student ID? (Enter 'y' for yes and 'n' for no) ");
									scanf("%c", &id);
									if(id == 'y' || id == 'Y'){
										printf("Congratulations you win a special student discount!\n");
										large3 = large3 - 2;
										printf("Your total cost now is: %f\n", large3);
									}else if(id == 'n' || id == 'N'){
										printf("Sorry you are not eligible for the student discount\n");
										printf("Your total cost now is: %f\n", large3);
									}
									
									if(amount == 3 && crust == 3){
										printf("You get a free garlic bread!\n");
									}
									
									printf("How would you want your order: 1. Delivery(3$) or 2. Pickup(free) ");
									scanf("%d", &delivery);
									if(delivery == 1){
										printf("You chose delivery\nYour total cost now is: %f\n", large3 + 3);
										
									}else{
										printf("You chose pickup\nYour total cost is: %f for 3 large pizzas and a free garlic bread", large3);
										printf("---------Reciept-----------\nTotal: %d\nFree items: garlic bread!");
										
									}
									printf("---------Reciept-----------\nTotal: %f\nFree items: garlic bread!", large3);
								
						}
					
					
					
					
					
					
					
					
					
					
					
				}else if(quantity == 1){
					printf("Your total is 18$");
				}
			
			
			
			}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	} 
		

	























			
		
	
	

