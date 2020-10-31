#include <iostream>
using namespace std;
main ()
{ string uname,pass;
  int nilai,harian,uts,uas,pilih;
  
  cout<<"======Login Akun======"<<endl;
  cout<<"Username	: ";cin>>uname;
  cout<<"Password	: ";cin>>pass;
  cout<<endl;
  
  if (uname!="nadifahabsari" && pass!="130613") {
			cout<<"Useername dan password anda salah!"<<endl;
	} else if (uname!="nadifahabsari" && pass=="130613"){
			cout<<"Username anda salah!"<<endl;
	} else if (uname=="nadifahabsari"&& pass!="130613"){
			cout<<"Password anda salah!"<<endl;
	} else if (uname=="nadifahabsari" && pass=="130613"){
			cout<<"Login Berhasil!"<<endl;
			cout<<endl;
			cout<<"Input Nilai Mata Kuliah"<<endl;
			cout<<"1. Algoritma dan Pemrograman"<<endl;
			cout<<"2. Kalkulus"<<endl;
			cout<<"Piihan : ";cin>>pilih;
			cout<<endl;
			if (pilih==1){
				cout<<"Nilai Harian = ";cin>>harian;
				cout<<"Nilai UTS = ";cin>>uts;
				cout<<"Nilai UAS = ";cin>>uas;
				nilai=(harian+uts+uas)/3;
				cout<<endl;
			if (nilai>=80){
				cout<<"Selamat! Anda lulus Algoritma dan Pemrograman dengan nilai "<<nilai<<endl;
			} else{
				cout<<"Maaf, anda tidak lulus Algoritma dan Pemrograman dengan nilai "<<nilai<<endl;
				}
			} else if (pilih==2){
				cout<<"Nilai Harian = ";cin>>harian;
				cout<<"Nilai UTS = ";cin>>uts;
				cout<<"Nilai UAS = ";cin>>uas;
				nilai=(harian+uts+uas)/3;
				cout<<endl;
			if (nilai>=80){
				cout<<"Selamat! Anda lulus Kalkulus dengan nilai "<<nilai<<endl;
			} else {
				cout<<"Maaf, anda tidak lulus Kalkulus dengan niai "<<nilai<<endl;
				}
			} if (pilih>=3){
				cout<<"Maaf, input anda salah!"<<endl;
			}
			
  return 0;


}
}
