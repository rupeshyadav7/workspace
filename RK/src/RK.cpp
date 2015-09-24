//============================================================================
// Name        : RK.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

inline int rCount(string & str){
	int count=0,i=0;
	if(!str[0])return 0;

	for(i=0;i<str.length();i++)
		if(str[i] == 'R')count++;
	return count;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	int T, i=0, j=0, length, rcount, newrcount, max=0, nextK=0;
	string str;
	cin >> T;
	while(T--){
		cin >> str;
		rcount = rCount(str);

		if(rcount == str.length()){
			cout << rcount << endl;
			continue;
		}

		newrcount = rcount;
		length = str.length();
		int dp[length][length];
		nextK = 0;
		for(int ii=0; ii<length; ii++)dp[0][ii]=0;

		while(str[nextK++]=='R');
		nextK--;
		int ii = nextK;

		while(ii<length){
			for(i=1;i<=length ;i++){
				for(j=ii;j<=length;j++){

					if(str[j]=='K')
						newrcount++;
					else
						newrcount--;

					if(dp[i-1][j] <= newrcount)
						dp[i][j] = newrcount;
					else
						dp[i][j] = dp[i-1][j];

					if(max<newrcount)
						max = newrcount;
				}
				newrcount = rcount;
				nextK=ii+1;
				if(nextK<=length)
				while(str[nextK++]=='R');
				ii = --nextK+1;
			}

		}
		cout << max << endl;
		max = 0;

	}

	return 0;
}
