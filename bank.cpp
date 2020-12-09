#include <iostream>
#include <fstream>
#include <string>
#include "bank.h"
Bank::Bank() {
	Name = "";
	SurName = "";
	PersonalNumber = "";
	BalanceBYN = 0.0;
	BalanceUSD = 0.0;
};

Bank::Bank(std::string fName, std::string fSurName, std::string fPersonalNumber,
	float fBalanceBYN, float fBalanceUSD) {
	Name = fName;
	SurName = fSurName;
	BalanceBYN = fBalanceBYN;
	BalanceUSD = fBalanceUSD;
	PersonalNumber = fPersonalNumber;
	//this->name=name;
};
void Bank::SetName(std::string fName) { Name = fName; }
void Bank::SetSurName(std::string fSurName) { SurName = fSurName; }
void Bank::SetBalanceBYN(float fBalanceBYN) { BalanceBYN = fBalanceBYN; }
void Bank::SetPersonalNumber(std::string fPersonalNumber) { PersonalNumber = fPersonalNumber; }
std::string Bank::GetName() { return Name; }
std::string Bank::GetSurName() { return SurName; }
float Bank::GetBalanceBYN(float) { return BalanceBYN; }
std::string Bank::GetPersonalNumber() { return PersonalNumber; }


void Bank::SetBalanceUSD(float fBalanceUSD) { BalanceUSD = fBalanceUSD; };
float Bank::GetBalanceUSD(float) { return BalanceUSD; }

void Bank::RemoveBalanceUSD(float fBalanceUSD) {
		if (fBalanceUSD < BalanceUSD) {
			std::cout << "Filmed " << fBalanceUSD<< "$" << std::endl;
			BalanceUSD -= fBalanceUSD;
		}
		else
			std::cout << "Error: insufficient funds $" << std::endl;
	}

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

void Bank::AddBalanceUSD(float fUSD) {
	BalanceUSD += fUSD;
}

void Bank::RemoveBalanceBYN(float fBalanceBYN) {
	if (fBalanceBYN < BalanceBYN) {
		std::cout << "Filmed " << fBalanceBYN << "BYN" << std::endl;
		BalanceBYN -= fBalanceBYN;
	}
	else
		std::cout << "Error: insufficient funds BYN" << std::endl;
}

void Bank::buyUSDfromBYN(float fUSD) {
	std::ifstream inputFile;
	inputFile.open("Course.txt");
	if (inputFile.is_open()) {
		//work with file
		std::string str;
		inputFile >> str;
		float usdToBYN = stof(str);
		float summToTakeOffBYN = fUSD * usdToBYN;
		if (summToTakeOffBYN <= BalanceBYN) {
			this->RemoveBalanceBYN(summToTakeOffBYN);
			this->RemoveBalanceUSD(fUSD);
		}
		else
			std::cout << "Error: insufficient funds BYN\n";
	}
	else std::cout << "Error, can't open file\n";
}