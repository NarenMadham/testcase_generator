#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n & 1) cout << "EVEN" << endl;
		else cout << "ODD" << endl;
	}

	return 0;
}

