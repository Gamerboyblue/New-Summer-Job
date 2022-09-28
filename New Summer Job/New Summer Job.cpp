// Nathan Gleesing
// Date: 9/12/2022
// Program Title: Collecting and Displaying Wage and Spending Data
// Program Description: User inputs information on their workweek and where they wish to allocate their wages, and the program calculates the user's wages and remaining funds, as well as displays all the information.

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

// Named constants

const float TAX = 0.15;

int main()
{

	// Variable declaration

	string name;
	double payrate;
	int hours_worked;
	double shopping;
	double entertainment;
	double savings;
	double remainder;
	double wages;
	double taxes;
	double final_shopping;
	double final_entertainment;
	double final_savings;
	double percentage;
	

	//Program title and description for the user

	cout << "Program Title: Collecting and Displaying Wage and Spending Data" << endl;
	cout << "Program Description: User inputs information on their workweek and where they wish to allocate their wages, and the program calculates the user's wages and remaining funds, as well as displays all the information." << endl;
	cout << endl;

	// User input

	cout << "Please input your full name." << endl;
	getline(cin,name);
	cout << endl;

	cout << "Please input your hourly payrate." << endl;
	cin >> payrate;
	cout << endl;

	cout << "Please input how many hours you worked." << endl;
	cin >> hours_worked;
	cout << endl;



	// Calculating wages and taxes
	wages = payrate * hours_worked;
	taxes = wages * TAX;
	percentage = 100 - (wages / taxes);

	// Continuing user input

	cout << "Your wages and the amount you spend on taxes has already been calculated." << endl;
	cout << "Percentage of wages remaining: " << percentage << "%" << endl;
	cout << "What percentage of your earnings would you like to allocate to shopping?(Input percentage with no percentage sign)" << endl;
	cin >> shopping;
	cout << endl;

	percentage = percentage - shopping;
	cout << "Percentage of wages remaining: " << percentage << "%" << endl;
	cout << "What percentage of your earnings would you like to allocate to entertainment?(Input percentage with no percentage sign)" << endl;
	cin >> entertainment;
	cout << endl;

	percentage = percentage - entertainment;
	cout << "Percentage of wages remaining: " << percentage << "%" << endl;
	cout << "What percentage of your earnings would you like to allocate to savings?(Input percentage with no percentage sign)" << endl;
	cin >> savings;
	cout << endl;
	

	// Calculations

	final_shopping = (shopping / 100) * wages;
	final_entertainment = (entertainment / 100) * wages;
	final_savings = (savings / 100) * wages;
	remainder = wages - taxes - final_shopping - final_entertainment - final_savings;

	// Output to the screen

	system("cls");

	cout << fixed << setprecision(2);

	cout << left << "Name:          " << name << endl;
	cout << left << "Wages:          $" << right << setw(7) << wages << endl;
	cout << left << "Taxes:          $" << right << setw(7) << taxes << endl;
	cout << left << "Shopping:       $" << right << setw(7) << final_shopping << endl;
	cout << left << "Entertainment:  $" << right << setw(7) << final_entertainment << endl;
	cout << left << "Savings:        $" << right << setw(7) << final_savings << endl;
	cout << left << "Remainder:      $" << right << setw(7) << remainder << endl;

	return 0;
}