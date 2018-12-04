#include <iostream>
using namespace std;

int main(){
	int baris,kolom;
	
	cin>>kolom;
	
	int angka[50][50][50];
	int sum[kolom];
	
	for(int i=0;i<kolom;i++){
		
		cin>>baris;
		
		for(int j=0;j<baris;j++){
			
			for(int k=0;k<kolom;k++){
				
				cin>>angka[i][j][k];	

			}
			sum[i]=sum[i]+(angka[i][j][0]*angka[i][j][kolom-1]);
		}
	}
	
	for(int i=0;i<kolom;i++){
		cout<<sum[i]<<endl;
	}
	
	
	return 0;
}
