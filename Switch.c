#include <stdio.h>

    int main() {

    //make program which can convert units from one system to another.
    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first, second;

   while (1)
   {
       printf("Enter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

       scanf(" %c", &input);
    //    printf("The character is '%c'", input);
       switch (input)
       {
       case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * kmsToMiles;
        printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
        break;

        case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToFoot;
        printf("%f Inches is equal to %f Foot\n", first, second);
        break;

        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * cmsToInches;
        printf("%f Cms is equal to %f Inches\n", first, second);
        break;

        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * poundToKgs;
        printf("%f Pounds is equal to Kgs %f \n", first, second);
        break;

        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToMeters;
        printf("%f inches is equal to %f meters \n", first, second);
        break;

       default:
       printf("In default now");
           break;
       }
   }
   end:






        // int i = 9;

        // switch (i) {
        //     case 5:
        //     printf("Value is 7");
        //         break;

        //     case 0:
        //     printf("Value is 8");
        //         break;

        //     case 9:
        //     printf("Value is 9");
        //         break;

        //     default:
        //     printf("Value is not present");
        //         break;
        // }
        





    //      int age, marks;
    // printf("Enter your age\n");
    // scanf("%d", &age);

    // printf("Enter your marks\n");
    // scanf("%d", &marks);

    // switch (age)
    // {
    //     case 3:
    //         printf("The age is 3\n");
    //         switch (marks)
    //         {
    //             case 45:
    //                 printf("Your marks are 45");
    //                 break;
            
    //             default:
    //                 printf("your marks are not 45");
    //         }
    //         break;

    //     case 13:
    //         printf("The age is 13\n");
    //         break;

    //     case 23:
    //         printf("The age is 23\n");
    //         break;

    //     default:
    //         printf("Age is not 3, 13 or 23\n");
    // }


    return 0;

    }