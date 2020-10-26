#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char nama[60],plug[70];
	int nim;
	cout<<"PROGRAM TABEL by Dennis Bima A 123200169\n";
	cout<<"\n";
	cout<<"Masukkan :\n";
	cout<<"Nama	: ";cin.getline(nama,sizeof(nama));
	cout<<"NIM	: ";cin>>nim;
	cout<<"Plug	: ";cin.ignore();cin.getline(plug,sizeof(plug));cout<<endl;
	cout<<endl;
	cout<<"Inilah data Anda : \n";
	cout<<"Nama	: ";cout<<nama<<endl;
	cout<<"NIM	: ";cout<<nim<<endl;
	cout<<"Plug	: ";cout<<plug<<endl;
	cout<<endl;
	cout<<"Dalam bentuk tabel:\n";
	cout<<"===============================================\n";
	cout<<"NIM"<<setw(12)<<"|"<<"	Nama"<<setw(11)<<"|"<<"	Plug"<<endl;
	cout<<"===============================================\n";
	cout<<nim<<setw(6)<<"|"<<nama<<setw(1)<<"|"<<plug<<endl;
	cout<<"-----------------------------------------------\n";
}
