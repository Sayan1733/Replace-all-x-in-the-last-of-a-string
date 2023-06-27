#include<iostream>
using namespace std;
string xinthelast(string s){
	if(s.length()==0){		//Base case
		return "";
	}
	
	char x=s[0];
	string ans=xinthelast(s.substr(1));		//Recursion
	if(x=='x' || x=='X'){
		return ans+x;
	}
	else{
		return x+ans;
	}
}
int main(){
	string x;
	cout<<"Enter the string:";
	cin>>x;
	
	cout<<"After arranging:"<<xinthelast(x);
	
	return 0;
	
}
