// logical operator
/*  &&
    ~ (tild) Not operator
    ||  pipeline symbol
    ! exclamation


    in && and || operator both input and output are in boolean form

    line --> statement
    calculation -->  expression
*/
# include <iostream>
using namespace std;
int main()
{
int a, b,c;
cout<<"enter the value of a b and c";
cin>>a>>b>>c;
cout<<(a>b && b<c);
cout<<endl;
cout<<(a<b || b>c);
cout<<endl;
cout<< !(a<b || b>c);
}
