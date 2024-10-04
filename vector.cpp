#include <iostream>
#include <vector>
using namespace std;

int main() {
  // vector<int> v = {1, 2, 3, 4, 5};
  // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

  // cout<<"size of vector : "<<v.size()<<endl;
  // for(char val : vec){
  //   cout<<val<<" ";
  // }
  // for(int val : v){
  // cout<< val <<endl;
  // }

  vector <int> vect;
 

//   for(int i = 0; i < 5; i++){
//     int input;
//     cin>>input;
//     vect.push_back(input);
//   }
//   for(int val : vect){
//     cout<<val<<" ";
//   }
//   cout<<vect.at(3);


vect.push_back(0);
vect.push_back(1);
vect.push_back(3);
vect.push_back(3);
vect.push_back(3);
vect.push_back(3);
vect.push_back(3);
cout<<vect.size();
cout<<vect.capacity();
}
