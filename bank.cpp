#include <iostream>
#include "bank.h"
Bank::Bank() {
	Name = "";
	SurName = "";
	PersonalNumber = "";
	BalanceBYN = 0;
	BalanceUSD = 0;
};

Bank::Bank(std::string fName, std::string fSurName, std::string fPersonalNumber,
	unsigned int fBalanceBYN, unsigned int fBalanceUSD) {
	Name = fName;
	SurName = fSurName;
	BalanceBYN = fBalanceBYN;
	BalanceUSD = fBalanceUSD;
	PersonalNumber = fPersonalNumber;
	//this->name=name;
}
void Bank::SetName(std::string fName) { Name = fName; }
void Bank::SetSurName(std::string fSurName) { SurName = fSurName; }
void Bank::SetBalanceBYN(unsigned int fBalanceBYN) { BalanceBYN = fBalanceBYN; }
void Bank::SetPersonalNumber(std::string fPersonalNumber) { PersonalNumber = fPersonalNumber; }
std::string Bank::GetName() { return Name; }
std::string Bank::GetSurName() { return SurName; }
unsigned int Bank::GetBalanceBYN() { return BalanceBYN; }
std::string Bank::GetPersonalNumber() { return PersonalNumber; }



void Bank::SetBalanceUSD(unsigned int fBalanceUSD) { BalanceUSD = fBalanceUSD; };
unsigned int Bank::GetBalanceUSD() { return BalanceUSD; }


void Bank::print() {
	std::cout << "/////////////////////////////////////////" << std::endl << std::endl 
		<< SurName << ' ' << Name << "\n" << " PersonalNumber: " 
		<< PersonalNumber<< std::endl 
		<< " BalanceUSD: " << '$'<<BalanceUSD << std::endl 
		<< " BalanceBYN: " << BalanceBYN << std::endl 
		<< std::endl << std::endl;
}
void Bank::AddBalanceBYN(unsigned int fBYN) {
	BalanceBYN += fBYN;
}
void Bank::AddPersonalNumber(std::string fPS) {
	PersonalNumber += fPS;
}

void Bank::RemoveBalanceBYN(unsigned int RemBYN) {
	if (RemBYN < BalanceBYN) {
		BalanceBYN -= RemBYN;
	}
	else {
		std::cout << "Суммы " <<RemBYN<< " нету на счете " << SurName << ' ' << Name << std::endl;
	}
}
void Bank::AddBalanceUSD(unsigned int fUSD) {
	BalanceUSD += fUSD;
}

void Bank::RemoveBalanceUSD(unsigned int RemUSD) {
	if (RemUSD < BalanceUSD) {
		BalanceUSD -= RemUSD;
	}
	else {
		std::cout << "Суммы " << RemUSD << " нету на счете " << SurName << ' ' << Name << std::endl;
	}
}