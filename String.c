#include <stdio.h>
#include <string.h>

int main( ) { 
    //This function is used to concatenates the source string at the end of the target string. 
// char  t[30] = "Hello" ;
// char  s[ ] = "World" ;
// strcat ( t, s ) ;
// printf ( "String = %s", t ) ;


//   //This function is used to counts the number of characters present in a string.
// char  str[ ] = "Harry" ;
// int  str_length;
// str_length= strlen ( str ) ;
// printf ( " length = %d", str_length );


//   // This function is used to copies the contents of one string into another. 
//   // The base addresses of the source and target strings should be given to this function.
// char  s[ ] = "CodeWithHarry" ;
// char  t[20] ;
// strcpy ( t, s ) ;
// printf ( "\n Source string = %s", s ) ;
// printf ( "\n Target string = %s", t ) ; 


//   //This function is used to compares two strings to find out whether they are same or different
// char string1[ ] = "Harry" ;
// char string2[ ] = "Code" ;
// int a;
// a= strcmp ( string1, string2 ) ;
// printf ("%d", a) ;
// return 0;



//   //This function is used to show the reverse of the string. Following are the example of strrev():
// char str[50] = "1234";
// printf("After reversing string is =%s",strrev(str));
// return 0;




 char s1[] = "vaibhav";
    char s2[] = "ravi";
    char s3[54];
    printf("The strcmp for s1, s2 returned :%d ", strcmp(s1, s2));
    puts(strcat(s1, s2));
    printf("The length of s1 is: %d\n", strlen(s1));
    printf("The length of s2 is :%d\n", strlen(s2));
    printf("The reversed string s1 is: ");
    puts(strrev(s1));
    printf("The reversed string s2 is: ");
    puts(strrev(s2));

    strcpy(s3 ,strcat(s1, s2));
    puts(s3);
    
    // allow user to enter two strings and then concatenate them by saying that 
    // str1 is a friend of str2
    return 0;

}
