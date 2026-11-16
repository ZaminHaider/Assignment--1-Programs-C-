#include<iostream>
using namespace std;
int main()
{
    float n,total,surcharge=0;
    cout<<"Enter Unit Consumed: ";
    cin>>n;
    cout<<endl;

    if(n<=100)
    {
        total=n*5;
    }
      
  else if(n<300 && n>=101)
  {
    total=n*7;
  }
    
  else if(n>=300)
  {
    total=n*10;
  }

  if(total>2000)
  {
    surcharge=(total*5)/100;
  }
  cout<<"Unit consumed: "<<n<<endl;
  cout<<"Bill: "<<total<<endl;
  cout<<"Surcharge charges: "<<surcharge<<endl;
  cout<<"Total Bill: "<<total+surcharge<<endl;
  
    return 0;
}
