# include <iostream>
using namespace std;
int main()
{

    int possno=0;
    int negno=0;
    int length=0;
    int arr[5]={-2,10,6,-8,20};
    for(int i=0; i<5; i++)
    {
        length++;
        if(arr[i]>=0)
        {
            possno++;
        }
        else
        {
            negno++;
        }
    }
    cout<<"possitive no is:   "<<possno<<endl;
    cout<<"negative no is:    "<<negno<<endl;
    cout<<length<<endl;
    int size=sizeof(arr)/sizeof(arr[0]);                 // sizeof(arr)= one index=4byte
    cout<<size;                                          // 5 index= 5*4= 20;
                                                          // size= sizeoff(arr)/sizeof[0];
}
