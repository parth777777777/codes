#include<stdio.h>
#include<stdlib.h>
// the struct keyword enables eanbels you to define a 	collection of various variables of various types called a structure that you can treat as a single unit 
struct date {
	int day ;
	int month ; 
	int year ;
};
//this above statement is a declaration of date structure is defines a date structure to the C compiler 
//there is no memory allocaiton for this declaration.
//The variable names within the date structure , month , day , and year , are called members of the structure 

//the definition of date defines a new type in the language 
	// variables can now be declared as type 'struct date'
struct date today ; //declaring a variable named today of type struct date 

struct date birthday; //declaring a variable named birthday of type struct date 

//memory is now allocated for the variables declared above 
	// memory is allocated for 3 integer values for each variable

// A structure variable name is not a pointer -- we need special syntax to access the members 
// we refer to the member of a structure variable using period 
int main(){
	today.day = 19;
	today.month = 12;
	today.year = 2024;

	printf("Enter day of birth :");
	scanf("%d",&birthday.day);
	printf("Enter month of birth :");
	scanf("%d",&birthday.month);
	printf("Enter year of birth :");
	scanf("%d",&birthday.year);
	printf("Your bday is on %i/%i/%i\n",birthday.day,birthday.month,birthday.year);
	return 0;
}

