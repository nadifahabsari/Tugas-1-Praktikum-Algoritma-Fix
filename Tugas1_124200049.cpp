#include <iostream>
using namespace std;
main ()
{	char nama[20],nim[15];
	float x,uts,uas;
	
	cout<<"Nama :";
	gets(nama);
	cout<<"NIM :";
	cin>>nim;
	cout<<endl;
	cout<<"Nilai UTS :";
	cin>>uts;
	cout<<"Nilai UAS :";
	cin>>uas;
	
	x=(uts+uas)/2;
	
	cout<<"\nSaya "<<nama<<", ";
	cout<<"NIM "<<nim;
	cout<<" mendapatkan nilai Rata Rata "<<x;
	cout<<" dari hasil nilai UTS dan nilai UAS  \n";
	return 0;
	
}
