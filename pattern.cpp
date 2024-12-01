#include <iostream>
using namespace std;
int main()
{
    int no=4;
    for(int i=1; i<=no; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cout<<"*";

        }
        cout<<endl;

    }
    cout<<endl;
    for(int k=1; k<=no; k++)
    {
        if(k==1 || k==4)
        {
            for(int l=1; l<=5; l++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            cout<<"*";
            for(int m=1; m<=3; m++)
            {
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }

    }

}
