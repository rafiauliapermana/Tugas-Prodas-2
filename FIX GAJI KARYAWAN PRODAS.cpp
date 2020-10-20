/* Program menghitung gaji karyawan */
#include <iostream>

using namespace std;

int main()
{
	char nama[10];
	char golongan;
	int jam = 0;
	int gaji, lembur, glembur;
	cout << "Masukkan Nama Karyawan        : ";
	cin >> nama;
	cout << "Masukkan Golongan [A/B/C/D]   : ";
	cin >> golongan;
	cout << "Masukkan Jumlah Jam Kerja     : ";
	cin >> jam;
	cout << " ==========================================\n";
	glembur = 4000;

	switch (golongan)
	{
	case'A':
	{
		gaji = 5000;
		break;
	}
	case 'B':
	{
		gaji = 7000;
		break;
	}
	case 'C':
	{
		gaji = 8000;
		break;
	}
	case 'D':
	{
		gaji = 10000;
		break;
	default:
		cout << "D\n" << endl;
		gaji = 0;
		lembur = 0;
	}
	}
	if (jam <= 48) {
		cout << " Nama Karyawan      : " << nama << endl;
		cout << " Total Gaji         : "  << gaji * jam<<endl;
	}
	else {
		lembur = jam - 48;
		cout << " Nama Karyawan      : " << nama << endl;
		cout << " Total Gaji         : " << 48 * gaji + lembur * glembur << endl;
	}
	cout << "|==========================================|\n";
	cout << "|  By. Rafi Aulia Permana/NIM 20051397071  |\n";
    cout << "|==============< Terimakasih >=============|\n";
	cout << "|==========================================|\n" << endl;
return 0;
}
