#include<iostream>
using namespace std;
int main(){
	int x=10;
	try{
		if(x>=10){
			throw x;
			
		}else{
			cout<<"not correct"<<endl;
		}
	}catch(int i){
		cout<<"exception"<<endl;
	}
}