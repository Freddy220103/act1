// =================================================================
//
// File: activity.h
// Author: Alfredo Gómez Mendoza
// A01704189
// Date: 19/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// complexity O(n)
// =================================================================
int sumaIterativa(int n) {
	int res=0, i=1;
	while (i<=n){
		res=res+i;
		i+=1;
	}
	return res;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// complexity O(1)
// =================================================================
int sumaRecursiva( int n) {
	int res=1;
	if(n==1){
		res=1;
		return res;
	}
	/*else if (n<=2){
		res=res*2;
		return res;
	}*/
	else{
		res=sumaRecursiva(n-1)+n;
		return res;
	}
	
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with a mathematical
// method.
//nponmas1sobre2
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// complexity O(n*n)
// =================================================================
int sumaDirecta(int n) {
	return (n*(n+1)/2);
}

#endif /* ACTIVITY_H */
