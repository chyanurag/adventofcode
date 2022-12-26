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
	int size;
	vector<stack<int>> boxes;
	stack<vector<int>> insts;
	while(getline(file, s)){
		if(s[0] == '[' || s[1] != '1'){
			int j = 0;
			for(int i = 1; i < size; i+=4){
				j++;
				if(s[i] != ' '){
					cout << "boxes[" << j << "]" << " " << s[i] << endl;
				}
			}
		}
		else if(s[1] == '1'){
			size = s.length();
			cout << size << endl;
			continue;
		}
		else if(s.empty()){
			
			continue;
		}
		else{

		}
	}
	file.close();
	return 0;
}