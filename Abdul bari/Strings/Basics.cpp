#include<iostream>
using namespace std;
void stringfun()
{
    char str[10]={'N','i','s','h','u'};
    for(int i =0;i<sizeof str/sizeof str[0];i++)
    {
        if(str[i]=='\0')
        {
            cout<<i;
        }
    }
}
int main()
{
 stringfun();

}