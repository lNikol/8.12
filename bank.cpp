#include <iostream>
#include <fstream>
#include <string>
#include "bank.h"
Bank::Bank() {
	Name = "";
	SurName = "";
	PersonalNumber = "";
	BalanceBYN = 0;
	BalanceUSD = 0;
};

Bank::Bank(std::string fName, std::string fSurName, std::string fPersonalNumber,
	float fBalanceBYN, float fBalanceUSD) {
	Name = fName;
	SurName = fSurName;
	BalanceBYN = fBalanceBYN;
	BalanceUSD = fBalanceUSD;
	PersonalNumber = fPersonalNumber;
	//this->name=name;
}
void Bank::SetName(std::string fName) { Name = fName; }
void Bank::SetSurName(std::string fSurName) { SurName = fSurName; }
void Bank::SetBalanceBYN(float fBalanceBYN) { BalanceBYN = fBalanceBYN; }
void Bank::SetPersonalNumber(std::string fPersonalNumber) { PersonalNumber = fPersonalNumber; }
std::string Bank::GetName() { return Name; }
std::string Bank::GetSurName() { return SurName; }
float Bank::GetBalanceBYN() { return BalanceBYN; }
std::string Bank::GetPersonalNumber() { return PersonalNumber; }



void Bank::SetBalanceUSD(float fBalanceUSD) { BalanceUSD = fBalanceUSD; };
float Bank::GetBalanceUSD() { return BalanceUSD; }


void Bank::print() {
	std::cout << "/////////////////////////////////////////" << std::endl << std::endl 
		<< SurName << ' ' << Name << "\n" << " PersonalNumber: " 
		<< PersonalNumber<< std::endl 
		<< " BalanceUSD: " << '$'<<BalanceUSD << std::endl 
		<< " BalanceBYN: " << BalanceBYN << std::endl 
		<< std::endl << std::endl;
}

void Bank::AddPersonalNumber(std::string fPS) {
	PersonalNumber += fPS;
}

void Bank::AddBalanceBYN(float fBYN) {
	BalanceBYN += fBYN;
}
void Bank::RemoveBalanceBYN(float RemBYN) {
	if (RemBYN < BalanceBYN) {
		BalanceBYN -= RemBYN;
	}
	else {
		std::cout << "Суммы " <<RemBYN<< " нету на счете " << SurName << ' ' << Name << std::endl;
	}
}
void Bank::AddBalanceUSD(float fUSD) {
	BalanceUSD += fUSD;
}

void Bank::RemoveBalanceUSD(float RemUSD) {
	if (RemUSD < BalanceUSD) {
		BalanceUSD -= RemUSD;
	}
	else {
		std::cout << "Суммы " << RemUSD << " нету на счете " << SurName << ' ' << Name << std::endl;
	}
}


void Bank::buyUSDfromBYN(float fUSD) {
	std::ifstream inputFile;
	inputFile.open("Course.txt");
	if (inputFile.is_open()) {
		std::string str;
		inputFile >> str;
		int USDtoBYN = stoi(str);
		int summToRemoveBYN = fUSD*USDtoBYN;
		if (summToRemoveBYN < BalanceBYN) {
			this -> RemoveBalanceUSD(summToRemoveBYN);
			this -> AddBalanceUSD(fUSD);
		}
		
	}
	else {
		std::cout << "Error, can't open file" << std::endl;
	}
}