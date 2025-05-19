#include <iostream>
using namespace std;

class Student {
    private:
        static int studentTotal;
    public:
        string name;
        string status;
        int age;

        Student(string pName, int pAge){
            name = pName;
            age = pAge;
            status = "New Student";
            ++studentTotal;
            cout << name << "Created" << "Status" << status << endl;
        }

        ~Student(){
            cout << name << " Destroyed" << endl;
            --studentTotal;
            cout << endl;
        }

        static int getTotalStudent(){
            return studentTotal;
        }

        static void setStudentTotal(int a){
            studentTotal = a;
        }
};

int Student::studentTotal = 0;

int main(){

    cout << "Student total is" << Student::getTotalStudent() << endl;

    Student st1("Maman", 40);
    Student st2("Agus", 34);

    Student::setStudentTotal(10);

    cout << "Student total is" << Student::getTotalStudent() << endl;
    {
        Student st3("Budi", 19);
        Student st4("Caca", 21);
        cout << "Student total is" << Student::getTotalStudent() << endl;
    }
    
    cout << "Student total is" << Student::getTotalStudent() << endl;
    return 0;
}