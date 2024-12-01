#include <iostream>
using namespace std;
int main()
{
 char str[20];
 char str1[20];
 cout<<"enter the value of str data"<<endl;
 cin.getline(str,20);
  cout<<"enter the value of str1 data"<<endl;
 cin.getline(str1,20);
 int count=0;
 char *ptr=&str[0];
 char *ptr1=&str1[0];
int no=0;
 while(*ptr!='\0')
 {
     count++;
     ptr++;

 }
cout<<count<<endl;
int nu=count+1;
while(*ptr1!='\0')
{
    str[nu]=*ptr1;
    ptr1++;
    no++;
    nu++;
}

cout<<str<<endl;

}
