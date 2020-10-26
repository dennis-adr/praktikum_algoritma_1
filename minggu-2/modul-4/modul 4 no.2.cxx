#include <iostream>
using namespace std;
int main()
{
	float c, r, f, k;
	cout<<"PROGRAM KONVERSI DARI CELCIUS KE REAMUR, KELVIN, FAHRENHEIT\n";
	cout<<"by Dennis Bima Adriansyah 123200169\n";cout<<endl;
	cout<<"Masukkan suhu dalam celcius : ";cin>>c;
	cout<<endl;
	f= (9*c/5)+32;
	r= 4*c/5;
	k= c+273;
	cout<<"suhu dalam reamur	: "<<r<<" derajat reamur\n";
	cout<<"suhu dalam kelvin	: "<<k<<" kelvin\n";
	cout<<"suhu dalam fahrenheit	: "<<f<<" derajat fahrenheit\n";	
}
