#include <iostream>

using namespace std;

int main() {
    int n,i,j;
    
    cout<<"Enter num: ";
    cin>>n;
    
    // loop for num pattern
    
    // for(i=1; i<=n; i++){ //outer loop for line
        
    //     for(j=1; j<=n; j++){ //inner loop for column
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    
    // // loop for star pattern
    // cout<<"star pattern \n\n\n";
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // loop for alphabate pattern
    char ch = "A";
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}