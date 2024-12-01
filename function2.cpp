
# include <iostream>
using namespace std;
int add();
int main()
{
    int n1=10;
    int n2=20;
    int x=add(n1,n2);
    cout<<x<<endl;
    if(x%2==0)
    {
        cout<<"even no "<<endl;
    }
    else
    {
        cout<<"odd no"<<endl;
    }
}
int add(int a, int b)
{
    return a+b;
}
