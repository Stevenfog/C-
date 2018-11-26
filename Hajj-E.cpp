#include <iostream>
using namespace std;
int main(){
	string a[100];
	int b=0;
	while(b!=100){
		cin>>a[b];
		if(a[b]=="*"){
			break;
		}
		b++;
	}
	for(int i=0;i<b;i++){
		if(a[i] == "Hajj" || a[i] == "hajj"){
			cout<<"Case :"<<i+1<<" Hajj-e-Akbar \n";
		}else if(a[i] == "Umrah" || a[i] == "umrah"){
			cout<<"Case :"<<i+1<< " Hajj-e-Asghar \n";
		}		
	
	}
	
	return 0;
}
