# array representation in compiler
- ## 1D array :
int A[5] = {1,2,3,4,5};

This creates 5 memory blocks of size int , 
the name of the array is the address to the first memory block , 
lets say the memory address is 100 . then A[0] == A == 100 for the compiler.

To access indices after 0 , the compiler uses a formula :

for A[3] : Address of A(100) + index(3) * sizeof(int); 

I.e  100 + (3*4) = 112


### *Formula for 1d array* : Addr(A[i]) = L<0> + ( i * w )
	Where:
	 L<0> =  base address i.e address pointed by name of variable
     i = index 
     w = size of data type	

- ##  2D array:
2 ways in which 2d arrays can be mapped/represented :
1. Row major mapping
2. Column major mapping

### *Row Major Mapping :*
Imagine a 2D array of dimension 3x3 in a grid :

now row by row each element is placed in order of address . First row will be first 3 elemets , second row will be elements 4 to 6 (since 2D arrays are actually 1D arrays ) , and third row will be the last 3 elements.

So to access A[1][2] : 
		let  base address be 200 
		
200 + (4 + 2 ) *sizeof(int)

### *Formula for Row Major Mapping*: 
### ==> Addr(A[i][j])  = L<0> + [ i * n + j ]*w 
	Where:
	 L<0> =  base address i.e address pointed by name of variable
     i = row index 
     j - colummn index 
     n = from mxn (dimension of matrix)
     w = size of data type	

### *Column Major Mapping :*

Here , elements of first column are the first m elements (since there are m elements in a column ) , the second column represents the next m elements , and so on...

**For a 3x3 matrix :**
The first 3 elements stored in memory will be from A[0][0] , A[0][1], A[0][2]. 

So to access A[1][3] : 
		let  base address be 200 
		
200 + ( 3 * 3 + 1)* sizeof(int)

### *Formula for Column Major Mapping*: 
### ==> Addr(A[i][j])  = L<0> + [ j * m + i ]*w 
	Where:
	 L<0> =  base address i.e address pointed by name of variable
     i = row index 
     j - colummn index 
     m = from mxn (dimension of matrix)
     w = size of data type	
     


- ## 3D arrays : int A[i][j][k]
### *Row Major Formula :*
### ==> Addr(A[i][j][k]) = L<0> + [i * m * n + j * n + k] * w
### *Column Major Formula :*
### ==> Addr(A[i][j][k]) = L<0> + [k * l * m + j * l + i] * w


- ## nD arrays : A[i][j][k]......[n] 
### *Row Major Formula :*


### *Column Major Formula :*

### Just google when you need it gng :)
