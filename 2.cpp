#include<iostream>
#include<exception>
using namespace std;
int main(){
	cout<<"error occured"<<endl;
	struct error{
		~error(){
			cout<<"my name:"<<endl;
		}
	}error;
	try{
		cout<<"sushmanth"<<endl;
		throw runtime_error(" 19.");	
	}
	catch(const exception& e){
		cout<<"my age:"<<e.what()<<endl;
	}
}