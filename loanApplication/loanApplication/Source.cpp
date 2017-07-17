#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void main() {
	double requestedAmount = 0;
	int loanLength = 0;
	char vechileStatus;
	int vechileYear = 0;
	double interestRate = 0;
	double downPayment = 0;
	double tradeInValue = 0;
	string tradeInCar;

	cout << "\nWhat is the requested loan amount?";
	cin >> requestedAmount;
	cout << "\nFor how long? (Months)";
	cin >> loanLength;
	cout << "\nIs this a new ore used vechile? (N = New /U = Used)";
	cin >> vechileStatus;
	cout << "\nWhat is the vechile year? ";
	cin >> vechileYear;
	cout << "\nInterest Rate? ";
	cin >> interestRate;
	cout << "\nDown Payment? ";
	cin >> downPayment;
	cout << "\nTrade-In Value: ";
	cin >> tradeInValue;
	cout << "\nTrade-In Vechile Info (Year, Make, Model): ";
	cin >> tradeInCar;



	system("pause");
}