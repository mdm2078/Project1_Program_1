// Project1_Program_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function to calculate commission rate based on sales
double calculationsCommission(double sales) {
	if (sales < 10000) return 0.05;
	else if (sales < 15000) return 0.10;
	else if (sales < 18000) return 0.12;
	else if (sales < 22000) return 0.14;
	else return 0.16;

}
 
int main() {
	double sales, advance, commissionRate, commission, finalPay;

	// Input sales and advance
	cout << "Enter the total sales: $";
	cin >> sales;
	cout << "Enter the advance taken: $";
	cin >> advance;

	// Calculate commission rate and amount
	commissionRate = calculationsCommission(sales);
	commission = sales * commissionRate;

	// Calculate final payment after deducting advance
	finalPay = commission - advance;

	// Output the results
	cout << "\nCommission Rate:" << commissionRate * 100 << "%";
	cout << "\nCommission Earned: $" << commission;

	if (finalPay >= 0) {
		cout << "\nFinal Pay after advance:$" << finalPay << endl;
	}
	else {
		cout << "\nReimbursement needed:$" << -finalPay << endl;

	}

	return 0;

}