#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string alamat;
	string jurusan;
	
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
	 
	cout<<"Alamat  : ";
	getline (cin, alamat); 
	 
	cout<<"Jurusan : ";
	getline (cin, jurusan); 
	
	cout<<endl;
	cout<<"DATA MAHASANTRI"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Nama    : "<<nama<<endl;
	cout<<"Alamat  : "<<alamat<<endl;
	cout<<"Jurusan : "<<jurusan<<endl;

}
