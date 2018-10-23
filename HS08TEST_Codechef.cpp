#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int  amountToWithdraw;
    double accountBalance;
    cin>>amountToWithdraw>>accountBalance;
    if(amountToWithdraw%5!=0||amountToWithdraw>accountBalance-0.5)
    std::cout << std::fixed << std::setprecision(2) <<accountBalance;
    else
        std::cout << std::fixed << std::setprecision(2) <<accountBalance-(amountToWithdraw+0.50);
	return 0;
}

