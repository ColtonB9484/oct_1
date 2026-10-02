#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


double calculate_average(int score1, int score2, int score3);
char determine_grade(double grade);
void display_result(double average, char grade);

int main(void) {
	double average;
	char grade;
	int user_score1;
	int user_score2; 
	int user_score3;

	while(1) {
		printf("Enter 3 whole numbers: ");
		
		if(scanf("%d %d %d", &user_score1, &user_score2, &user_score3) != 3) {
			printf("Invalid input. Try again.\n");
			while(getchar() != '\n'); 
			continue;
		}

		average = calculate_average(user_score1, user_score2, user_score3);
		grade = determine_grade(average);
		display_result(average, grade);
	
		break;
	}
	
	return EXIT_SUCCESS;
}

double calculate_average(int score1, int score2, int score3) {
	return (score1 + score2 + score3) / 3.0;	
}

char determine_grade(double grade) {
	if(grade >= 90.0) {
		return 'A';
	} else if(grade >= 80.0) {
		return 'B';
	} else if(grade >= 70.0) {
		return 'C';
	} else if(grade >= 60.0) {
		return 'D';
	} else {
		return 'F';
	}
}

void display_result(double average, char grade) {
	printf("Average: %.2f | Grade: %c\n", average, grade);
}
