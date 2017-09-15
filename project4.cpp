#include <iostream>
using namespace std;


int odd_even(int num)
{
  if((num%2==0))
    return 0;
  else
    return 1;
}
int main()
{
  int a=0;
  cout<<"Program to determine whether the number is even or odd.";
  cout<<"\nEnter the number ";
  cin>>a;
  int n=odd_even(a);
  if(n==0)
    cout<<"It is an even number";
  else
    cout<<"It is an odd number";
  return 0;
}
