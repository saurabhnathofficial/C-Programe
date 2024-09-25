#include <iostream>

using namespace std;

int binaryToDecimal(int binNum){
    int ans = 0; 
    int pow = 1;
    int rem;
    
    while(binNum>0){
        rem = binNum % 10;
        ans += (rem*pow);
        
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main() {
   
    
    cout<<binaryToDecimal(111)<< endl;
    cout<<binaryToDecimal(1010)<< endl;
  
}