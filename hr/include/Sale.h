#ifndef SALE_H
#define SALE_H
using namespace std;
#include"Employee.h"
class Sale:public Employee
{
    public:
        Sale(string name,int level);
        virtual ~Sale();
        void AddSaleSalary(int value);
        int Caculate_Salary();
    protected:
    private:int value=0;
};

#endif // SALE_H
