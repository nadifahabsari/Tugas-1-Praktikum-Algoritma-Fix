#include <iostream>
using namespace std;
int main (){
 int i, n;
 int angka[n], selisih[n];
 int tertinggi=-100, terendah=100, selisihmax=0;
 float rata, jumlah=0;

	cout<<"Masukkan banyak angka = ";
	cin>>n;
	for(int i=0; i<n; i++){
	cout<<"Angka ke-"<<i+1<<" = ";
	cin>>angka[i];
	jumlah+=angka[i];

		if (angka[i]>tertinggi) {
			tertinggi=angka[i];
		}
		
		if (angka[i]<terendah) {
			terendah=angka[i];
		}
		
		if (i>0){
		if (angka[i]<angka[i-1]){
		selisih[i]=angka[i-1]-angka[i];
		}
		else {selisih[i]=angka[i]-angka[i-1];
		}
		if (selisih[i]>selisihmax) {
			selisihmax=selisih[i];
		}
		}
}
 rata=jumlah/n;
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

