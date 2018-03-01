#include <iostream>
#include <string>
using namespace std;
int main()
{
    int L,R,N;
    cout<<"Enter L & R:";
    cin>>L>>R;
    cout<<"Enter N=";
    cin>>N;
    if(L<N && N<R)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
