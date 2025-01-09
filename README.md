# Using functions
 Tasks for C
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
}*/GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

                            Preamble

  The GNU General Public License is a free, copyleft license for
software and other kinds of works.

  The licenses for most software and other practical works are designed
to take away your freedom to share and change the works.  By contrast,
the GNU General Public License is intended to guarantee your freedom to
share and change all versions of a program--to make sure it remains free
software for all its users.  We, the Free Software Foundation, use the
GNU General Public License for most of our software; it applies also to
any other work released this way by its authors.  You can apply it to
your programs, too.

  When we speak of free software, we are referring to freedom, not
price.  Our General Public Licenses are designed to make sure that you
have the freedom to distribute copies of free software (and charge for
them if you wish), that you receive source code or can get it if you
want it, that you can change the software or use pieces of it in new
free programs, and that you know you can do these things.

  To protect your rights, we need to prevent others from denying you
these rights or asking you to surrender the rights.  Therefore, you have
certain responsibilities if you distribute copies of the software, or if
you modify it: responsibilities to respect the freedom of others.

  For example, if you distribute copies of such a program, whether
gratis or for a fee, you must pass on to the recipients the same
freedoms that you received.  You must make sure that they, too, receive
or can get the source code.  And you must show them these terms so they
know their rights.

  Developers that use the GNU GPL protect your rights with two steps:
(1) assert copyright on the software, and (2) offer you this License
giving you legal permission to copy, distribute and/or modify it.

  For the developers' and authors' protection, the GPL clearly explains
that there is no warranty for this free software.  For both users' and
authors' sake, the GPL requires that modified versions be marked as
changed, so that their problems will not be attributed erroneously to
authors of previous versions.

  Some devices are designed to deny users access to install or run
modified versions of the software inside them, although the manufacturer
can do so.  This is fundamentally incompatible with the aim of
protecting users' freedom to change the software.  The systematic
pattern of such abuse occurs in the area of products for individuals to
use, which is precisely where it is most unacceptable.  Therefore, we
have designed this version of the GPL to prohibit the practice for those
products.  If such problems arise substantially in other domains, we
stand ready to extend this provision to those domains in future versions
of the GPL, as needed to protect the freedom of users.

  Finally, every program is threatened constantly by software patents.
States should not allow patents to restrict development and use of
software on general-purpose computers, but in those that do, we wish to
avoid the special danger that patents applied to a free program could
make it effectively proprietary.  To prevent this, the GPL assures that
patents cannot be used to render the program non-free.

  The precise terms and conditions for copying, distribution and
modification follow.

                       TERMS AND CONDITIONS

  0. Definitions.

  "This License" refers to version 3 of the GNU General Public License.

  "Copyright" also means copyright-like laws that apply to other kinds of
works, such as semiconductor masks.

  "The Program" refers to any copyrightable work licensed under this
License.  Each licensee is addressed as "you".  "Licensees" and
"recipients" may be individuals or organizations.

  To "modify" a work means to copy from or adapt all or part of the work
in a fashion requiring copyright permission, other than the making of an
exact copy.  The resulting work is called a "modified version" of the
earlier work or a work "based on" the earlier work.

  A "covered work" means either the unmodified Program or a work based
on the Program.

  To "propagate" a work means to do anything with it that, without
permission, would make you directly or secondarily liable for
infringement under applicable copyright law, except executing it on a
computer or modifying a private copy.  Propagation includes copying,
distribution (with or without modification), making available to the
public, and in some countries other activities as well.

  To "convey" a work means any kind of propagation that enables other
parties to make or receive copies.  Mere interaction with a user through
a computer network, with no transfer of a copy, is not conveying.

  An interactive user interface displays "Appropriate Legal Notices"
to the extent that it includes a convenient and prominently visible
feature that (1) displays an appropriate copyright notice, and (2)
tells the user that there is no warranty for the work (except to the
extent that warranties are provided), that licensees may convey the
work under this License, and how to view a copy of this License.  If
the interface presents a list of user commands or options, such as a
menu, a prominent item in the list meets this criterion.

  1. Source Code.

  The "source code" for a work means the preferred form of the work
for making modifications to it.  "Object code" means any non-source
form of a work.

  A "Standard Interface" means an interface that either is an official
standard defined by a recognized standards body, or, in the case of
interfaces specified for a particular programming language, one that
is widely used among developers working in that language.

  The "System Libraries" of an executable work include anything, other
than the work as a whole, that (a) is included in the normal form of
packaging a Major Component, but which is not part of that Major
Component, and (b) serves only to enable use of the work with that
Major Component, or to implement a Standard Interface for which an
implementation is available to the public in source code form.  A
"Major Component", in this context, means a major essential component
(kernel, window system, and so on) of the specific operating system
(if any) on which the executable work runs, or a compiler used to
produce the work, or an object code interpreter used to run it.

  The "Corresponding Source" for a work in object code form means all
the source code needed to generate, install, and (for an executable
work) run the object code and to modify the work, including scripts to
control those activities.  However, it does not include the work's
System Libraries, or general-purpose tools or generally available free
programs which are used unmodified in performing those activities but
which are not part of the work.  For example, Corresponding Source
includes interface definition files associated with source files for
the work, and the source code for shared libraries and dynamically
linked subprograms that the work is specifically designed to require,
such as by intimate data communication or control flow between those
subprograms and other parts of the work.

  The Corresponding Source need not include anything that users
can regenerate automatically from other parts of the Corresponding
Source.

  The Corresponding Source for a work in source code form is that
same work.

  2. Basic Permissions.

  All rights granted under this License are granted for the term of
copyright on the Program, and are irrevocable provided the stated
conditions are met.  This License explicitly affirms your unlimited
permission to run the unmodified Program.  The output from running a
covered work is covered by this License only if the output, given its
content, constitutes a covered work.  This License acknowledges your
rights of fair use or other equivalent, as provided by copyright law.

  You may make, run and propagate covered works that you do not
convey, without conditions so long as your license otherwise remains
in force.  You may convey covered works to others for the sole purpose
of having them make modifications exclusively for you, or provide you
with facilities for running those works, provided that you comply with
the terms of this License in conveying all material for which you do
not control copyright.  Those thus making or running the covered works
for you must do so exclusively on your behalf, under your direction
and control, on terms that prohibit them from making any copies of
your copyrighted material outside their relationship with you.

  Conveying under any other circumstances is permitted solely under
the conditions stated below.  Sublicensing is not allowed; section 10
makes it unnecessary.

  3. Protecting Users' Legal Rights From Anti-Circumvention Law.

  No covered work shall be deemed part of an effective technological
measure under any applicable law fulfilling obligations under article
11 of the WIPO copyright treaty adopted on 20 December 1996, or
similar laws prohibiting or restricting circumvention of such
measures.

  When you convey a covered work, you waive any legal power to forbid
circumvention of technological measures to the extent such circumvention
is effected by exercising rights under this License with respect to
the covered work, and you disclaim any intention to limit operation or
modification of the work as a means of enforcing, against the work's
users, your or third parties' legal rights to forbid circumvention of
technological measures.

  4. Conveying Verbatim Copies.

  You may convey verbatim copies of the Program's source code as you
receive it, in any medium, provided that you conspicuously and
appropriately publish on each copy an appropriate copyright notice;
keep intact all notices stating that this License and any
non-permissive terms added in accord with section 7 apply to the code;
keep intact all notices of the absence of any warranty; and give all
recipients a copy of this License along with the Program.

  You may charge any price or no price for each copy that you convey,
and you may offer support or warranty protection for a fee.

  5. Conveying Modified Source Versions.

  You may convey a work based on the Program, or the modifications to
produce it from the Program, in the form of source code under the
terms of section 4, provided that you also meet all of these conditions:

    a) The work must carry prominent notices stating that you modified
    it, and giving a relevant date.

    b) The work must carry prominent notices stating that it is
    released under this License and any conditions added under section
    7.  This requirement modifies the requirement in section 4 to
    "keep intact all notices".

    c) You must license the entire work, as a whole, under this
    License to anyone who comes into possession of a copy.  This
    License will therefore apply, along with any applicable section 7
    additional terms, to the whole of the work, and all its parts,
    regardless of how they are packaged.  This License gives no
    permission to license the work in any other way, but it does not
    invalidate such permission if you have separately received it.

    d) If the work has interactive user interfaces, each must display
    Appropriate Legal Notices; however, if the Program has interactive
    interfaces that do not display Appropriate Legal Notices, your
    work need not make them do so.

  A compilation of a covered work with other separate and independent
works, which are not by their nature extensions of the covered work,
and which are not combined with it such as to form a larger program,
in or on a volume of a storage or distribution medium, is called an
"aggregate" if the compilation and its resulting copyright are not
used to limit the access or legal rights of the compilation's users
beyond what the individual works permit.  Inclusion of a covered work
in an aggregate does not cause this License to apply to the other
parts of the aggregate.

  6. Conveying Non-Source Forms.

  You may convey a covered work in object code form under the terms
of sections 4 and 5, provided that you also convey the
machine-readable Corresponding Source under the terms of this License,
in one of these ways:

    a) Convey the object code in, or embodied in, a physical product
    (including a physical distribution medium), accompanied by the
    Corresponding Source fixed on a durable physical medium
    customarily used for software interchange.

    b) Convey the object code in, or embodied in, a physical product
    (including a physical distribution medium), accompanied by a
    written offer, valid for at least three years and valid for as
    long as you offer spare parts or customer support for that product
    model, to give anyone who possesses the object code either (1) a
    copy of the Corresponding Source for all the software in the
    product that is covered by this License, on a durable physical
    medium customarily used for software interchange, for a price no
    more than your reasonable cost of physically performing this
    conveying of source, or (2) access to copy the
    Corresponding Source from a network server at no charge.

    c) Convey individual copies of the object code with a copy of the
    written offer to provide the Corresponding Source.  This
    alternative is allowed only occasionally and noncommercially, and
    only if you received the object code with such an offer, in accord
    with subsection 6b.

    d) Convey the object code by offering access from a designated
    place (gratis or for a charge), and offer equivalent access to the
    Corresponding Source in the same way through the same place at no
    further charge.  You need not require recipients to copy the
    Corresponding Source along with the object code.  If the place to
    copy the object code is a network server, the Corresponding Source
    may be on a different server (operated by you or a third party)
    that supports equivalent copying facilities, provided you maintain
    clear directions next to the object code saying where to find the
    Corresponding Source.  Regardless of what server hosts the
    Corresponding Source, you remain obligated to ensure that it is
    available for as long as needed to satisfy these requirements.

    e) Convey the object code using peer-to-peer transmission, provided
    you inform other peers where the object code and Corresponding
    Source of the work are being offered to the general public at no
    charge under subsection 6d.

  A separable portion of the object code, whose source code is excluded
from the Corresponding Source as a System Library, need not be
included in conveying the object code work.

  A "User Product" is either (1) a "consumer product", which means any
tangible personal property which is normally used for personal, family,
or household purposes, or (2) anything designed or sold for incorporation
into a dwelling.  In determining whether a product is a consumer product,
doubtful cases shall be resolved in favor of coverage.  For a particular
product received by a particular user, "normally used" refers to a
typical or common use of that class of product, regardless of the status
of the particular user or of the way in which the particular user
actually uses, or expects or is expected to use, the product.  A product
is a consumer product regardless of whether the product has substantial
commercial, industrial or non-consumer uses, unless such uses represent
the only significant mode of use of the product.

