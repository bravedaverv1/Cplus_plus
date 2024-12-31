#include <iostream>

// Exercise:
// Sales = 95,000
// Sales Tax = 4%
// County Tax = 2%

using namespace std;

int main(){
    double sales = 95000.;
    double sales_tax = 0.04;
    double county_tax = 0.02;

    double sales_tax_fee = sales * sales_tax;
    double county_tax_fee = sales * county_tax;
    cout    << "Sales Tax Fee - " << sales_tax_fee << endl
            << "Count Tax Fee - " << county_tax_fee << endl
            << "Total Owed Combined - " << sales_tax_fee + county_tax_fee << endl;
    return 0;
}