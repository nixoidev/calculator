#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int num1, num2, result;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = sub(a, b);
			break;
		case '*':
			c = multi(a, b);
			break;
		case '/':
			c = div(a, b);
			break;
	}


	printf("result is %d%c%d=%d.\n", num1,operator,num2,result);

	
	return 0;
}
 
int add(int a, int b)
{
	//TODO implementation
	return a+b;
}
 
int sub(int a, int b)
{
	//TODO implementation

	//bug fix :: hot fix 0.0.2
	return a-b;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return a*b;
}
 
int div(int a, int b)
{
	//TODO implementation
<<<<<<< HEAD
	return 0;
}

void testMethod()
{
    return;
=======
	return (int)a/b;
>>>>>>> develop
}