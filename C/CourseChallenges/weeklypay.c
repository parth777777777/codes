#include<stdio.h>
#include<stdlib.h>
int main(){
    double hours; 
    double grossPay;
    double payRate = 12.00;
    double overtimeRate = 18.00;
    double TAX_ON_300 = 45;
    double TAX_ON_450 = 45+30;
    double netPay;
    printf("Enter hours wokred this week: ");
    scanf("%lf",&hours);
    if (hours>=(24*7))
    {
        printf("ERROR : HOURS ENTERED EXCEED MAXIUMUM HOURS IN A WEEK.\n");
        exit(1);
    }
    else if (hours<=40)
    {
        grossPay=hours*payRate;
    }
    else{
        grossPay = 40*payRate + (hours-40)*overtimeRate;
    }

    if(grossPay<=300){
            netPay=grossPay-((grossPay/100)*15);
            printf("HOURS WORKED : %0.2lf\n",hours);
            printf("GROSS PAY : %0.2lf\n",grossPay);
            printf("NET PAY : %0.2lf\n",netPay);

        }
        else if (grossPay<=450)
        {
            netPay= (300-TAX_ON_300)+ ((grossPay-300)-((grossPay-300)/100)*20);
            printf("HOURS WORKED : %0.2lf\n",hours);
            printf("GROSS PAY : %0.2lf\n",grossPay);
            printf("NET PAY : %0.2lf\n",netPay);
           
        }
        else{
            netPay= (450-TAX_ON_450) + ((grossPay-450)-((grossPay-450)/100)*25);
            printf("HOURS WORKED : %0.2lf\n",hours);
            printf("GROSS PAY : %0.2lf\n",grossPay);
            printf("NET PAY : %0.2lf\n",netPay);
            
        }
}
