#include <iostream>
using namespace std;

int main(){
    float diameter(float),area(float),circumference(float);
    float radius,d,a,c,e;
    cout<<"Enter Radius Of The Circle : ";
    cin>>radius;
    d=diameter(radius);
    a=area(radius);
    c=circumference(radius);
    cout<<"The Required Diameter Is : "<<d<<"\nThe Required Area Is : "<<a<<"\nThe Circumference Of The Circle Is : "<<c;
    cin>>e;
    return 0;
}
float diameter(float radius){
      float d;
      d=2*radius;
      return(d);
      }
      float area(float radius){
            float a;
            a=3.14*radius*radius;
            return(a);
            }
            float circumference(float radius){
                  float c;
                  c=2*3.14*radius;
                  return(c);
                  }
    
    
