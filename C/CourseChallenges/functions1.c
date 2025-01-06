#include<stdio.h>
#include<stdlib.h>

int gcd(unsigned int x, unsigned int y);
float absv(float a);
float squareRoot(float x);

int main(){
    int GCD = gcd(50,25);
    printf("%d\n",GCD);
    float Absolute = absv(-2.5);
    printf("%f\n",Absolute);
    float Sq = squareRoot(34.5);
    printf("%f",Sq);
    return 0;

}
//GCD funtion:
int result1;
int gcd(unsigned int x, unsigned int y) {
    if(x>=y){
        result1 = x;
    }
    else{
        result1 =y;
    }
    while(result1>0){
        if(x%result1==0 && y%result1==0){
            break;
        }
        result1--;
    }
    return result1;
}
//Absolute value function:
float absv(float a){
    if(a<0){
        a = -a;
    }
    return a;
}
//Square root function:
float squareRoot(float x)
{
    const  float  epsilon = .00001;
    float  guess   = 1.0;
    float returnValue = 0.0;

    if ( x < 0 )
    {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    else
    {
        while  ( absv (guess * guess - x) >= epsilon )
           guess = ( x / guess + guess ) / 2.0;

        returnValue = guess;
    }

    return returnValue;

}