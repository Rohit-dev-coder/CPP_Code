#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    std::cout<<"Iterating and Manipulating: ";
    for (auto i = v.begin(); i != v.end(); i++){
        cout<<(*i)++<<"\t";
    }
    std::cout<<"\nIteration Again: ";
    for(auto i = v.begin(); i != v.end(); i++){
        cout<<*i<<"\t";
    }
    cout<<"\n";
    
    return 0;
}