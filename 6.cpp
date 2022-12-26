#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define endl "\n"
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ifstream file("input");

	string in, s;
	while(getline(file, s)){
		in.append(s);
	}
	for(int i = 0;i < in.length(); i++){
		char a = s[i];
		char b = s[i + 1];
		char c = s[i + 2];
		char d = s[i + 3];
		if(a != b && a != c && a != d && b != c && b != d && c != d){
			cout << i+4 << endl;
			break;
		}
	}
	return 0;
}