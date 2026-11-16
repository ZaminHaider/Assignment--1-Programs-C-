#include<iostream>
using namespace std;
int main()
{
  int n,sq;
  cout<<"Enter a number: ";
  cin>>n;
  sq=n*n;
  while(n>0)
    {
      if(n % 10 != sq % 10)
      {
        cout<<"Not an Automorphic number";
        return 0;
      }
      n=n/10;
      sq=sq/10;
    }
  cout<<"Automorphic Number";
  return 0;
}
