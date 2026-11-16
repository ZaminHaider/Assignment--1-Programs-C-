#include<iostream>
using namespace std;
int main()
{
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    for(int i=0;i<=limit;i++)
        {
            int n=i;
            int rev=0;
            while(n>0)
                {
                    int r=n%10;
                    n=n/10;
                    rev=rev*10+r;
                }
            if(i==rev)
            {
                cout<<i<<" ";
            }
        }
    return 0;
}
