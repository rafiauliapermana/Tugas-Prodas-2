//* Rafi Aulia Permana *//
/* Program Menghitung jumlah deret */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a=a,b=b,n;
	for(a=a;a<=b;a++)
	cout << "Program Menghitung Jumlah Deret\n";
	cout << "Masukkan Jumlah deret : ";
	int jml_drt = 0, f_suku = 0, drt = 0;
	cin >> jml_drt;
	cout << "Masukkan Suku pertama : ";
	cin >> f_suku;
	cout << "Masukkan Nilai beda : ";
	cin >> b;
	
	drt = f_suku;
	cout<<f_suku<<" ";
	
	for(int i=0;i<(jml_drt-1);i++)
	{
		/*drt=(i * 2 - 1) * (i * 2 - 1);
		printf(" %d ", drt);*/
		f_suku += b; 
		drt += f_suku;
		cout << f_suku << " ";
    }
    
    cout << "\n" <<drt<<endl;
    cout<<"\n||=====TERIMA KASIH=====||";
getch();
}



