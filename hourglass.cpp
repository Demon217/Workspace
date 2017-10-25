#include<iostream>
using namespace std;
int main()
{ 
 int i,j,a[6][6];
 for(i=0;i<6;i++)
   { 
     for(j=0;j<6;j++)
      { 
       cin>>a[i][j];
     }
}
for(i=0;i<6;i++)
   { 
     for(j=0;j<6;j++)
      { 
       cout<<a[i][j]<<" "; 
     }
cout<<endl;
}
int sum=0,max=-200,max1=-200;
for(i=0;i<6;i++)
   { 
    for(j=0;j<6;j++)
     { 
if(j+2<6 && i+2<6)
    {
      sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
      max=sum;
      if(max1<max)
       {
        max1=max;
        }
      } 
     }
    }
cout<<max1;
return 0;
}

        
 
    
