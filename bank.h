#pragma once
#include <string>
class Bank {
private:
	std::string Name;
	std::string SurName;
	std::string PersonalNumber;
	unsigned int BalanceBYN;
	unsigned int BalanceUSD;
public:
	Bank();

	//Конструктор с параметарми
	Bank(std::string, std::string, std::string, unsigned int,unsigned int);
	void SetName(std::string);
	void SetSurName(std::string);
	void SetPersonalNumber(std::string);
	std::string GetName();
	std::string GetSurName();
	std::string GetPersonalNumber();
	void print();
	void AddPersonalNumber(std::string);
	

	void SetBalanceBYN(unsigned int);
	unsigned int GetBalanceBYN();
	void AddBalanceBYN(unsigned int);
	void RemoveBalanceBYN(unsigned int);


	void SetBalanceUSD(unsigned int);
	unsigned int GetBalanceUSD();
	void AddBalanceUSD(unsigned int);
	void RemoveBalanceUSD(unsigned int);

};