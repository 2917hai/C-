# include <iostream>
using namespace std;
int main()
{

         for(int i=1; i<=10; i++)
          {
           for(int j=1; j<=i; j++)
            {
            cout<<"*";
             }
            cout<<endl;
       }
       cout<<"============================================================="<<endl;

         for(int row=1; row<=10; row++)
         {
             for(int space=1; space<=10-row; space++)
             {
                 cout<<" ";
             }
             for(int star=1; star<=row; star++)
             {
                 cout<<"*";
             }
             cout<<endl;

         }

          cout<<"============================================================="<<endl;

          int x=1;
          for(int r=1; r<=10; r++)
          {
              for(int s=1; s<=10-r; s++)
              {
                  cout<<" ";
              }
              for(int str=1; str<=x; str++)
              {
                  cout<<"*";
              }
              x=x+2;
              cout<<endl;
          }

           cout<<"============================================================="<<endl;

              for(int t=1; t<=10; t++)
              {
                  for(int u=1; u<=11-t; u++ )
                  {
                      cout<<"*";
                  }
                  cout<<endl;
              }

 cout<<"============================================================="<<endl;

        for(int d=1; d<=10; d++)
        {
            for(int e=0; e<=d; e++)
            {
                cout<<" ";
            }
            for(int f=1; f<=4; f++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
 cout<<"============================================================="<<endl;

      for(int g=1; g<=10; g++)
      {

          if(g==1 || g==10)
          {
              for(int h=1; h<=g; h++)
              {
                  cout<<"*";
              }
              cout<<endl;
          }


          else
            {
              cout<<"*";
              for(int o=0; o<g-1; o++)
              {
                  cout<<" ";
              }
              cout<<"*";
              cout<<endl;
            }
      }

 cout<<"============================================================="<<endl;

  for(int a=1; a<=10; a++)
  {
      for(int b=0; b<=a-1; b++)
      {
          cout<<" ";
      }
      if(a==1 || a==10)
      {
          for(int c=1; c<=11-a; c++)
          {
              cout<<"* ";
          }
          cout<<endl;
      }
      else
      {
          cout<<"*";
          int rr=7;
          for(int w=7; w<=rr; w--)
          {
              cout<<" ";
          }
          cout<<"*";
          rr=rr-1;
          cout<<endl;
      }

  }



}


