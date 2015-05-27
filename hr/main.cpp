#include <iostream>

using namespace std;
#include"Employee.h"
#include"Sale.h"
int main()
{
    Employee andy("Andy",4);
    cout<<andy.getname()<<":$"<<andy.Caculate_Salary()<<endl;

    Employee bill("Bill",4);
    cout<<bill.getname()<<":$"<<bill.Caculate_Salary()<<endl;
    bill.setlevel(8);
    cout<<bill.getname()<<":$"<<bill.Caculate_Salary()<<endl;

    Sale cook("Cook",7);
    cook.AddSaleSalary(1000000);
    cook.AddSaleSalary(2000000);
    cout<<cook.getname()<<":$"<<cook.Caculate_Salary()<<endl;
    return 0;
}
