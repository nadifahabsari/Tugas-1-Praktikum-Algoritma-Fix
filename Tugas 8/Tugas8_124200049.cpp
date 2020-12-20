#include <iostream>
using namespace std;

void Luas();
int Keliling(int jarijari);
void Volume(int jarijari);
float phi=3.14;

int main() {
int pilih;
char lagi;
	
	do { cout <<"Hitung Lingkaran ==========\n";
	cout <<"1. Luas Lingkaran\n";
	cout <<"2. Keliling Lingkaran\n";
	cout <<"3. Volume Tabung\n";
	cout <<"Pilih : "; cin >>pilih;	
	
	if (pilih==1) {
		 Luas();
	} else if (pilih==2) {
		Keliling (0);
	} else if (pilih==3) {
		Volume (0);
	} else {
		cout <<"Input salah :)" <<endl;
	}
	cout <<"Ulangi program? (y/n) "; cin >>lagi;
	cout <<endl;
	}
	
	while (lagi == 'Y' || lagi == 'y');
	cout <<"Program selesai, Terima kasih :)" <<endl;
	
	system("pause");
	return 0;
}

void Luas() {
	int jarijari;
	float luas;
	cout <<"Jari - jari\t: "; cin >>jarijari;
	
	luas=phi*jarijari*jarijari;
	
	cout <<"Luas Lingkaran adalah " <<luas <<endl;
}

int Keliling(int jarijari) {
	float keliling;
	cout <<"Jari - jari\t: "; cin >>jarijari;
	
	keliling=2*phi*jarijari;
	
	cout <<"Keliling Lingkaran adalah " <<keliling <<endl;
	return (keliling);		
}

void Volume(int jarijari) {
	int tinggi;
	float volume;
	cout <<"Jari - jari\t: "; cin >>jarijari;
	cout <<"Tinggi\t\t: "; cin >>tinggi;
	
	volume=phi*jarijari*jarijari*tinggi;
	
	cout <<"Volume Tabung adalah " <<volume <<endl;	
}
