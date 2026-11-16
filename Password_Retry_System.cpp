#include<iostream>
using namespace std;
int main()
{
    int pass=1234;
    cout<<"Enter Password: ";
    for(int i=0;i<3;i++)
        {
            cin>>pass;
            if(i==2)
            {
                cout<<"Access Denied";
                break;
            }
            if(pass==1234)
            {
                cout<<"Access Granted";
                break;
            }
            else
            {
                cout<<"Wrong Password";
                cout<<endl<<"Try Again: ";
            }
        }
    return 0;
}
