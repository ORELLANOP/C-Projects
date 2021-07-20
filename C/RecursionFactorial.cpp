/*Recursion Factorial*/

#include<stdio.h>
int factorial (int num);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n*factorial(n));
	
}

int factorial (int num){
	if( num==0) 
	return 1;
	else 
	return (factorial(num-1));
}
