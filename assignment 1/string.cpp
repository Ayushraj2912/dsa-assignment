#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cin>>a>>b;
    cout<<a.size() <<" "<< b.size() <<endl;
    string c=a+b;
    cout<<c<<"\n";
    
    char x =a[0];
    a[0]=b[0];
    b[0]=x ;
    cout<<a<<" "<<b;
    return 0;
}
