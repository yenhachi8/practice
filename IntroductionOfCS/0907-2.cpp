#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
   int **a;
   int i,j,k=1;
   a=new int  *[3];
   for( i=0;i<3;i++){
        a[i]=new int [4];
   }
   
   for(i=0;i<3;i++){
       for(j=0;j<4;j++){
           *(*(a+i)+j)=k++;
           
       }

       cout<<endl;

   }
   for(i=0;i<3;i++){
       for(j=0;j<4;j++){
           cout<<*(*(a+i)+j)<<" ";
       }
       cout<<endl;
   }

   for(i=0;i<3;i++){
       for(j=0;j<4;j++){
           cout<<"&["<<i<<"]["<<j<<"]"<<&(*(*(a+i)+j))<<" ";
       }
       cout<<endl;
   }
}

