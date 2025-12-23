#include <iostream>
using namespace std;
#include<string>
int vowelcounter(string str)
{ int count=0;
   for(int i =0;i<str.length();i++)
   { 
     switch(tolower(str[i]))
     {
         case 'a':
          count++;
           break;
         case 'e':
          count++;
          break;
          case 'i':
           count++;
           break;
           case 'o':
           count++;
           break;
            case 'u':
           count++;
           break;
           default:
            break;
           
     }
   }
   return count;
}
int main()
{
  string str ;
  cout<<"Enter the string";
  getline(cin,str);
  cout<<"The no. of vowels in string is:"<<vowelcounter(str)<<endl;
  cout<<"The no. of consonents in string is:"<<str.length()-vowelcounter(str)<<endl;
  cout<<"The length of the string is:"<<str.length();
}