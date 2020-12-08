// Лавринов Николай
//Дз - создать класс BankAccount (банковский счет) с атрибутами 
//фамилия, имя, баланс, личный номер (берется из паспорта, гугл в помощь)

#include <iostream>
#include <fstream>
#include "bank.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Bank user1("Alexandr", "Gleb", "aa1bb45",100,50);
	user1.print();
	user1.RemoveBalanceUSD(10);
	user1.print();
	user1.RemoveBalanceBYN(10);
	user1.print();
	user1.buyUSDfromBYN(1);
	user1.print();

	//Bank user2("Pavel", "Krytov", 100, "bb4kk77");
	//user2.print();
	//user2.AddBalance(3);
	//user2.RemoveBalance(99);
	//user2.AddPersonalNumber("cc34zzm75");
	//user2.print();
	
	return 0;
}