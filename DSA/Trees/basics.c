#include<stdio.h>

/*Tree is a collection of nodes where one node is the root node while the rest of the nodes are divided into disjoint subsets, 
where each subset is a tree or a subtree
Terminology: 
1. Root : first node
2. Parent and child: a node is a parent to its very next descendant , and this descendant is the child of that parent node.
3. Siblings : children of same parent
4. Descendants : for a node , its children every node connected to the children all are its descendents . basically any node which can be accessed 
	by a node , is its descendant
5. Ancestors: all the nodes from that node to root node are all ancestors 
6. Degree of a node : Degree of a node is the number of children its having 
7. leaf/external nodes : nodes with degree zero are leaf nodes . they have no children 
8. internal nodes : those whose degree> 1
9. levels : level of a node is the number of nodes needed to access to reach it .  levels starts from 1 at root since we count nodes 
10. Height of a tree : it is the number of edges required to reach the bottom of the tree , hence height starts from 0 at root since we count edges
11. Forest : collection of trees is called a forest 


Binary Trees: every node can have a maximum of 2 children . So degree of any node is either 0 , 1 or 2. 
				since there are only 2 children , we can name them as left child and right child 
				A binary tree where we only have left children is a left skewed binary tree. and similarly a binary tree where only right children
				exist is called a right skewed binary tree. 
