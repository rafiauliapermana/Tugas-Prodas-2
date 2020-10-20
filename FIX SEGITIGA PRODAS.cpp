//* Program Menghitung Bangun Segitiga *//
/* Rafi Aulia Permana (20051397071) */
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float alas,tinggi;
	int pil;
	char ket (20);
	cout<<"Masukkan alas segitiga     : "; cin>>alas;
	cout<<"Masukkan tinggi segitiga   : "; cin>>tinggi;
	cout<<"\n";
	cout<<"Menu segitiga\n";
	cout<<"1. Hitung panjang sisi miring\n"; 
	cout<<"2. Hitung luas\n";
	cout<<"3. Hitung keliling\n";
	cout<<"4. keluar program\n\n";
	cout<<"Pilih (1/2/3/4) : \n";
	cin>>pil;
	
	switch (pil){
		case 1:
		  cout<<"Sisi miring segitiga   =  ";
		  cout<<sqrt(pow(alas,2)+pow(tinggi,2));
		case 2:
		  cout<<"\nKeliling segitiga    =  ";
		  cout<<sqrt(pow(alas,2)+pow(tinggi,2));
		case 3:
		  cout<<"\nLuas segitiga        =  ";  
		  cout<<alas*tinggi;
		case 4:
		  cout<<"\n======TERIMA KASIH======="<<endl;
		    
	}
	return 0;
}
