#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<*(v.data())<<endl;  //return the poitner to the array
    cout<<v.at(4)<<endl;
    cout<<v[4]<<endl;


    cout<<"\n";
    
    return 0;
}