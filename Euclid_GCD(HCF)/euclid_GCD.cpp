#include <iostream>
using namespace std;

int gcd(int l, int s)
{   
    int temp;
    while(s!=0)
    {   
        temp=s;
        s=l%s;
        l=temp;
    }
    return temp;
}

int main()
{
    cout<<gcd(20,8)<<"\n";
    cout<<gcd(8,20);

    return 0;

}