//* Rafi Aulia Permana *//
/* Program Menghitung Jumlah Suku Pertama */
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int a=1,b,n,i,d,p;
	int jumlah,pil;
	cout<<"Program Menghitung Jumlah Suku\n";
	cout<<"Masukkan suku pertama : ";cin>>a;
	cout<<"Masukkan indeks pangkat : ";cin>>p;
	cout<<"Masukkan banyak deret : ";cin>>b;
	cout<<"\n";
	for(a=1;a<=b;a++){
		cout<<pow(a,p)<<" ";
		jumlah=jumlah+pow(a,p);
		
	}
	cout<<"\n\n";
	cout<<"Jumlah "<<b<<" deret bilangan = ";
	cout<<jumlah<<endl;
	cout<<"\n=====TERIMA KASIH=====";
}
