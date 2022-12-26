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
	int ans = 0;
	while(getline(file, s)){
		char* cstr = new char[s.length() + 1];
		strcpy(cstr, s.c_str());
		char* temp1 = strtok(cstr, ",");
		char* temp2 = strtok(0, ",");
		int a1 = atoi(strtok(temp1, "-"));
		int a2 = atoi(strtok(0, "-"));
		int b1 = atoi(strtok(temp2, "-"));
		int b2 = atoi(strtok(0, "-"));
		if(a1 >= b1 && a2 <= b2){
			ans++;
		}
		else if(a1 <= b1 && a2 >= b2){
			ans++;
		}
		else{
			continue;
		}
	}
	cout << ans << endl;
	file.close();
	return 0;
}