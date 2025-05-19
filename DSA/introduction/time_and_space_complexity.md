# time complexity and space complexity :
Time complexity refers to the time that it takes a program to do its task.
It depends on the procedure which the program uses .

## Program 1 :
Lets assume an array with 'n' elements .

To print each element of this array :
	
	for(int i=0; i<n ; i++){
		cout<<array[i];
	}
This goes through each element of the array once , hence we say that the time complexity of this program is on the order of 'n' , denoted as o(n). 

The space complexity of this program is also O(n) since it directly depends on the number of elements . 

For a linked list , each node contains data and a link to next node so the space occupied is 2n , which means the space complexity is O(n) since it still linearly grows with n ,  diffrence being that the slope is 2 .


## Program 2 :
 Suppose we run a program which prints the entire array for every element in the array :
 
 	for(int i = 0 ; i<n ; i++){
 		for (int j =0 ; j<n ; j++){
 			cout<<array[j]<<endl;
 		}
 	}
 The nested for loop performs 'n' operations and the outer loop runs 'n' times aswell , so in total n x n operations are being performed .
 Hence the time complexity of this program is o(n^2).
 
 Which means that the time complexity of the first program is linear , while its parabolic for the second program . 
 By definition o(n) is faster than o(n^2) and this is really important when dealing with large 'n'. 
 
 The space complexity of this Program is O(n).
 
 ## Program 3 :
Lets look at a function which goes through each element in an array and returns the sum of every element ahead of it :

	for (int i = 0  ; i<n ;i++){
		sum = 0 ;
		for (int j = i+1 ; j<n ; j++){
			sum+=array[j];
		}
		cout<<sum<<endl;
	}
	
For first element it will make n-1 calculations and for second n-2 then n-3 then n-4 then n-5 . . . . . . 3, 2 , and finally 1.
This is the sum of first n natural numbers , so number of operations = (n^2 - n)/2 , which is a function with degree 2. Hence the time complexity is o(n^2). 

The space complexity of this program is O(n).

## Program 4 :
Supppose a loop in which the list keeps getting divided in half with every iteration :
	
	for(int i = n ; i>1 ; i = i/2 ){
		//some code here
	}
Such a program is of O(log(n)) with base 2 .

The space complexity of this program is O(n).