#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(5, 100);
    
    v.emplace(v.begin() + 1, 200);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] <<endl;
    }
    cout << "\n";
    return 0;
}