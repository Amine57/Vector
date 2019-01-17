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

	for(int i=0; i < T.size() ; i++)  	cout << T[i] <<"\t";
	cout << endl;
	
	return 0;
}
