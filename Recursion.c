#include<stdio.h>
// int factorial(int number)
// {
// 	if (number ==1 || number == 0)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return number*factorial(number-1);	//Recursion of Function
// 	}
// }




    int fib_recursive(int n)
{
    if (n == 1 || n == 2)
        return n;
    else
        return fib_recursive(n - 1) + fib_recursive(n - 2);
}


int main()
{
	// int num;
	// printf("Enter a no: ");
	// scanf("%d", &num);
	// printf("The factorial of %d is: %d", num, factorial(num));


    int n, result;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid input. Number of terms should be greater than or equal to 1.\n");
        return 0;
    }
    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= n; i++)
    {
        result = fib_recursive(i);
        printf("%d ", result);
    }


	return 0;
}