// �������� �������
//�� - ������� ����� BankAccount (���������� ����) � ���������� 
//�������, ���, ������, ������ ����� (������� �� ��������, ���� � ������)

#include <iostream>
#include <fstream>
#include "bank.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Bank user1("Alexandr", "Gleb", "aa1bb45",0,0);
	user1.print();
	user1.AddBalanceUSD(3);
	user1.AddBalanceBYN(10);
	user1.print();

	//Bank user2("Pavel", "Krytov", 100, "bb4kk77");
	//user2.print();
	//user2.AddBalance(3);
	//user2.RemoveBalance(99);
	//user2.AddPersonalNumber("cc34zzm75");
	//user2.print();
	char buff[50]; // ����� �������������� �������� ������������ �� ����� ������
	ifstream fin("Source.txt"); // ������� ���� ��� ������

	fin >> buff; // ������� ������ ����� �� �����
	cout << buff << endl; // ���������� ��� �����

	fin.getline(buff, 50); // ������� ������ �� �����
	fin.close(); // ��������� ����
	cout << buff << endl; // ���������� ��� ������


	return 0;
}