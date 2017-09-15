#include<iostream>
using namespace std;

int main(){
    float cube(float);
    float a,cu,d;
    cout<<"Enter Any Number : ";
    cin>>a;
    
    cu=cube(a);
    cout << "\nThe Cube Of The Given Number [ "<<a<<" ] Is : "<<cu;
    cin>>d;
    return 0;
}
float cube(float a)
{
      float cu;
      cu=a*a*a;
      return (cu);
      
      }
      
