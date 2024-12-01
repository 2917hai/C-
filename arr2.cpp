#include <iostream>
using namespace std;
int main()
{
    int arr[5]={5,1,8,3,4};
    int evsum=0;
    int evensum=0;
    int oddsum=0;
    int odsum=0;
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            evsum=evsum+1;
            evensum=evensum+arr[i];
        }
        else
        {
            odsum=odsum+1;
            oddsum=oddsum+arr[i];
        }
    }
    cout<<"evNumber="<<evsum<<endl;
    cout<<"odNumber="<<odsum<<endl;
    cout<<"evensum is ="<<evensum<<endl;
    cout<<"oddsum is ="<<oddsum<<endl;
    if(evensum%2==0)
    {
        cout<<"even sum is even Number"<<endl;
    }
    else{
        cout<<"evensum is oddNumver"<<endl;
    }
     if(oddsum%2==0)
    {
        cout<<"oddsum is evenNumber"<<endl;
    }
    else{
        cout<<"oddsum is oddNumver"<<endl;
    }

}
