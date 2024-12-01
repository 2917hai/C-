#include <iostream>
using namespace std;
int main()
{

    int no1, no2,no3;
    cout<<"enter three value"<<endl;
    cin>>no1>>no2>>no3;
    if(no3==no2 && no3==no1)
    {
     cout<<"No1,No2 and No3 is equal and grater"<<endl;
    }
    else if(no1==no2)
    {
        if(no1>no3)
        {
            cout<<"No1 and No2 is equal and grater"<<endl;
        }
    }
     else if(no1==no3)
    {
       if(no1>no2)
       {
            cout<<"No1 and No3 is equal and grater"<<endl;
       }
    }
    else if(no3==no2)
    {
         if(no3>no1)
         {
            cout<<"No2 and No3 is equal and grater"<<endl;
         }
    }

    else
    {
        if(no1>no2 && no1>no3)
        {
          cout<<"no1 and no2 is equal both are greater"<<endl;
        }
     else if(no2>no1 && no2>no3)
      {
        cout<<"no2 is greater"<<endl;
      }
    else
      {
       cout<<"no3 is grater"<<endl;
      }
    }

}
