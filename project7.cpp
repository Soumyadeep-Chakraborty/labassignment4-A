#include <iostream>
using namespace std;

int strong(int b)
{ 
  int temp=b;
  int i,f,r;
  int sum=0;
  while(temp>0)
  {
      i=1,f=1;
      r=temp%10;
      while(i<=r)
      {
        f=f*i;
        i++;
      }
      sum=sum+f;
      temp=temp/10;
  }
  if(sum==b)
    return 0;
  else 
    return 1;
}
int main()
{
  int num1=0,num2=0;
  cout<<"Program to print strong numbers in a given interval.";
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>num1;
  cout<<"ENTER THE UPPER LIMIT: ";
  cin>>num2;
  int b=num1;
  cout<<endl<<endl;
  while(b<=num2)
  {
  int count1=strong(b);
  if(count1==0)
    cout<<b<<" is a strong number.";
  b++;
  }

  return 0;
}
