# include <iostream>
using namespace std;
int main()
{

    cout<<"enter a string "<<endl;
    char msg[50];
   // cin>>msg;        print only first string before first space because space are count in null
   cin.getline(msg,50);     //print all string
   cout<<"your messege is :"<<msg;

   int empid;
   char name[20];
   double salary;
   cout<<"enter your employee details"<<endl;
   cout<<"==========================================================================="<<endl;
     cout<<"enter employee name"<<endl;
   cin.getline(name,20);                        //yadi koi getline method bich me denge to error show krega is error ko fix krne ke liye first string krna hoga
                                            // as name is string name ko pahle input le rahe hai agar bich me kahi lenge to erroe aayega agar bich me hi print krana hoga to iske liye gets method dena hoga
   cout<<"enter empId"<<endl;
   cin>>empid;
   cout<<"enter employee salary"<<endl;
   cin>>salary;
   cout<<"employee Id is :"<<empid<<endl;
   cout<<"employee name is :"<<name<<endl;
   cout<<"employee salary is:"<<salary<<endl;
}
