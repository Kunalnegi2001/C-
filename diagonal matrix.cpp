#include <iostream>
using namespace std;
int main()
{
    // Print a matrix
    int a[3][3],b[3][3],c[3][3],i,j;
    for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++){
        cout<<"Enter elements for matrix A: ";
        cin>>a[i][j]; }
    }
    
    cout<< "matrix A: "<<endl;
      for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++){
        
        cout<<a[i][j]<<" ";
       } cout<<"\n";
    }
    cout<<endl;
    
    cout<< "Diagonal elements are: "<<endl;
      for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++){
        if(i==j)
        cout<<a[i][j]<<" ";
       } cout<<"\n";
    }
        cout<<endl;

 cout<< "Right Diagonal elements are: "<<endl;
      for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++){
        if(i+j==2)
        cout<<a[i][j]<<" ";
       } cout<<"\n";
    }
    

    return 0;
    
}