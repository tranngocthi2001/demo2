#include <iostream>

using namespace std;
int cong(int a, int b);//SV A
int tru(int a, int b);//SV B
int nhan(int a, int b);//SV C
int chia(int a, int b);//SV D
int main()
{
	int a, b;
	cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	//Cac ban code tai day
<<<<<<< HEAD
	int nhan(int a,int b){
	int tich=0;
	tich =a*b;
	return tich;
	}
	nhan(a,b);
=======
	int cong(int a, int b);//SV A
	{
		int tong=0;
		tong=a+b;
		return tong;
	}
cong(a, b);

>>>>>>> fd8bba902065590ee438f6ac8275cced346f9a4f
	cout << endl;
	system("pause");
	return 0;
}