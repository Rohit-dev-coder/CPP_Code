#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(5);
    int *p = v.data();
    *p = 10;
    ++p;
    *p = 20;
    p[2] = 100;
    cout<< "Vector contains: ";
    for (int i = 0; i < v.size(); i++){
        cout << ' ' << v[i];
    }
    cout << "\n";
    return 0;
}