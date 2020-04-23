using namespace std;
#include<iostream>

class Uang{
	protected:
		string donatur;
	public:	
		int nilai;
		static int totalKoin;
		static int totalKertas;
		void display();
		void totalUang();
		Uang operator + (Uang koin){
			Uang uang;
			uang.nilai = nilai + koin.nilai;
			return uang;
		}
};
class Koin : public Uang{
	public:
		Koin(int n, string t);
};
class Kertas : public Uang{
	public:
		Kertas(int n, string t);
};
