#include <iostream>
using namespace std;

int main(){
int sum = 0,n,donasi;
string angka;
cin>>n;
for(int i=0;i<n;i++){
	cin>>angka;
	if (angka == "donate") {
			cin >> donasi;
			sum = sum + donasi;
	} else if (angka == "report") {
			cout << sum << endl;
	}
	
	
}

}
