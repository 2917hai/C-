# include <iostream>
using namespace std;
int main()
{ int x=0;
int y=8;
    for(int row=1; row<=5; row++)
    {
        for(int star=1; star<=6-row; star++)
        {
            cout<<"*";
        }
        for(int space=0; space<=x; space++)
        {
            cout<<" ";
        }
        x=x+2;
        for(int str=1; str<=6-row; str++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        for(int k=0; k<=y; k++)
        {
            cout<<" ";
        }
        y=y-2;
        for(int l=1; l<=i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
