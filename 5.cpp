#include<iostream>
#include<exception>
using namespace std;
class customexception:public exception{
	
	public:
		const char* what() const throw(){
			return "something went wrong!";
		}
};
int main(){
	try{
		throw customexception();
	}catch(const customexception& e){
		cout<<"custom exception:"<<e.what()<<endl;
	}
	catch(const exception& e){
		cout<<"public exception"<<e.what()<<endl;
	}
	return 0;
}