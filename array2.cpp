#include <iostream>
using namespace std;
int main(){
    
    int A[5],B[5],C[5],i;
    for(int i=0;i<=4;i++)
    {cout<<"Enter number for A["<<i<<"]: ";
        cin>>A[i];
    }
    
    for (int i=0;i<=4;i++)
    {cout<<"Enter number for B: ";
        cin>>B[i];
        
    }
    
   for (int i=0;i<=4;i++)
   {
       C[i]=A[i]+B[i];
       cout<<C[i]<<" ";
       
       
   }
   

   
   return 0;
    
}
