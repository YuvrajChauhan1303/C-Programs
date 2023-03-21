#include<stdio.h>
int main()
{
	int user_id;
	int units;
	float min_charge = 50;
	float final_bill;
	printf("Enter User ID: ");
	scanf("%d" , &user_id);
	printf("Enter the number of units consumed: ");
	scanf("%d" , &units);
	
	if(units < 100 && units <= 50)
		final_bill = min_charge;
	else if(units < 100 && units > 50)
		final_bill = (1*units);
	else if (units > 100 && units < 300)
		final_bill = 100 + (2*(units-100));
	else if (units >= 300 )
		final_bill =  500 + (3*(units-300));
	if (final_bill > 1000){
		final_bill = final_bill + (final_bill)*(15/100);
	}
	printf("User ID: %d\nUnits Consumed: %d\nTotal Bill: %f\n", user_id,units,final_bill);
	return 0;
}
	
	
	
