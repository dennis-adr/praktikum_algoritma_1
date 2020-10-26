#include <iostream>
#define phi 3.14
using namespace std;
int main()

{
	float r, s, luas_alas, luas_selimut, luas_permukaan ;
	cout<<"PROGRAM MENGHITUNG LUAS PERMUKAAN KERUCUT by Dennis Bima A 123200169\n";
	cout<<"masukkan nilai jari-jari alas = ";cin>>r;
	cout<<"masukkan nilai garis pelukis = ";cin>>s;
	luas_alas=r*r*phi;
	luas_selimut = phi*r*s;
	luas_permukaan=luas_alas+luas_selimut;
	cout<<endl;
	cout<<endl;
	cout<<"Luas Permukaan = ";cout<<luas_permukaan<<endl;
}
