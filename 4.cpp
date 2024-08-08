#include<iostream>
#include<exception>
using namespace std;
int main(){
	int a;
	cout<<"enter:"<<endl;
	cin>>a;
	try{
		if(a==1){
			throw a;
		}
		else if(a==2){
			throw 'A';
		}else if(a==3){
			throw 4.5;
		}
		else{
			throw a;
		}
			}
			catch(int a){
		cout<<"int exception"<<endl;
		}catch(char ch){
			cout<<"char excception"<<endl;
		}
		catch(float n){
			cout<<"float exception"<<endl;
		}
		catch(int i){
			cout<<"int exception"<<endl;
		                      
			 }
}
		