#include<iostream>
using namespace std;

struct deck_of_cards {
	int face; //1(A),2,3,4,5,6,7,8,9,10,11(J),12(Q),13(K)
	int shape; //1(hearts), 2(spades) , 3(clubs) , 4(diamonds)
	int color; //red , black 
};

int main (){
	deck_of_cards deck1[52];
	deck1[0]={1,1,1};
	deck1[19]={12,3,2};

	cout<<deck1[0].shape<<endl;
}
