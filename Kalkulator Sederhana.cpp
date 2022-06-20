//library dari c++
#include <iostream>
using namespace std;

//melakukan inisialisasi variabel
int angka1, angka2, hasil;

//function main
int main (){
	
		//membuat output kalkulator
	    cout<<"KALKULATOR SEDERHANA"<<endl;
	    
	    //membuat inputan angka pertama
		cout<<"Angka Pertama : ";
		cin>>angka1;
		
		//membuat inputan angka kedua
		cout<<"Angka Kedua : ";
		cin>>angka2;
		
		//menjumlah input dan angka2, kemudian disimpan dalam variabel hasil
		hasil = angka1 + angka2;
		
		//menampilkan output hasil
		cout<<"Hasilnya adalah : "<<hasil<<endl;
		
		
}
