#include<stdio.h>
int a ;
int b ;
int main(){
    
    printf("enter digit a : ");
    scanf("%d",&a);
    printf("enter digit b : ");
    scanf("%d",&b);

    if (a==b/* condition */)
    {
        printf("what the poop!");/* code */
    }
    else{
        if (a>b)
        {
            printf("meowindar singh");
        }
        else{
            printf("bludy el ue omelanda took me bludy sun");
        }
    }

    SameUsingElseIf();

    return 0;
}

int SameUsingElseIf()  {
   
    if (a==b)
    {
        printf("what the poop!");
    }
    else if (a>b)
    {
        printf("meowindar singh");
    }
    else{
        printf("bludy el ue omelanda took me bludy sun");
    }

    return 0;
}