#include <iostream>
using namespace std;
int main (){
 int i, n;
 int tertinggi, terendah, selisihmax;
 float rata, jumlah;

	cout<<"Masukkan banyak angka = ";
	cin>>n;
	
	int angka[n], selisih[n];
	for(i=0; i<n; i++){
	cout<<"Angka ke-"<<i+1<<" = ";
	cin>>angka[i];
	jumlah=jumlah+angka[i];
 }
		for(i=0; i<n-1; i++){
        selisih[i]=angka[i+1]-angka[i];
        if(selisih[i]<0){
            selisih[i]=-selisih[i];
        }
		}
			
 terendah=angka[0];
 tertinggi=angka[0];
 selisihmax=angka[0];
 rata=jumlah/n;
  for(i=0; i<n; i++) {
		if (angka[i]>tertinggi) {
			tertinggi=angka[i];
		} else if (angka[i]<terendah) {
			terendah=angka[i];
		} else {
	}
	}
	for(i=0; i<n; i++){
		if(angka[i]<angka[i-1]){
		selisih[i]=angka[i-1]-angka[i];
		}
		else {selisih[i]=angka[i]-angka[i-1];
		}
		if (selisih[i]>selisihmax) {
			selisihmax=selisih[i];
		}
		}
	cout <<endl;
	cout <<endl;
	
 cout<<"_____Hasil_____"<<endl;
 cout<<"Deret		: ";
 for(i = 0; i<n; i++) {
		cout <<angka[i]<<" ";
	}
 cout<<endl;
 cout<<"Maksimum	: "<<tertinggi<<endl;
 cout<<"Minimum		: "<<terendah<<endl;
 cout<<"Rata-rata	: "<<rata<<endl;
 cout<<"Selisih Max	: "<<selisihmax<<endl;
 return 0;
} 
