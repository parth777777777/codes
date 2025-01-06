#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int balance = 0;
bool running= true;

int check_balance();
void deposit_money();
void withdraw_money();
void user_screen();

int main(){
	do{
		user_screen();
	}
	while(running);
}

int check_balance(){
	system("clear");
	return balance;
}

void deposit_money(){
	int money;
	printf("current balance : %d\n", check_balance());
	printf("enter amount to deposit: ");
	scanf("%d",&money);
	balance += money;
	system("clear");
	printf("Balance after deposit : %d\n", check_balance());
}

void withdraw_money(){
	int money;
	printf("current balance : %d\n", check_balance());
	printf("enter amount to withdraw : ");
	scanf("%d",&money);
	if(money>balance){
		system("clear");
		printf("insufficient balance\n");
	}
	else{
		balance -= money;
		system("clear");
		printf("Balance after withdrawal: %d\n", check_balance());
	}
}

void user_screen(){
	printf("welcome\n");
	printf("Select option:\n");
	printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Quit\n");
	int a;
	printf("==> ");
	scanf("%d",&a);
	switch(a){
		case 1:
			deposit_money();
			break;
		case 2:
			withdraw_money();	
			break;
		case 3:
			printf("current balance : %d\n", check_balance());
			break;
		case 4:
			running = false;
			break;
	}

}

