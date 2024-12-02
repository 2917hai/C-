/*
     function calling

     there are two type of function calling
     call by value and call by reference
*/
# include <iostream>
using namespace std;
void swape(int,int);
int add(int, int);
int calculateSalary(string, int);
// this is call by value

//============================================================================================================

int main()
{
    int n1,n2;
    cout<<"enter two no"<<endl;
    cin>>n1>>n2;
    swape(n1,n2);
    int sum=add(n1,n2);
    int money;
    cout<<"enter your salary"<<endl;
    cin>>money;
    int total=calculateSalary("Umesh",money);
    cout<<"your net Money is :"<<total<<endl;
    cout<<"sum of a and b is "<<sum<<endl;
    cout<<"value of n1 and n2 is :"<<n1<<"\n"<<n2;
}
//===================================================================================================

void swape(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<"\n"<<b<<endl;

}
//==================================================================================================

int add(int s, int t)
{
    return s+t;
}
// ==================================================================================================

int calculateSalary(string name, int salary)
{
    int pf=(salary*12)/100;
    int ta=(salary*10)/100;
    int totalsalary= (salary+ta)-pf;
    return totalsalary;
}
//=====================================================================================================
