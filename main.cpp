#include <iostream>

using namespace std;

int main() {

    double sales = 95000;
    int stateTaxPercentage = 4;
    int countyTaxPercentage = 2;

    double stateTax = (sales / 100) * stateTaxPercentage;
    double countyTax = (sales / 100) * countyTaxPercentage;

    cout << "Total sales: $" << sales << endl
            << "State tax: $" << stateTax << endl
            << "County tax: $" << countyTax << endl
            << "Total tax: $" << stateTax + countyTax;


    return 0;
}