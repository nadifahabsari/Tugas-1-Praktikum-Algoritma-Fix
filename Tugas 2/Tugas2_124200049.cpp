#include <iostream>
using namespace std;
int main ()
{ cout<<"====================================="<<endl;
  cout<<endl;
  cout<<"   PROGRAM STATEMENT PENGENDALIAN\n  "<<endl;
  cout<<"====================================="<<endl;
  int umura,umurb,umura1,umura2;
  int beban1,beban2,beban3,beban4;
  int biaya;
  
  cout<<"Umur Ayah	: ";cin>>umura;
  cout<<"Umur Ibu	: ";cin>>umurb;
  cout<<"Umur Anak 1	: ";cin>>umura1;
  cout<<"Umur Anak 2	: ";cin>>umura2;
  cout<<endl;
  
  if (umura <= 12){
	beban1=15000;
  } else if (umura > 12 && umura <= 20){
	beban1=20000;
  } else if (umura > 20){
	beban1=30000;
  }
	
	if (umurb <= 12){
	beban2=15000;
  } else if (umurb > 12 && umurb <= 20){
	beban2=20000;
  } else if (umurb > 20){
	beban2=30000;
  }
	
	if (umura1 <= 12){
	beban3=15000;
  } else if (umura1 > 12 && umura1 <= 20){
	beban3=20000;
  } else if (umura1 > 20){
	beban3=30000;
  }
	
	if (umura2 <= 12){
	beban4=15000;
  } else if (umura2 > 12 && umura2 <= 20){
	beban4=20000;
  } else if (umura2 > 20){
	beban4=30000;
  }

  biaya=(beban4+beban3+beban2+beban1)*30;
  
  cout<<"Maka bantuan yang diberikan oleh pemerintah adalah Rp."<<biaya;
	return 0;
}
	
