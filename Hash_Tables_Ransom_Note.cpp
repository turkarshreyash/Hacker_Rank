#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

unordered_map<string,int> arr;
int main(){
	bool output = true;
	int length_of_set, length_of_sub_set;
	string temp = " ";
	cin>>length_of_set>>length_of_sub_set;
	for(int i = 0;i<length_of_set;i++){
		cin>>temp;
		if(arr.find(temp)!=arr.end()){
			arr[temp]++;
		}else{
			arr[temp] = 1;
		}
	}
	for(int i = 0;i<length_of_sub_set;i++){
		cin>>temp;
		if(!output){
			continue;
		}
		if(arr.find(temp) != arr.end()){
			arr[temp]--;
			if(arr[temp] == 0){
				arr.erase(temp);
			}
		}else{
			output = false;
		}
	}
	if(output){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	
}
