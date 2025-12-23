#include<iostream>
using namespace std;
#include <string>
 string username(string email)
 {
   for (int i =0;i<email.length();i++)
   {
    if(email[i]=='@')
    {
        return email.substr(0,i);
    }
   }
   return "abc";
 }
 int main()
 { string emailaddress;
   cout<<"Enter your email address";
   getline(cin,emailaddress);
   cout<<username(emailaddress);
 }