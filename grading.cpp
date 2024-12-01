# include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks"<<endl;
    cin>>marks;
    if(marks<=100 && marks>=0)
    {
    if(marks>=33 && marks<45)
    {
        cout<<"grade C"<<endl;
    }
    else if(marks>=45 && marks<60)
    {
         cout<<"grade B"<<endl;
    }
     else if(marks>=60 && marks<=100)
    {
         cout<<"grade A"<<endl;
    }
    else{
        cout<<"failed"<<endl;
    }
    }
    else
    {
        cout<<"invalid marks";
    }

}
