/*#include <stdio.h>

void SalePrice() {
    double originalPrice = 200000;
    double discountPercentage = 0.10;
    double salePrice = originalPrice - (originalPrice * discountPercentage);

    printf("The total sale price is UGX %.2lf\n", salePrice);
}

int main() {
    SalePrice();
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

void SalaryAfterTax(){
    double OriginalSalary = 5000000;
    double TaxRate = 0.15;
    double SalaryAfterTax = OriginalSalary - (OriginalSalary * TaxRate);

    printf("The Salary After Tax is UGX %.2lf\n", SalaryAfterTax);
}

int main() {
    SalaryAfterTax();
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

void GrossProfit(){
    double SalesRevenue = 15000000;
    double COGS = 9000000;
    double GrossProfit = SalesRevenue - COGS;

    printf("The Gross Profit is UGX %.2lf\n", GrossProfit);
}

int main() {
    GrossProfit();
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

void ROI(){
    double Investment = 10000000;
    double Profit = 12000000;
    double ROI = (Investment/Profit) * 100;

    printf("The ROI is UGX %.2lf\n", ROI);
}

int main() {
    ROI();
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MonthlyLoanPayment(){
    double loan  = 50000000;
    double annual_interest_rate = 12000000;
    double rate  = 0.5;
    double n = 12;
    double MonthlyLoanPayment = (loan * rate * pow(1 + rate, n)) / (pow(1 + rate, n) - 1);
    printf("The Monthly Loan Payment is UGX %.2lf\n", MonthlyLoanPayment);
}

int main() {
    MonthlyLoanPayment();
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SimpleInterest(){
    double loan  = 2000000;
    double annual_interest_rate = 0.06;
    double time  = 3;
    double SimpleInterest= (loan * annual_interest_rate * time)/100;
    printf("The Simple Interest is UGX %.2lf\n", SimpleInterest);
}

int main() {
    SimpleInterest();
    return 0;
}*/

/*#include <stdio.h>


void Break_even_point(){
    double FixedCosts  = 10000000;
    double Price_per_Unit = 100000;
    double Variable_Costs_per_Unit  = 50000;
    double Break_even_point = FixedCosts / (Price_per_Unit - Variable_Costs_per_Unit);
    printf("The Break_even_point is UGX %.2lf\n", Break_even_point);
}

int main() {
    Break_even_point();
    return 0;
}*/

/*#include <stdio.h>


void FlatInterest(){
    double investment_amount  = 1000000;
    double time = 2;
    double rate  = 0.04;
    double FlatInterest = investment_amount * time * rate;
    printf("The Flat Interest is UGX %.2lf\n", FlatInterest);
}

int main() {
    FlatInterest();
    return 0;
}*/

/*#include <stdio.h>


void ProfitMargin(){
    double Profit  = 30000000;
    double SalesRevenue = 9000000;
    double ProfitMargin = (Profit / SalesRevenue) * 100;
    printf("The Profit Margin is UGX %.2lf\n", ProfitMargin);
}

int main() {
    ProfitMargin();
    return 0;
}*/

/*#include <stdio.h>


void AnnualDepreciation(){
    double Cost  = 10000000;
    double ResidualValue = 2000000;
    double UsefulLife = 5;
    double AnnualDepreciation = (Cost - ResidualValue)/ UsefulLife;
    printf("The AnnualDepreciation is UGX %.2lf\n", AnnualDepreciation);
}

int main() {
    AnnualDepreciation();
    return 0;
}*/
