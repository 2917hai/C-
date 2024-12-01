#include <iostream>
using namespace std;
int main()
{
    int arr[5]={5,1,8,3,4};
    int evNumber=0;
    int odNumber=0;
    for(int i=0; i<5; i++)
    {

        if(arr[i]%2==0)
        {

            evsum=evsum+1;

        }
        else
        {

            odsum=odsum+1;
        }
    }
    cout<<"evsum+"<<evNumber;
    cout<<"odsum="<<odNumber;

}
