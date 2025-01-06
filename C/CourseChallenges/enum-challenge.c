#include<stdio.h>
int main(){
    enum Company {GOOGLE , FACEBOOK , XEROX ,YAHOO, EBAY , MICROSOFT};
    enum Company me ,you , her ; 
    me = XEROX ;
    you= GOOGLE;
    her= EBAY;
    printf("%d\n",me);
    printf("%d\n",you);
    printf("%d\n",her);
    return 0;
}