#include <iostream>

using namespace std;

int main() {
    int j,i,n;
    cout<<"enter a number : ";
    cin>>n;
    for(i=1; i<=n;i++){
        for(j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    
    for(i=1; i<=n; i++){
        char ch = 'A';
        for(j=1; j<=i; j++){
            cout<<ch;
            ch += 1;
        }
        cout<<endl;
    }
    
}