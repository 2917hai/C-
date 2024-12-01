# include <iostream>
using namespace std;      // 2D array 2 diamention array diamention means faila hua or renge
int main()
{
    int goal=10;
    int rowsum=0;
    int colsum=0;
    int search;
    cout<<"goal value is :"<<goal<<endl;
    cout<<"enter the size of 2d array"<<endl;
    int m;
    int n;
    cin>>m;
    cin>>n;
    cout<<"enter the value"<<endl;
 int arr[m][n];                            //int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
  for(int i=0; i<m; i++)
  {

      for(int j=0; j<n; j++)
      {
          cin>>arr[i][j];


      }
  }
    for(int i=0; i<m; i++)
  {
      for(int j=0; j<n; j++)
      {
            rowsum=rowsum+arr[i][j];
          cout<<arr[i][j]<<"  ";
      }
      cout<<rowsum;
      cout<<endl;
      rowsum=0;

  }
   for(int i=0; i<m; i++)
  {
      for(int j=0; j<n; j++)
      {
          if(arr[i][j]==goal)
          {
             search=arr[i][j];
          }
      }
  }
          if(search==goal)
          {
             cout<<"sucessfully search value";
          }
          else
          {
               cout<<"not found goal value"<<endl;
          }
}
