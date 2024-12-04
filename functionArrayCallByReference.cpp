#include <iostream>
using namespace std;
int add(int *);
int main()
{
    int arr[5];
    for(int j=0; j<5; j++)
    {
        cin>>arr[j];
    }
    int total=add(&arr[0]);
    cout<<total<<endl;
    cout<<arr[0]<<endl;
}
int add(int *ptr)
{
    int sum=0;
     *ptr=10;
   while(*ptr !='\0')
   {
       sum=sum+(*ptr);
       ptr++;
   }

    return sum;
}

