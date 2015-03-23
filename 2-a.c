#include <stdio.h>

void myFun();
void goodFun();
void denyFun();
void int5();
void smile();
void one_three();
void Rhodium();

int main(void){
	printf("---测试---\n");
	printf("How many dogs do you have?\n");

	printf("\n");
	printf("---2.11-7---\n");
	printf("There were %d words and %d lines\n", 3020, 350);
	
	printf("\n");
	printf("---2.12-1---\n");
	printf("Anton Bruckner\n");

	printf("Anton\nBruckner\n");

	printf("Anton ");
	printf("Bruckner\n");

	printf("\n");
	printf("---2.12-2---\n");
	printf("姓名:Anton Bruckner;\n地址:paris of franch.\n");
	
	printf("\n");
	printf("---2.12-3---\n");
	myFun();
	
	printf("\n");
	printf("---2.12-4---\n");
	goodFun();
	goodFun();
	goodFun();
	denyFun();

	printf("\n");
	printf("---2.12-5---\n");
	int5();
	
	printf("\n");
	printf("---2.12-6---\n");
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	
	printf("\n");
	printf("---2.12-7---\n");
	printf("starting now:\n");
	one_three();
	printf("done!\n");

	printf("\n");
	Rhodium();
	printf("\n");
	return 0;
}

void goodFun(void){/*定义一个输出函数*/
	printf("For he's a jolly good fellow!\n");
}

void  denyFun(void){/*定义一个输出函数*/
	printf("Which nobody can deny!\n");
}

void int5(){/*定义一个能计算和与平方的函数*/
	int toes;

//	toes = 10;/*在此处赋值会报错*/

	int a;
	int b;

	toes = 10;
	a = toes + toes;
	b = toes * toes;

	printf("toes is %d\ntoes plus toes is %d\ntoes times toes is %d\n", toes, a, b);
}

void smile(){/*定义一个能输出“smile”的函数*/
	printf("Smile!");
}

void two(){
	printf("two\n");
}
void two();
void one_three(){
	printf("one\n");
	two();
	printf("three\n");
} 
