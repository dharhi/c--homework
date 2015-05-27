#include "Employee.h"

Employee::Employee(string name,int level)
{
   this->name=name,this->level=level; //ctor
}

Employee::~Employee()
{
    //dtor
}
int Employee::Caculate_Salary()
{
    return level*Pre_Salary+Base_Salary;
}
