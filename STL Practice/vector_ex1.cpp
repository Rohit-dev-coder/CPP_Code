#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    std::cout<<"Forward Iteration: ";
    for (auto i = v.begin(); i != v.end(); i++){
        cout<<*i<<"\t";
    }
    std::cout<<"\nBackward Iteration: ";

    // c means constant
    // r means reverse
    for(auto i = v.crbegin(); i != v.crend(); i++){
        cout<<*i<<"\t";
    }
    cout<<"\n";
    
    return 0;
}