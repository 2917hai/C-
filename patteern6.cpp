# include <iostream>
using namespace std;
int main()
{
    int x=0;
    int y=5;
    for(int i=1; i<=5; i++)
    {
        for(int j=0; j<=x; j++)
        {
            cout<<" 1";

        }
        x=x+2;

            if(i==1 || i==5)
            {
                for(int l=1; l<=11-2*i; l++)
                {
                    cout<<"*";
                }
            }
            else
            {  cout<<"*";
                for(int m=1; m<=y; m++)
                    cout<<" ";
                cout<<"*";
            }
            y=y-2;
        }
        cout<<endl<<endl;
    }

