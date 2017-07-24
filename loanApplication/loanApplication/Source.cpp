#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;

void main() {
	int mainMenu = 0;
	double presentValue = 0;
	double interestRate = 0;
	double numberOfPeriods = 0;
	double payment = 0;
	double mathLoanPaymentTop = 0;
	double mathLoanPaymentBottom = 0;
	double mathLoanPaymentBottomRight = 0;
	
	cout << "\nWhat would you like to do:\n";
	cout << "\n1. Find monthly payment";
	cout << "\n2. Loan Amount";
	cout << "\n3. Interest rate\n";
	
	cin >> mainMenu;

	switch (mainMenu) {
		default: 
			cout << "Invalid option" << endl;
		case 1: 
			cout << "\nYou chose FIND MONTHLY PAYMENT";
			cout << "\nTo find your payment, please enter the following: " << endl;
			cout << "\nPresent Value: ";
			cin >> presentValue;
			cout << "\nInterest Rate: ";
			cin >> interestRate;
			cout << "\n Number of periods: ";
			cin >> numberOfPeriods;
			
			interestRate = interestRate * 0.01;

			cout << "\n\n";
			cout << "Interest Rate: " << interestRate << endl;
			cout << "Present Value: " << presentValue << endl;
			cout << "Number of Periods: " << numberOfPeriods << endl;

			cout << "\n\n";

			//Something is wrong here. The math isn't coming out correct.
			mathLoanPaymentTop = interestRate * presentValue;
			mathLoanPaymentBottomRight = 1 + interestRate;
			mathLoanPaymentBottom = 1 * mathLoanPaymentBottomRight;
			presentValue = mathLoanPaymentTop / mathLoanPaymentBottom;
			cout << "Loan Payment Top: " << mathLoanPaymentTop << endl;
			cout << "Loan Payment Right: " << mathLoanPaymentBottomRight << endl;
			cout << "Loan Payment Bottom: " << mathLoanPaymentBottom << endl;
			//presentValue = interestRate (presentValue) / 1 - (1 + interestRate);
			
			break;
		case 2: 
			cout << "\You chose LOAN AMOUNT";
			break;
		case 3: 
			cout << "\nYou chose INTERET RATE";
			break;
	}
	cout << "\n\nEnd switch\n\n";





	system("pause");
}