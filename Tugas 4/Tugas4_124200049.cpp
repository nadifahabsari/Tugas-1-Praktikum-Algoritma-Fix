#include <iostream>
using namespace std;
int main()
{   int a, a_1, a_a, b, b_1, b_a, pilih;
	char lagi;
	
	do {cout<<"==============================="<<endl;
		cout<<" Program Perkalian dan Pangkat"<<endl;
		cout<<"==============================="<<endl;
	    cout<<"1. Perkalian"<<endl;
	    cout<<"2. Pangkat"<<endl;
	    cout<<"Pilihan : ";cin>>pilih;
	  
	    switch (pilih){
			case 1:
			cout<<"Masukkan angka 1 : ";cin>>a;
			cout<<"Masukkan angka 2 : ";cin>>b;
			if (b>=0 && a>=0) {
				cout<<b;
				b_1 = b;
				for (int i=1;i<a;i++) {
					cout<<" * "<<b;
					b_a = b_1 + b;
					b_1 = b_a;
				}
				cout<<" = "<<b_a<<endl;
			} else {
				cout<<"Hanya bisa menghitung angka positif"<<endl;
			}
			
			break;
			
			case 2:
			cout<<"Masukkan angka 1 : ";cin>>a;
			cout<<"Masukkan angka 2 : ";cin>>b;
			if (a>=0 && b>=0) {
				cout<<a;
				a_1 = a;
				for (int i=1;i<b;i++) {
					cout<<" * "<<a;
					a_a = a_1 * a;
					a_1 = a_a;
				}
				cout<<" = "<<a_a<<endl;
			} else {
				cout<<"Hanya bisa menghitung angka positif"<<endl;
			}
			break;
		}
		cout<<"Apakah anda ingin menghitung lagi (Y/T) = ";cin>>lagi;
		cout<<endl;
}		
	while (lagi == 'Y' || lagi == 'y');
	cout<<"Terimakasih telah menghitung"<<endl;

	system ("pause");
	cin.get();
	cin.get();
	return 0;
}


