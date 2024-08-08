#include<iostream>
#include<exception>
using namespace std;
int main()
{
	int divided=0;
	int divisor=0;
	try{
		if(divisor==0){
		throw runtime_error("zero");
	}
	int result;
	result=divided/divisor;
	cout<<result<<endl;
}
	catch(const exception& e){
		cout<<"error:"<<e.what()<<endl;
	}
}