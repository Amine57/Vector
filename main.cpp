#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;



int main() {
	vector<double> T;
	for(int i = 0; i<5; i++)
	{
		double a;
		cin >> a;
	T.push_back(a);
	}

	sort(T.begin(), T.end());
	cout << "------------------------------" << endl;

	cout << T[0] <<endl;
	cout << T[1] <<endl;
	cout << T[2] <<endl;
	cout << T[3] <<endl;
	cout << T[4] <<endl;

//	for(int i ; i < T.size() ; i++)
//	{
//		cout << T[i] ;
//	}
//	cout << endl;




	return 0;
}
