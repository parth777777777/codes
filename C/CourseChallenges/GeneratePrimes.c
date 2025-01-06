#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    /*Math : Numbers are either prime or not . non primes can be factored by primes since primes themselved 
     cant be broken down further . So we will check a number if itd prime by checking if the modulus of that number 
     and all previous primes isnt zero. because if it is , i can be factored and hence isnt prime.*/
    long long number;
    printf("enter the upper limit of prime printer program : ");
    scanf("%lld",&number);
    long long primeIndex = 2; //will +1 every time a new priome is added . 
    long long f=0;
    long long Primes[250000];
    Primes[0] = 2;  //hardcoding fist two primes into the program for ease .
    Primes[1] = 3;

    for(long long i=5; i<=number;i+=2){
        bool isPrime = true ;

        for( f=0 ; isPrime && i/Primes[f] >= Primes[f]; f++ ){
            if( i % Primes[f] == 0 ){
                isPrime= false;
            }
            }

        if(isPrime==true){
            Primes[primeIndex]= i;
            primeIndex+=1;  
        }

        }
        for (long long g=0; g < primeIndex; ++g){
            printf("Sr.No %lld : %lld\n",g+1, Primes[g]);
        }
        return 0;
    }
