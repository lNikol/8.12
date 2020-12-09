#pragma once
#include <string>
class Bank {
private:
	std::string Name;
	std::string SurName;
	std::string PersonalNumber;
	float BalanceBYN;
	float BalanceUSD;
public:
	Bank();

	//Конструктор с параметарми
	Bank(std::string, std::string, std::string, float, float);
	void SetName(std::string);
	void SetSurName(std::string);
	void SetPersonalNumber(std::string);
	std::string GetName();
	std::string GetSurName();
	std::string GetPersonalNumber();
	void print();
	void AddPersonalNumber(std::string);
	

	void SetBalanceBYN(float);
	float GetBalanceBYN(float);
	void AddBalanceBYN(float);
	void RemoveBalanceBYN(float);


	void SetBalanceUSD(float);
	float GetBalanceUSD(float);
	void AddBalanceUSD(float);
	void RemoveBalanceUSD(float);
	void buyUSDfromBYN(float);
};