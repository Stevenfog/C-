#include <iostream>
using namespace std;

int main(){
	string kata;
	int i=1;
	
	while (cin>>kata){
		
		if(kata=="#"){
			break;
		}else if(kata=="HELLO"){
			cout<<"case "<<i<<" : ENGLISH \n";
		}else if(kata=="HOLA"){
			cout<<"case "<<i<<" : SPANISH \n";
		}else if(kata=="HALLO"){
			cout<<"case "<<i<<" : GERMAN \n";
		}else if(kata=="BONJOUR"){
			cout<<"case "<<i<<" : FRENCH \n";
		}else if(kata=="CIAU"){
			cout<<"case "<<i<<" : ITALIAN \n";
		}else if(kata=="ZDRAFSTVUJTE"){
			cout<<"case "<<i<<" : RUSSIAN\n";
		}else{
			cout<<"UNKNOWN \n";
		}
	i++;	
	}
	
}
