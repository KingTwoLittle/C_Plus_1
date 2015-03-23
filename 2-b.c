#include <stdio.h>
void myFun(void){

	int age;
	int days;

	age = 24;
	days = 365;

	printf("an age of %d is %d days.\n", age, age*days);

}

void Rhodium(void){/*用金属铑衡量您的体重*/
	
	float weight;
	float value;

	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out!\n");
	printf("Please enter your weight in pounds：");
	/*键盘输入*/
	scanf("%f",&weight);

	value = weight * 770 * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("You are easily worth that ! If rhodium price drop.\n");
	printf("eat more to maintain your value.\n");

}