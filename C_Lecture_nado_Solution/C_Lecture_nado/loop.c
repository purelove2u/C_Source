# include <stdio.h>

int main(void)
{
	/*printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");*/

	// ++
	/*int a = 10;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);*/

	//int b = 20;
	//printf("b = %d\n", ++b);	//21
	//printf("b = %d\n", b++);	//21
	//printf("b = %d\n", b);		//22

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	// 반복문
	// for, while, do while

	//for (선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	// while(조건){}
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}*/

	// do {} while(조건){}
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	// 구구단
	/*for (int i = 2; i <= 9; i++) {
		printf("%d 단\n", i);
		for (int j = 1; j <= 9; j++) {
			printf(" %d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}*/

	//    *
	//   **
	//  ***
	// ****
	//*****
	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 4; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/


	// 피라미드
	/*int floor;
	printf("몇 층으로 쌓을 것인가?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) 
	{
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2*i+1; k++) {
			printf("*");
		}
		printf("\n");
	}*/





	return 0;
}
