# include <iostream>
using namespace std;
int main()
{

    char str1[11];
    char str2[10];
    int len=0;
    int len1=0;
    cin>>str1;
    cin>>str2;
    while(str1[len]!='\0')
    {
        len++;
    }

    while(str2[len1]!='\0')
    {
        str1[len]=str2[len1];
        len++;
        len1++;
    }
    cout<<str1<<endl;
    int len2=0;
    while(str1[len2]!='\0')
    {
        len2++;
    }
     cout<<len2;
}
