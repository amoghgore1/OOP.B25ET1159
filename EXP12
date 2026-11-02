#include<iostream>
using namespace std;
namespace S{
template<class T>
class calculator{
    T num1,num2;
    public:
    calculator(T n1,T n2){
        num1=n1,num2=n2;
    }
    T add(){
    return num1+num2;
    }
    T sub(){
        return num1-num2;
    }
    T mul(){
        return num1*num2;
    }
    T div(){
        return num1/num2;
    }

};
}
namespace A{
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp; 
        
    }
}
int main(){
    //char a,b;
    S::calculator<double>c1(25.4,24.8);
    cout<<"addition of no.:"<<c1.add()<<endl;
    /*calculator<char>c2(a,c);
    cout<<"substraction of no.:"<<c2.sub()<<endl;
    calculator<int>c3(2,6);
    cout<<"multiplication of no.:"<<c3.mul()<<endl;
    calculator<int>c4(8,2);
    cout<<"division of no.:"<<c4.div()<<endl;*/
    int x = 536, y = 753;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    A::swap(x, y);  
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
