# include <iostream>
using namespace std;
int main()
{

    int x=1;
    for(int i=1; i<=4; i++ )
    {
        for(int j=1; j<=4-i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=x; k++)
        {
            cout<<"*";
        }
        x=x+2;
        cout<<endl;
    }
    int y=5;
    for(int m=1; m<=3; m++)
    {
        for(int n=1; n<=m; n++)
        {
            cout<<" ";
        }
        for(int o=1; o<=y; o++)
        {
            cout<<"*";

        }
        y=y-2;
        cout<<endl;
    }
}
