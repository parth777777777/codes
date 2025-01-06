#include<stdio.h>   
int main(){
    double min;
    printf("please enter duration in minutes: ");
    scanf("%lf",&min);
    double min_per_year = 60*24*365;
    double years = min/min_per_year;
    double days = (min/60)/24;

    printf("%0.3lf minutes will be %0.3lf years\n",min,years);
    printf("%0.3lf minutes will be %0.3lf days",min, days);
    
    return 0;
}