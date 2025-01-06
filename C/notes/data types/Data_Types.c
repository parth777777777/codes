#include<stdio.h>
int main(){
    //Data types : int , float , double , char , _Bool  , Enum .

    /*
    1. int: a. stores integer values.
            b. minus sign preceesding means negative number
            c. int type is a signed integer , can be +ve , -ve or 0.
            d.if the integer is preceeded by '0x' or '0X' then the value is taken as being expressedin hexadecimal
                notation . Ex. int rgbColor = 0xFFE302; 
            e. types of int: short int , long int , unsigned int (unsigned can only store +ve values and 0).

    2. float: a. stores values wiht decimal numbers .
              b. floating point numbers can also be expressed in scientific notation .
                 ex. float num = 1.34E5;  1.34E5 === 1.34 * 10^5

    3. double: a. same as float but used when range provided by float isnt sufficient . 
               b. can store twice as many significant digits than float . 
               c. most computers represent doubles values in 64bits . 
               d. all floating point constants are taken as double by the compiler .
               e. to explictly express a float constant , append an f or F to the end of the value . ex. 12.4f
    
    4. _Bool: a. can only store 0 or 1 . Used for indicating binary results or choices. 
              b. 0 indicates false , 1 indicates true .

    5. enum: a. A data type that allows a programmer to define a variabel and specify the valid values that
                could be stored into that variable. 
             b. First define the enum type and give it a name
                -initated by the keyword enum
                -then the name of the enumerated dat type
                -then list of identifiers (enclosed in curly braces) that define the permissible values which
                 can be assigned to the variable
             c. Example : enum PrimaryColors {red,yellow,blue};
             d. To declare a variable of type enum:
                -use the keyword enum
                -followed by the enumerated type name 
                -followed by variable list 
                Example: enum PrimaryColors MyColor,YourColor; 
                hence MyColor and YourColor can only be one of red yellow or blue.
                MyColor= red; 
             e. The compiler actually treats enumeration identifiers as integer constants . 
                 First name in the list is 0. Hence when printed out on console , red would be 0 . 
             f. If we want we can assign a specific integer value to an identifier when identifier is being defined.
                 Ex. enum direction {up,left=19, right};
                    Now. up will remain 0 , left will be 19 instead and right will become 20.

    6. char: a. char represent single cahrectors like 'b', '7' ,';'
             b. cahrector literals use qoutes 'A'. 
             c. can declare an unsigned char. 
             d. Declaring a char:
                 char name= 'part';
                 char grade = 65; (will look up value of 65 in ACII table , which here is A)
             e. Escape Charectors:
                  C contains special charectors that represent actions.
                  -backspacing
                  -newline 
                  -making the terminal bell ring etc.
                  We can represent these actions using special symbol sequences called escape sequences .
                  Escape sequences must be enclosed in single quotes when assigned to a charector value .
                  -char x = '\n'; here \n represents a new line and printing x will advance the printer by one line.

    */
   
   //examples:

    float SmallPi= 3.14;
    double Bigpi = 3.14159265359;
    _Bool booleanvarible = 0; //canbe replaced with ' bool booleanvariable = false; ' if #include<stdbool.h> is used.

    enum gender{male,female};
    enum gender myGender ,yourGender;
    myGender= male; 
    yourGender= female;
    printf("%d\n",myGender);
    printf("%d\n", myGender==yourGender);

    char myGrade = 'A';
    printf("%c",myGrade);
    return 0;


}