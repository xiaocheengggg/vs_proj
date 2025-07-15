
/*
// vs_proj1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <file1.h>


int main()
{

	printf("Hello\tWorld\n\n");


	//funct1();
}
*/




#include <stdio.h>

# define Version 0.1


#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main()
{

	int area;

	area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", NEWLINE);
	printf("%c", NEWLINE);

	return 0;
}