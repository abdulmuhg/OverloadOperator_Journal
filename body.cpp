#include"header.h"

void Uang::display(){
	cout<<"Rp"<<nilai;
	cout<<", Donatur : "<<donatur<<endl;
	cout<<"---------------------------+"<<endl;
}
void Uang::totalUang(){
	cout<<"==== Laporan Donasi ========"<<endl;
	cout<<"Total Donasi : "<<"Rp"<<nilai<<endl;
	cout<<"Jumlah Uang Koin : "<<totalKoin<<endl;
	cout<<"Jumlah Uang Kertas : "<<totalKertas<<endl;
	cout<<"============================"<<endl;
}
Koin::Koin(int n, string t){
	nilai = n;
	donatur = t;
	totalKoin++;
	display();
}
Kertas::Kertas(int n, string t){
	nilai = n;
	donatur = t;
	totalKertas++;
	display();
}
