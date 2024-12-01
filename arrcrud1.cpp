#include <iostream>
using namespace std;
int main()
{
    //create a array

    int arr[5];
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter array elements"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
       // read data from array
     for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    // search the record
    int data;
    int n;
    cout<<"enter the date which you want to search"<<endl;
    cin>>data;
    for(int i=0; i<size; i++)
    {
        // replace the data
        if(arr[i]==data)
        {
            cout<<"enter element to replace with data"<<endl;
            cin>>n;
            arr[i]==n;
        }

    }
      for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }

}
