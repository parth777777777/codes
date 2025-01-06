#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char str1[]= "hello my name is poopy";
char destn[10];
char name[] = "parth ";
//strlen() --- length of a strign
printf("%d\n",strlen(str1));

//strncpy(destination string , source string , quantity of copy )  or strcpy()
strncpy(destn, str1 , sizeof(destn)-1); //size of char is, so sizeof -1('\0' is the last) gives length of a string .
printf("%s\n",destn);

//strcat() -- concatenaes two strings . first strng becoes the new string , second string is left unchanged .

printf("%s\n",strcat(name,str1));

}
