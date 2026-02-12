
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Mark Locse
 * ID: 201942895
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NI = 8;
   float tax_rate = 15;
   float NI_contribution, tax_contribution, home_salary;
    // calculate the deductions and final take-home salary
   NI_contribution = salary-salary*((100-NI)/100);
   if ((salary-NI_contribution) > 12500) {
      tax_contribution = (salary-NI_contribution-12500)-(salary-NI_contribution-12500)*((100-tax_rate)/100);
   }
   else{
      tax_contribution = 0;
   }
   home_salary = salary - NI_contribution - tax_contribution;
    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",home_salary);


    return 0;
 }