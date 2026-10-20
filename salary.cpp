//op par global standard tax rate declare karo: float tax_rate = 12.0; (12% standard corporate tax).
//      main() Function:User se Base Salary (base_salary) aur Performance Rating (1 to 5) as float input lo.Local variable banakar festival bonus rate declare karo: float bonus_rate = 15.0; (15% bonus rate).Calculations:bonus_amount $\rightarrow$ (base_salary * bonus_rate) / 100.0gross_salary $\rightarrow$ base_salary + bonus_amounttax_amount (Using ::tax_rate) $\rightarrow$ (gross_salary * ::tax_rate) / 100.0in_hand_salary $\rightarrow$ gross_salary - tax_amount




I think that that's what we should do.
#include <Iostream>
using namespace std;
float tax_rate=12.0;
int main() {
    float base_salary;
    cout<<"Base Salary : ";
    cin>> base_salary;
   float performance_rating;
    cout<<"Performance rating : ";
    cin>> performance_rating;
float bonus_rate = 15.0;
    float bonus_amount = (base_salary * bonus_rate) / 100.0;
    cout<< "Bonus amount : " <<bonus_amount<< endl;
    float gross_salary = (base_salary + bonus_amount);
cout<< "Gross salary : " <<gross_salary<< endl;
float tax_amount = (gross_salary * ::tax_rate)/100.0;   
cout << "Tax amount : " <<tax_amount<< endl;
float in_hand_salary = gross_salary - tax_amount;
cout<< "In hand Salary : " <<in_hand_salary<< endl;
return 0;


}