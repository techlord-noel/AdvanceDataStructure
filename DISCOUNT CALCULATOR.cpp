#include <stdio.h>
int main() {
	float totalPrice, discount, finalAmount;
	
	printf("Enter total price: ");
	scanf("%f", &totalPrice );
	
	if(totalPrice >10000){
		discount = totalPrice * 0.10;
	}
	else{
		discount = 0;
	}
	
	finalAmount = totalPrice - discount;
	
	printf("Discount = %.2f\n", discount );
	printf("Final amount = %.2f\n", finalAmount);
	
	return 0;
	}
