#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}



// void printstar(int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//          printf("%c", '*');
//     } 
// }



// int takenumber()
// {
//     int i;
//     printf("Enter a number:\n");
//     scanf("%d", &i);
//     return i;
// }



int main()
{
    int a, b, c;
    a = 100;
    b = 100;
    c = sum(a, b);
    printf("The sum is: %d \n", c);


    //printstar(7);


    // int j;
    // j = takenumber();
    // printf("The number entered is %d \n", j);

    return 0;
}

