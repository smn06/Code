#include <iostream>
#include <string>
#include <sstream>
using namespace std;
const int MAX=10000;
int a[MAX+1];

int main()
{
    string line;
    istringstream ss;
    while (getline(cin,line)) {
        ss.str(line);
        int k;
        ss >> k;
        ss.clear();
        getline(cin,line);
        ss.str(line);
        int n=0;
            while(ss>>a[n])
                n++;
            ss.clear();
                if (n==1) {
                    cout<<"q(x):\nr="<<a[0]<<endl<< endl;
                        }
                else {
                    int b=a[0];
                    cout<<"q(x): "<<b;
                        for(int i=1;i<n-1;i++) {
                                b=a[i]+k*b;
                                cout<<' '<<b;
                            }
        cout<<endl;
    cout<<"r = "<<a[n-1]+k*b<<endl<<endl;
    }
}
}