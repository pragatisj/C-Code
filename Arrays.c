#include<stdio.h>

// int main()
// {
	// //One dimensional array
	// int marks[3], sum=0;
	// printf("Enter marks of 3 students : \n\n");
	// for (int i=0;i<=2;i++)
	// {
	// printf("Marks of %d student : ", i+1);
	// scanf("%d", &marks[i]);
	// sum += marks[i];
	// }
	// int average = sum/3;
	// printf("The average marks of 3 students are %d", average);




    //Two dimensional array
// 	int Matrice[3][3]; 
// 	printf("This Program will print no. from 1-9 in matrice form : \n\n");
// 	for (int i=0;i<3;i++)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("Enter no. (1-9) : ");
// 			scanf("%d", &Matrice[i][j]);
// 		}
// 	}
// 	printf("\n");
// 	for (int i=0;i<3;i++)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("%d\t", Matrice[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	printf("So that's the matrice form of no from 1-9");
// 	return 0;
// }




// int sum(int arr[]) {
// int sum_of_array=0;
// for (int i = 0; i<4; ++i) {
// sum_of_array += arr[i]; 
// }
// return sum_of_array; 
// }  

// int main() {   
// int result, array[] = {23,33,44,55};   
// result = sum(array);     
// printf("Result = %d", result);   
// return 0;
// } 





int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    func2(arr);
    func2(arr);
    func3(arr);
    return 0;
}
