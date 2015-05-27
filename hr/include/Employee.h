#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;
#define Pre_Salary 1000
#define Base_Salary 5000
class Employee
{
    public:
        Employee(string name,int level);
        virtual ~Employee();
        string getname()
        {
          return name;
        }
        void setlevel(int level)
        {
            this->level=level;
        }
        int Caculate_Salary();
    protected:int level;
    private:string name;
};

#endif // EMPLOYEE_H
