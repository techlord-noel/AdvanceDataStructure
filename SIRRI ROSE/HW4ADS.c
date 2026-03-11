#include <stdio.h>
int main() {
	int score;
	char grade;
	printf("Enter student score: ");
	scanf("%d", &score);
	if (score < 0 || score >100){
		printf("Invalid score! please enter number between 0 and 100.\n");
		return 1;
	}
	if(score >= 80 && score <= 100) {
		grade ='A';
	} else if(score >= 70 && score <= 80) {
		grade ='B';
	} else	if(score >= 60 && score <= 70) {
		grade ='C';
	} else	if(score >= 50 && score <= 60) {
		grade ='D';
	}else {
		grade = 'F';
	}
	printf("score: %d\n", score);
	printf("Grade: %c\n", grade);
		return 0;
	}
