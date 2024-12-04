#include <iostream>
using namespace std;
int add(int arr[]);
int main()
{
    int arr[5];
    for(int j=0; j<5; j++)
    {
        cin>>arr[j];
    }
    int total=add(arr);
    cout<<total<<endl;
}
int add(int arr[5])
{
    int sum=0;
    for(int i=0; i<5; i++)
    {
       sum= sum+arr[i];
    }
    return sum;
}
