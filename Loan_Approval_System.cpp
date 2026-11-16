// 1st program

// #include<iostream>
// using namespace std;
// int main()
// {
//   float salary,age,creditscore;
//   cout<<"Enter your age: ";
//   cin>>age;
//   cout<<endl<<"Enter your salary: ";
//   cin>>salary;
//   cout<<endl<<"Enter your creditscore: ";
//   cin>>creditscore;
  
//   if(age>=21 && age<=60 && salary>=30000 && creditscore>=700)
//     cout<<"Your loan is Approved";
    
//   else if(age>=21 && age<=60 && ((salary>=30000 && creditscore<700) || (creditscore>=700 && salary<30000)))
//   {
//     cout<<"Loan partially approved";
//   }
    
//   else
//   {
//     cout<<"Loan not approved";
//   }
//   return 0;
// }

//2nd program

#include<iostream>
using namespace std;
int main()
{
  float salary,age,creditscore,percentage=0;
  cout<<"Enter your age: ";
  cin>>age;
  cout<<endl<<"Enter your salary: ";
  cin>>salary;
  cout<<endl<<"Enter your creditscore: ";
  cin>>creditscore;
  if(age>=21 && age<=60)
  {
    percentage =percentage+60;
  }
  if(salary>=30000)
  {
    percentage = percentage+20;
  }
  if(creditscore>=700)
  {
    percentage=percentage+20;
  }
  if(percentage==80)
  {
    cout<<"Loan Partially Accepted";
  }
  else if(percentage<80)
  {
    cout<<"Loan Rejected";
  }
  else
    cout<<"Loan Accepted";
  return 0;
}
