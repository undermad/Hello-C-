#include <iostream>


using namespace std;

void simpleTaxCalculations();

double readNumberFromConsole(string message);

double fahrenheitToCelsius(double fahrenheits);

void fahrenheitToCelsiusProgram();


int main() {

    fahrenheitToCelsiusProgram();
    simpleTaxCalculations();
    return 0;
}

void fahrenheitToCelsiusProgram() {
    double fahrenheits = readNumberFromConsole("Enter fahrenheits to be converted:");
    cout << fahrenheitToCelsius(fahrenheits) << endl;
}

double fahrenheitToCelsius(double fahrenheits) {
    return ((fahrenheits - 32) * 5) / 9;
}

double readNumberFromConsole(string message) {
    cout << message << endl;
    double value;
    cin >> value;
    return value;
}

void simpleTaxCalculations() {
    double sales = readNumberFromConsole("Enter the tax amount:");
    const double stateTaxPercentage = readNumberFromConsole("Enter the state tax percentage:");
    const double countyTaxPercentage = readNumberFromConsole("Enter the county tax percentage:");

    double stateTax = (sales / 100) * stateTaxPercentage;
    double countyTax = (sales / 100) * countyTaxPercentage;

    cout << "Total sales: $" << sales << endl
         << "State tax: $" << stateTax << endl
         << "County tax: $" << countyTax << endl
         << "Total tax: $" << stateTax + countyTax;
}

