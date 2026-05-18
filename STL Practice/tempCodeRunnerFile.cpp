#include <iostream>
#include <vector>

using namespace std;

class Student{
    int roll;
    char grade;
    float per;

    public:

        Student(int r, char g, float p){
            this->roll = r;
            this->grade = g;
            this->per = p;
        }

        int getRoll();
        // void getGrade();
        // void getPer();

};

int Student::getRoll(){
    return this->roll;
}

int main(){
    vector<Student> students;
    int choice;

    
    
    while(true){
        cout<<"Please select:\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Student\n";
        cout<<"0. Stop\n";
        cout << "Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: {
            cout<<"Adding Student";
            int roll;
            char grade;
            float per;
            cout << "Enter Roll, grade, per\n";
            cin >> roll >> grade >> per;
            Student s(roll, grade, per);
            students.push_back(s);
            break;
        }
    
        case 2:
            cout<<"Displaying Students";
            for (auto it = students.begin(); it != students.end(); ++it) {
                cout << it->getRoll() << endl;
            }
            break;
        
        case 0:
            return 0;

        default:
            break;
        }
    }

    cout<<endl;
    return 0;
}