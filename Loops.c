#include <stdio.h>
//  int main()
//  {
//     int n, sum = 0;
//     do
//     {  
// printf("Enter a number: ");
// scanf("%i", &n);
//         sum += n;
//     }
//     while(n != 0);
//     printf("Sum is = %d",sum);



//    int i = 0;
//     while (i<11)
//     {
//         printf("%d\n", i);
//         i = i+1;
//     }



//  int num = 10;
//     int i;
//     for(i = 0; i < num; i++) { 
//     printf("%d ",i);
// }
//     return 0;
// }





//PATTERNS

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern:\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;

    case 1:
        reverseStarPattern(rows);
        break;

    default:
        printf("You have entered an invalid choice");
        break;
    }

    return 0;
}

