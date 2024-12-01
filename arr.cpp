# include <iostream>
using namespace std;
int main()
{
    // data define

    int arr[5]={10,20,30,40,50};
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }

cout<<"******************************************************************************************************************"<<endl;

// input data from user and add all input data

    int arr1[5];
    int sum=0;                      // declearation and initialization of sum value
    for(int m=0; m<5; m++)
    {
        cin>>arr1[m];
    }
    for(int m=0; m<5; m++)
    {
        cout<<arr[m]<<endl;

        sum=sum+arr1[m];              /* summ of input data*/
    }
    cout<<sum<<endl;


cout<<"******************************************************************************************************************"<<endl;



}
