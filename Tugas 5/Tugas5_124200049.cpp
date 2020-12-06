#include <iostream>
using namespace std;
int main()
{ int panjang, lebar, pilih;
  int tinggi;
		cout <<"Gambar Bangun Datar ==========="<<endl;
	    cout <<"1. Kotak Bolong"<<endl;
	    cout <<"2. Segitiga"<<endl;
	    cout <<"Pilih : "; cin>>pilih;
	    
	    switch (pilih){
			case 1:
			cout <<endl;
			cout <<"Panjang : "; cin>>panjang;
			cout <<"Lebar   : "; cin>>lebar;
			for (int i=1; i<=panjang; i++) {
				for (int j=1; j<=lebar; j++) {
					if (i==1 || i==panjang || j==1 || j==lebar) {
					cout <<"* ";
				} else {
					cout <<"  ";
				}
				}
					cout <<endl;
				}
			break;
			case 2:
			cout <<endl;
			cout << "Tinggi : "; cin>>tinggi;
			for (int a=1; a<=tinggi; a++) {
				int x = 1;
				int y = a;
				cout <<"";
				for (int b=1; b<=a; b++) {
					cout << y <<" ";
					y = y + (tinggi-x);
					x++;
				}
					cout <<"\n";
				}
					break;
				}
		return 0;
}
