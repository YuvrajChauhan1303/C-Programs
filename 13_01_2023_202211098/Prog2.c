#include<stdio.h>
int main()
{
	int roll_no, total_marks;
	char grade;
	printf("Enter Roll N0: ");
	scanf("%d" , &roll_no);
	printf("Enter Total Marks: ");
	scanf("%d" , &total_marks);
	if(total_marks > 90 && total_marks <= 100)
		grade = 'A';
	else if(total_marks > 80 && total_marks <= 90)
		grade = 'B';
	else if(total_marks > 70 && total_marks <= 80)
		grade = 'C';
	else if(total_marks > 60 && total_marks <= 70)
		grade = 'D';
	else if(total_marks > 50 && total_marks <= 60)
		grade = 'E';
	else if(total_marks < 50 && total_marks >= 0)
		grade = 'F';
	printf("The Marks for Roll NO: %d are %d and the Grade Assigned is %c\n" , roll_no , total_marks , grade);
	return 0;
}
