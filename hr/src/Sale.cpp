#include "Sale.h"

Sale::Sale(string name,int level):Employee(name,level)
{

}

Sale::~Sale()
{
    //dtor
}
void Sale::AddSaleSalary(int value)
{
    this->value=this->value+value;
}
int Sale::Caculate_Salary()
{
   return level*Pre_Salary+Base_Salary+value/100;
}
