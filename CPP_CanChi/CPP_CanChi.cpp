// CPP_CanChi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int nam;
	string Can [10] = { "Canh" , "tna" , "Nham" , "Quy" , "Giap" , "At" , "Binh" , "Dinh" , "Mau" , "Ky" , };
	string Chi[12] = { "Than" , "Dau" , "Tuat" , "Hoi" , "Ty" , "Suu" , "Dan", "Mao" , "Thin" , "Ty" , "Ngo" , "Mui" };
	cout << "Tinh nam";
	for(int i = 1990;i < 2030; i ++)
	{
		cout << "Nam" << i << " " << Can[i % 10] << Chi[i % 12] << endl;

}
	int main()
		cout << "Tinh nam!!!";
	for (int i = 1990; i < 2030; i++)
	{
		cout << "Nam" << i << " ; ";
		TinhCanChi(i);

	}
}
