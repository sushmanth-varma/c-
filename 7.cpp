#include<iostream>
#include<exception>
using namespace std;
int main(){
	int x=10;
	try{
	if(x=10){
		throw " its true";
	}
	else{
		cout<<"false"<<endl;
	}
	}catch(const char* e){
		cout<<"error:"<<e<<endl;
	}
} 