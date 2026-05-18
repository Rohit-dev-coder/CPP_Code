#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(5, 100);
    // cout << v.max_size() << endl;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++){
        cout << v[i] <<endl;
    }
    cout << "\n";
    return 0;
}