# include <iostream>
using namespace std;
int main()
{
    /*
        =======================Array Pointer ================================
         we can't modify array pointer it is a constatnt pointer


    */
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;   // address
    cout<<*arr<<endl;  // 1  value of zero index
     cout<<*(arr+1)<<endl;  // 2 value of 0+1 index
      cout<<*(arr+2)<<endl;  // 3 value of 1+1 index
       cout<<*(arr+3)<<endl;  // 4 value of 2+1 index

// ========================arithmatic operator ==========================
    int a=10;
    int* p=&a;
    cout<<*p<<endl;
    cout<<p<<endl;  //  100
    p++;
    cout<<p<<endl;  //   104
    p++;
    cout<<p<<endl;  //   108
    p--;
    cout<<p<<endl;  //   104


    p+1;  // add 1integer value that means 4byte  suppose p=100;
    cout<<p<<endl;     // 104
    p+3;    // 3integer value means   12 byte
    cout<<p<<endl;  // 116
    p-3;    // 3integer value means   12 byte
    cout<<p<<endl;  // 104


    // ================ponter to pointer=========================
    int* ptr2; // 100
    int* ptr1=ptr2+2;  //108
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr1-ptr2<<endl;  // 8byue means 2integer


  int arr1[]={10,20,30,40};
  int*ptr5=arr1;
  cout<<*(ptr5 +1)<<endl;   // 20
   cout<<*(ptr5 +3)<<endl;  // 40
   ptr5++;
    cout<<*ptr5<<endl;      // 20



  return 0;
}
