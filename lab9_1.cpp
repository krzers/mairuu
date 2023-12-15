#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,percent,amount,prev,total,newbalance;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> percent;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	int i=1;
	while(loan>0 and i>=1){
	newbalance = loan+((loan*percent)/100)-amount;
	prev = (loan*percent/100);
	total = loan+prev;

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << prev;
	cout << setw(13) << left << total;
	if (total < amount){
		amount = total;
	    newbalance=0;
	}
	cout << setw(13) << left << amount;
	cout << setw(13) << left << newbalance;
	cout << "\n";	

	loan = newbalance;
	i++;
	
	}
	return 0;
	
}
