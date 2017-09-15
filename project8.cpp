#include <iostream>
#include <cmath>
using namespace std;

int ARMSTRONG(int n1, int n2)
{ 
  int n,sum,dig;
  int i=n1;
  while(i<=n2)
  {
  n=i;
  sum=0;
     while(n != 0)
     {
        dig = n % 10;
        sum += pow(dig,3);
        n /= 10;
     }
    if(sum == i)
    cout<<i<< " is an Armstrong number.";
    i++;
   }
   return 0;
}


int main()
{
  int n1=0,n2=0;
  cout<<"PROGRAM TO PRINT ALL ARMSTRONG NUMBERS IN AN INTERVAL";
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>n1;
  cout<<"ENTER THE UPPER LIMIT: ";
  cin>>n2;
  int a=ARMSTRONG(n1,n2);
  return a;
}
