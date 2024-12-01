#include <iostream>
using namespace std;
void add();
void sub();
void mult();
void div();

int main()
{
  int no;
  char option;
  cout<<" 1)=for add  \n 2)= for sub \n 3)= for Multi \n 4)= for div \n 5)= exit"<<endl;
  //cout<<"enter your choice"<<endl;
  //cin>>no;
  while(option!='N')
  {
 cout<<"enter your choice"<<endl;
  cin>>no;

   switch(no)
   {

   case 1:
    {
        add();
         cout<<"do you want to continue 'y' or 'N' "<<endl;
         cin>>option;
        break;
    }
     case 2:
    {
        sub();
         cout<<"do you want to continue 'y' or 'N' "<<endl;
    cin>>option;
        break;
    }
     case 3:
         {
        mult();
         cout<<"do you want to continue 'y' or 'N' "<<endl;
    cin>>option;
        break;
         }


     case 4:
    {
        div();
         cout<<"do you want to continue 'y' or 'N' "<<endl;
    cin>>option;
        break;
    }
     default:
    {
        break;
    }

   }

  }

}

void add()
{
     int a,b;
     cout<<"enter two no"<<endl;
    cin>>a>>b;
    int sum=a+b;
    cout<<"sum of two no is"<<sum<<endl;

}

void sub()
{
     int a,b;
     char option='y';
     cout<<"enter two no"<<endl;
     cin>>a>>b;
     int subb=a-b;
     cout<<"sub of two no is"<<subb<<endl;
}

void mult()
{
     int a,b;
     char option='y';
     cout<<"enter two no"<<endl;
    cin>>a>>b;
    int multi=a*b;
    cout<<"Mult of two no is"<<multi<<endl;
}

void div()
{
     int a,b;
     char option='y';
     cout<<"enter two no"<<endl;
     cin>>a>>b;
    int divi=a/b;
    cout<<"division of two no is"<<divi<<endl;
}
