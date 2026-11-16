#include<iostream>
using namespace std;
int main()
{
  float a,b,c,d,e,total,percentage;
  cout<<"Enter 5 subjects marks: ";
  cin>>a>>b>>c>>d>>e;
  total=a+b+c+d+e;
  percentage=(total/500)*100;
  if(a<33 || b<33 || c<33 || d<33 || e<33)
  {
    cout<<"Fail";
    return 0;
  }
  if(percentage>=60)
  {
    cout<<"First";
  }
  else if(percentage<=59 && percentage>=50)
  {
    cout<<"Second";
  }
  else if(percentage <=49 && percentage>=40)
  {
    cout<<"Third";
  }
  
  return 0;
}
