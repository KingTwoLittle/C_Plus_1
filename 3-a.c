#include <stdio.h>

void fun1();
void fun2();
void fun3();
void fun4();
void fun5();
void fun6();
void fun7();

void main(void){
	
	int x = 100;

	printf("x = %d>>x的八进制 = %o >> x的十六进制 = %x\n", x, x, x);
	printf("x = %d>>x的八进制 = %#o >> x的十六进制 = %#x\n", x, x, x);


	printf("\n");
	printf("---3.11-1---\n");
	fun1();

	printf("\n");
	printf("---3.11-2---\n");
	//fun2();

	printf("\n");
	printf("---3.11-3---\n");
	fun3();

	printf("\n");
	printf("---3.11-4---\n");
	//fun4();

	printf("\n");
	printf("---3.11-5---\n");
	//fun5();


	printf("\n");
	printf("---3.11-6---\n");
	//fun6();


	printf("\n");
	printf("---3.11-7---\n");
	fun7();

	printf("\n");

}


void fun1(){
	int a = 300000000;
	float b = 3.4E6f;
	float c = 1.0E-6f;

	printf("a is %d AND a*10 is %d\n", a, a*10);

	printf("b is %f AND b*10 is %d\n", b, b*10);

	printf("c is %f AND c/1 is %d\n", c, c/10);
}

void fun2(){
	int asc;
	
	printf("Enter an Int Num:\n");

	scanf("%d",&asc);

	printf("The Num of Char is %f.\n",asc);

}

void fun3(){
	printf("\a Startled by the sudden sound,Sally shouted.\"By the Great Pumpkin, what was that !\"");
}

void fun4(){
	float a;

	printf("enter a float Num:\n");
	scanf("%f",&a);
	printf("The input is %f or %e.\n", a, a);
}

void fun5(){
	float sec = 3.156e7f;
	int age;
	printf("Enter you age:\n");
	
	scanf("%d",&age);

	printf(" your age of second is %e or %f", age*sec, age*sec);

}

void fun6(){
	float water = 3.0e-23f;
	int waters = 950;
	int n;
	printf("Enter the num:\n");

	scanf("%d",&n);

	printf("the num of water is %e", n*waters/water);
}

void fun7(){
	float inch = 2.54f;
	int h;
	printf("enter your height of cm:\n");
	scanf("%d",&h);
	printf("Your height by inch is %f", h*inch);
}