#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int* ptr;
    ptr=&arr[0];
    while(*ptr!='\0')
    {
        cout<<ptr<<endl;
        cout<<*ptr<<endl;
        ptr++;
    }

    // ====================================== Char array Pointer ===================================================
    char ch[10]="Hello";
    char* ptr1;
    ptr1=&ch[0];
     while(*ptr1!='\0')
    {
        cout<<*ptr1<<endl;
        ptr1++;
    }

    // ================================ double pointer or pointer to pointer =========================================
    int n1=10;
    int* ptr2=&n1;
    int** ptr3;
    ptr3=&ptr2;

    cout<<ptr3<<endl;
    cout<<*ptr3<<endl;
    cout<<**ptr3<<endl;
    cout<<**ptr3+10<<endl;
//===============================

}
