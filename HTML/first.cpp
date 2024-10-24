#include<iostream>
using namespace std;

class A
{
    protected:
int a,b,c;
public :
A(int m,int n)
{
    a=m;
    b=n;
}
void calsum()
{
    c=a+b;
    cout<< "\n\t The sum is:" <<c;
}
};
class B:public A
{
public:
B(int m,int n):A(m,n)
{


}
void calminus()
{
    c=a-b;
    cout<<"\n\t The minus is :" << c
}
};
int main()
{
    B.y(55,44);
    y.calsum();
    y.calminus();
    return0;
    
}