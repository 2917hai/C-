#include <iostream>
using namespace std;
int main()
{
 char str[10];
 char str1[10];
 cout<<"enter the value of str data"<<endl;
 cin.getline(str,10);
  cout<<"enter the value of str1 data"<<endl;
 cin.getline(str1,10);
 char *ch=&str[0];
 int ctr=0;
 while(*ch!='\0')
 {
     str1[ctr]=*ch;
     ch++;
     ctr++;
 }
 cout<<str1<<endl;
}
