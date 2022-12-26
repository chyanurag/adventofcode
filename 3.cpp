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
	string s;
	int total = 0;
	while(getline(file, s)){
		set<char> s1(s.begin(), s.begin()+(s.length()/2));
		set<char> s2(s.begin() + s.length() / 2, s.end());
		for(char c : s1){
			for(char d : s2){
				if(c == d){
					if(c >= 65 && c <= 90){
						total += c - 38;
						continue;
					}
					else{
						total += c - 96;
						continue;
					}
				}
			}
		}	
	}
	cout << total << endl;
	file.close();
	return 0;
}