#include<stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

struct complejo{
	double a,b;
};

complejo operator +(complejo a, complejo b);

int main(){
	complejo x={10, 32};
	complejo y={5, 12};
	complejo z;
	z=x+y;
	cout<< "Suma de complejos: " << z.a <<","<< z.b << endl;
	return 0;
}


complejo operator +(complejo a, complejo b){
	complejo temp= {a.a- b.a , a.b- b.b};
	return temp;
}
