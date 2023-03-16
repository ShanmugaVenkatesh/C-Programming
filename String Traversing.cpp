#include <iostream>
using namespace std;

int main()
{
    string b;
    string a = "Hello";
    for(int i = 0; i <= a.length(); i++)
    {
        b = a[i];
        cout<<b<<endl;
    }
    return 0;
}
