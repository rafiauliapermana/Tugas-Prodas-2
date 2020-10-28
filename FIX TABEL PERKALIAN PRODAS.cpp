#include <iostream>

using namespace std;
int main()
{
	cout<<"Program Tabel Perkalian\n";
	for (int i=0; i<=10;i++)
	{
		if (i > 0) {
			cout<<i<<"\t";
	    }
	    for (int j=1;j<=10;j++)
	    {
	    	if (i==0) {
	    		if(j==1) {
	    			cout<<"\t1"<<"\t";
				}
				else {
					cout<<j<<"\t";
				}
			}
			else {
				cout<<i*j<<""<<"\t";
			}
		}
		cout<<"\n"<<endl;
	}
		cout<<"\n||=====TERIMA KASIH=====||";
}
