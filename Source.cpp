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
	int nhan(int a,int b){
	int tich=0;
	tich =a*b;
	return tich;
	}
	nhan(a,b);
	cout << endl;
	system("pause");
	return 0;
}