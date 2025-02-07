# what is Memory 
To understand static memory allocation and dynamic memory allocation we need to first understand what memory even is . A block of memory is divided into bytes , and each byte has an address . Big memories dont work as a chunk of memory rather they are divied into segments. in older systems the size of a segement was 64kB which is 65536 bytes . So in furthur discussion we will alwys assume that the size of out memoery is 64kB . 


During execution of a program , main memory is divided into 3 parts :
* code section
* stack
* heap


## Static Memory Allocation : 

Lets take an example code :

	int main(){
		int a; //4bytes
		float b; //8bytes
		return 0;	
	}
The code is stored inside code section part of memory .

Memory for variables a and b is assigned during compilation of the program . this is an example of static memory allocation.
Static because how many bytes of memory was required by main function was decided at compile time AND memory allocated is static .

For a series of function calls :

	void func1(){
		int x;
		func2();
	}
	void func2(){
		int y;
	}
	int main(){
		int a,b;
		func1();
		return 0;
	}


Here main function is called first which creates an activation record for main function and allocates memory for variables 'a' and 'b'. then func1() is called which creates an activation record for func1() on top of activation record of main , memory for variable x is allocated and func2() is called . which creates a activaton record for func2() on top of the one for func1() and allocates memory for int y .   
then func2() is done executing , its activation record is deleted which includes the variables created during its execution , and then record of func1() is deleted and then finally main functions records are deleted from stack .  

This way of stacking memory is what this section is called 'Stack'. 

## Dynamic memory allocation :
Heap is used for DMA , heap can contain organized or unorganized data . 
Heap memory should be used like a resource , alloacted when needed and released when done .

Programs cannot access heap directly  , so we use pointers to access it.

	void main(){
		int *p; //declaring a pointer for int
		p = new int[5]; //allocating memory for 5 ints in heap 
		//in C:
		p = (int *)malloc(sizeof(int)*5);
		.
		.
		.
		.
		delete []p;
		p= null;
		return 0;
	}

