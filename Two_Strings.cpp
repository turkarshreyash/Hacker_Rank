#include<iostream>
#include<string>
using namespace std;
bool sub_string(string a,string b){
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for(char c  : alphabet){
		if((a.find(c)!=string::npos )&&(b.find(c)!=string::npos)){
			return true;
		}
	}
	return false;
}

int main(){
	string a;
	string b;
	int n;
	cin>>n;
	while(n--){
		cin>>a>>b;
		if(sub_string(a,b)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
	}
		
	}
	
	
}
