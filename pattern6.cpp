# include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {

        for(int j=1; j<=2*5-1; j++)
        {
            if(i==1 || (i==j || j==10-i) )
            {
                cout<<"*";

            }

            else
            {

                cout<<" ";
            }


        }
        cout<<endl;
    }

}
