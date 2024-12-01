# include <iostream>
using namespace std;
int add();
int main()
{
    int x=add();
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
int add()
{
    int a,b;
    cout<<"enter two no "<<endl;
    cin>>a>>b;
    return a+b;
}
