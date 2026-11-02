#include<iostream>
using namespace std;
class basic_info{
    protected:
    string name;
    int age;
    public:
    void accept(){
        cout<<"enter the name and age of employee:"<<endl;
        cin>>name;
        cin>>age;
    }
    void display(){
        cout<<"\n name of employee:"<<name<<endl<<"age of employee:"<<age;
    }
};
class dept_info{
    protected:
    string deptName;
    string natureOFwork;
    public:
    void accept1(){
        cout<<"enter the name of department and nature of work: "<<endl;
        cin>>deptName;
        cin>>natureOFwork;
    }
    void display1(){
        cout<<"the name of department is "<<deptName<<"and nature of work is:"<<natureOFwork<<endl;
    }
};
class employee : public basic_info,public dept_info{
    protected:
    int employee_id;
    double salary;
    public:
   
    void accept2(){
    accept();
    accept1();
    cout<<"enter the employee id and salary: "<<endl;
        cin>>employee_id;
        cin>>salary;
    }
    void display2(){
        display();
        display1();
        cout<<"\nthe employee_id is "<<employee_id<<"\nand salary is:"<<salary<<endl;
    }
};
int main(){
   employee e;  
    e.accept2();  
    e.display2();
    return 0;
}
