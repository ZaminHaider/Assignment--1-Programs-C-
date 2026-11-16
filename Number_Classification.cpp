#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  if(n>=1)
  {
    cout<<"Number is Positive"<<endl;
  }
  else if(n<0)
  {
    cout<<"Number is Negative"<<endl;
  }
  else if(n==0)
  {
    cout<<"Number is zero"<<endl;
  }

  if(n%2==0)
  {
    cout<<"Number is even"<<endl;
  }
  else if(n%2!=0)
  {
    cout<<"Number is odd"<<endl;
  }

  if(n%3==0 && n%5==0)
  {
    cout<<"Number is divisible by 3 and 5";
  }
  else 
    {
     cout<<"Number is not divisible by 3 and 5";
    }
  
  return 0;
}
