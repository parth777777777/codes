#include<stdio.h>
#include<stdlib.h>

int main (){
    //making a string :
    char greetings[] = "Waddup with you homie";
    printf("%s\n",greetings);

    //String are arrays of char in C :
    // so we can use index to get a certain value 
    printf("Char at index 1 is : %c\n",greetings[1]);
    //similarly we can also modify a string 

    //looping thru a str:
    char carName[] = "Volvo";
    int length_of_string = sizeof(carName) / sizeof(carName[0]);
    for(int i=0; i<length_of_string ; i++){
        printf("%c ",carName[i]);
    }
    printf("\n");

    //Creating string using string literal:
    char hello_world[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};  
    printf("%s\n", hello_world);
    
    //the \0 cahrector called NULL charector indicates the end of a string: it takes up a space in memory
    char poop[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W','\0' ,'o', 'r', 'l', 'd', '!' };
    printf("%s\n", poop); //string ends when encounnters \0.

    //Escape charectors:
    // \n = new line
    // \t = tab 
    // \0 = Null
    // \' or \" = single qoute and double respectively
    // \\ = backslash
    printf("poopindar said \"waddup homie\" \tand left\n");

    //we can specify th size of string and leave space for null charector:
    char myname[5] ="parth";
    //even if we dont give null charctor space, the compiler doesnt care , so its pretty much worth less to do this
    printf("%s\n",myname);
    return 0;
}