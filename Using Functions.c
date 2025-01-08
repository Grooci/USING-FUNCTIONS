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

/*#include <stdio.h>

double DiscountedPrice(double price, double discountPercentage) {
    return price - (price * discountPercentage / 100);
}

void printDiscountedPrice(double price, double discountPercentage) {
    double discountedPrice = DiscountedPrice(price, discountPercentage);
    printf("The discounted price is UGX %.2lf\n", discountedPrice);
}

int main() {
    double price;
    printf("Enter the price");
    scanf("%lf", &price);
    double discountPercentage;
    printf("Enter the discountPercentage");
    scanf("%lf", &discountPercentage);
    printDiscountedPrice(price, discountPercentage);
    return 0;
}*/

/*#include <stdio.h>

void printTaxAmount(double price, double TaxRate) {
    double TaxAmount = price * (TaxRate / 100);
    printf("The tax amount is UGX %.2lf\n", TaxAmount);
}

int main() {
    double price;
     printf("Enter the price");
    scanf("%lf", &price);
    double TaxRate;
    printf("Enter the Tax Rate");
    scanf("%lf", &TaxRate);
    printTaxAmount(price, TaxRate);
    return 0;
}*/

/*#include <stdio.h>

void total_salary(double base_salary, double bonus_percentage) {
    double total_salary = base_salary + (base_salary * bonus_percentage / 100);
    printf("Total salary including bonus: %.2f\n", total_salary);
}

int main() {
    double base_salary;
    printf("Enter the base salary");
    scanf("%lf", &base_salary);
    double bonus_percentage;
    printf("Enter the bonus percentage");
    scanf("%lf", &bonus_percentage);
    total_salary(base_salary, bonus_percentage);
    return 0;
}*/

/*#include <stdio.h>

void profit_or_loss(double selling_price, double cost_price) {
    if (selling_price > cost_price) {
        printf("Profit\n");
    } else if (selling_price < cost_price) {
        printf("Loss\n");
    } else {
        printf("No Profit, No Loss\n");
    }
}

int main() {
    double selling_price;
    printf("Enter the selling price");
    scanf("%lf", &selling_price);
    double cost_price;
    printf("Enter the cost price");
    scanf("%lf", &cost_price);
    profit_or_loss(selling_price, cost_price);
    return 0;
}*/

/*#include <stdio.h>

void discounted_price(double original_price, double discount_percentage){
    if (discount_percentage > 20){
        double discounted_price = original_price - (original_price * discount_percentage / 100);
        printf("Discounted price: %.2f\n", discounted_price);
    }
}

int main() {
    double original_price;
    printf("Enter the original price");
    scanf("%lf", &original_price);
    double discount_percentage;
    printf("Enter the discount percentage");
    scanf("%lf", &discount_percentage);
    discounted_price(original_price, discount_percentage);
    return 0;
}*/

/*#include <stdio.h>
#include <math.h>

double years_to_double(double initial_investment, double annual_rate_of_return) {
    return log(2) / log(1 + annual_rate_of_return / 100);
}

int main() {
    double initial_investment = 7000;
    double annual_rate_of_return = 3;

    double years = years_to_double(initial_investment, annual_rate_of_return);
    printf("It will take %.2lf years to double the investment.\n", years);

    return 0;
}*/

/*#include <stdio.h>

void total_expenses(int num_items, double prices[]) {
    double total_expenses = 0;
    for (int i = 0; i < num_items; i++) {
        total_expenses += prices[i];
    }

    printf("Total expenses of the company is %.2f\n", total_expenses);
}

int main() {
    int num_items = 5;
    double prices[] = {100.5, 250.75, 300.0, 150.25, 90.0};
    total_expenses(num_items, prices);

    return 0;

}*/

/*#include <stdio.h>

void tax_rate(double salary) {
    if (salary < 3000000) {
        printf("10%%\n");
    } else if (3000000 <= salary && salary <= 7000000) {
        printf("15%%\n");
    } else if(salary > 7000000){
        printf("20%%\n");
    }
}

int main() {
    double salary;
    printf("Enter the salary");
    scanf("%lf", &salary);
    tax_rate(salary);
    return 0;
}*/

/*#include <stdio.h>

void total_overdue_fee(double number_of_days_overdue, double daily_overdue_fee) {
    double total_overdue_fee = number_of_days_overdue * daily_overdue_fee;
    printf("Total overdue fee is %.2lf\n", total_overdue_fee);
}

int main() {
    double number_of_days_overdue;
    printf("Enter the number of days overdue");
    scanf("%lf", &number_of_days_overdue);
    double daily_overdue_fee;
    printf("Enter the daily overdue fee");
    scanf("%lf", &daily_overdue_fee);
    total_overdue_fee(number_of_days_overdue, daily_overdue_fee);
    return 0;
}*/

/*#include <stdio.h>

void maximum_discount(double original_price, double discount_percentage) {
    double maximum_discount = original_price * discount_percentage;
    printf("Maximum discount is %.2lf\n", maximum_discount);
}

int main() {
    double original_price;
    printf("Enter the original price");
    scanf("%lf", &original_price);
    double discount_percentage;
    printf("Enter the discount percentage");
    scanf("%lf", &discount_percentage);
    maximum_discount(original_price, discount_percentage);
    return 0;
}*/


