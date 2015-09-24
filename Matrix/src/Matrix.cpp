//============================================================================
// Name        : Matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {

	long T, R, C;
	long i, last, sum=0,j;
	cin >> T;

	while(T--){
		printf("%ld%ld",&R,&C);
		//cin >> R >> C;
		last = R*C;
		for(i=1,j=1;i<=last && j<=last; i+=C+1, j+=R+1){
			sum +=i+j;
		}
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}
