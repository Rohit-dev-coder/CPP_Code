#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> myList1, myList2;
    list<int>::iterator it;

    for(int i = 1; i <= 4; i++){
        myList1.push_back(i);
    }
    for(int i = 1; i <= 3; i++){
        myList2.push_back(i*10);
    }

    it = myList1.begin();
    ++it;

    myList1.splice(it, myList2);
    myList2.splice(myList2.begin(), myList1, it);

    it = myList1.begin();
    advance(it, 3);

    myList1.splice(myList1.begin(), myList1, it, myList1.end());

    for(it = myList1.begin(); it != myList1.end(); ++it){
        cout << *it << " ";
    }

    cout << "\n";

    for(it = myList2.begin(); it != myList2.end(); ++it){
        cout << *it << " ";
    }

    cout << "\n";
    return 0;
}