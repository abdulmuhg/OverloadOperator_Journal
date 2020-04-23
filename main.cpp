#include"header.h"

int Uang::totalKoin = 0;
int Uang::totalKertas = 0;

int main(int argc, char** argv) {
	Uang uang;
	uang.nilai = 0;
	uang.totalUang();
	Koin andi(500, "Andi");
	Koin joko(200, "Joko");
	Kertas budi(2000, "Budi");
	Kertas ilham(5000, "Ilham");
	Kertas bmbank(10000, "bmbank");
	
	uang = andi+joko+budi+ilham+bmbank;
	uang.totalUang();
}
