#include <stdio.h>
#include <stdlib.h>


int main()
{
    // printf("Lets learn about pointers\n");
    // int a=76;
    // int *ptra = &a;
    // int *ptr2 = NULL;
    // printf("The address of pointer to a is %p\n", &ptra);
    // printf("The address of a is %p\n", &a);
    // printf("The address of a is %p\n", ptra);
    // printf("The address of some garbage is %p\n", ptr2);
    // printf("The value of a is %d\n", *ptra);
    // printf("The value of a is %d\n", a);



    //    //void pointers
    // int a = 345;
    // float b = 8.3;
    // void *ptr;
    // ptr = &b;
    // printf("The value of b is %f\n", *((float *)ptr));
    // ptr = &a;
    // printf("The value of a is %d\n", *((int *)ptr));



    //    //null pointer
    //  int a = 34;
    // int * ptr = NULL;
    // if (ptr != NULL){
    // printf("The address of a is %d\n", ptr);
    // }
    // else{
    //     printf("The pointer is a null pointer and cannot be dereferenced");
    // }




       // wild pointer
     int a =4354;
    int *ptr; // This is a wild pointer
    // *ptr = 34; // This is not a good thing to do
    ptr = &a; // ptr is no longer a wild pointer
    printf("The value of a is %d\n", *ptr);

    return 0;
}

