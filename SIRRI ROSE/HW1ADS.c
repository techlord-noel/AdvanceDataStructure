#include <stdio.h>
int main() {
	float amount, discount=0.0, finalAmount;
	printf("Enter the amount: ");
	scanf("%f", &amount);
	if (amount > 10000) {
		discount = amount * 0.10;
	}
	finalAmount = amount - discount;
	printf("Discount: %.2f\n",discount);
	printf("Final amount: %.2f\n",finalAmount); 
	return 0;
}
