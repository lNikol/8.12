// Лавринов Николай
//Дз - создать класс BankAccount (банковский счет) с атрибутами 
//фамилия, имя, баланс, личный номер (берется из паспорта, гугл в помощь)

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
	char buff[50]; // буфер промежуточного хранения считываемого из файла текста
	ifstream fin("Source.txt"); // открыли файл для чтения

	fin >> buff; // считали первое слово из файла
	cout << buff << endl; // напечатали это слово

	fin.getline(buff, 50); // считали строку из файла
	fin.close(); // закрываем файл
	cout << buff << endl; // напечатали эту строку


	return 0;
}