#include<iostream>
#include<exception>
using namespace std;
int main(){
	int n=9;
	try{
		try{
			throw n;
		}catch(int i){
			cout<<"inner exception is:"<<n<<endl;
			throw;
		}
	}catch(...){
		cout<<"outer exception"<<endl;
	}
	return 0;
}