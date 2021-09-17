#include <iostream>
using namespace std;
int main()
{    
    int arr[13];
    arr[0]=1;
    for (int i=1;i< 13;++i)
        arr[i]=i*arr[i-1];

    int n,k;
    while(cin>>n>>k)
    {
        int product=1;
        for (int i=1; i<=k; ++i)
        {
            int n_i;
            cin>>n_i;
            product*= arr[n_i];
        }
        cout<<arr[n]/product<< endl;
    }
}