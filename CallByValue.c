#include <stdio.h>

//Call by values
// void swap(int x, int y)
// {
// int temp;
// temp=x;
// x=y;
// y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(r, v);  // passing value to function
// printf("Value of r: %d",r);
// printf("Value of v: %d",v);
// }



//Call by reference
void swap(int *x, int *y)
{
int temp;
 temp=*x;
*x=*y;
*y=temp;
}
void main()
{ 
int r=22, v=11; 
swap(&r, &v);  // passing value to function
printf("Value of r: %d",r);
printf("Value of v: %d",v);
}

