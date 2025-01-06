#include<stdio.h>

/*
When main is called by runtime system, two arguements are passed to the function:
  -The first arguement (argc for argument count) is an integer value that specifies the number of arguments 
   types on the command line .
  -The second argument (argv for argument vector) is an array of charector pointers (strings).
The first entry in this aray is a pointer to the name of the program that is executing. 
*/

int main(int argc, char *argv[]){
    int i; 
    for(i=0; i< argc; i++) {
        printf("argv[%d] is %s\n", i , argv[i]);
    }
    return 0;
}

/* in cmd when runnning the executable , follow it with arguments.
 ex. Command_line_args.exe arg1 arg2 arg3 
*/
