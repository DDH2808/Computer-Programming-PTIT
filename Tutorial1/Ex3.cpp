#include <iostream>
#include <string>

using namespace std;

string to_lower(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	return s;
}

string to_upper(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32;
		}
	}
	return s;
}

int main(){
	string s;
    getline(cin, s);
	cout << to_lower(s) << endl;
	cout << to_upper(s) << endl;
}