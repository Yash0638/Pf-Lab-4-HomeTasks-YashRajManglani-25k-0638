#include<stdio.h>

int main(){
	int choice;
	printf("Hello Sir\nWelcome to Yash's Pizza Place! ");
	printf("What pizza would you like to have\n1. Small\n2. Medium\n3. Large ");
	scanf("%d", &choice);
	if(choice == 1){
		printf("You chose small pizza!\n");
	
		
	}
	else if(choice == 2){
		printf("You chose medium pizza!\n");
	}
	else if(choice == 3){
		printf("You chose large pizza!\n");
		
	}
	else{
		printf("Invalid Size");
	}
	

}
