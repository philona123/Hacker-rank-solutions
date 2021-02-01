#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int StudentId = 0;
static int ProfessorId = 0;

class Person
{
    public:
        string name;
        int age;

        virtual void getdata() {
            cin >> name;
            cin >> age;
        }
        virtual void putdata() {
            cout << name << " " << age << " ";
        }
};

class Student : public Person
{
    public:
        int marks[6];
        int id;

        Student() {
            StudentId ++;
        }

        void getdata() {
            Person::getdata();
            for (int i = 0; i < 6; ++i) {
                cin >> marks[i];
            }
            id = StudentId;
        }

        void putdata() {
            Person::putdata();
            cout << this->sum() << " " << id << endl;
        }

        int sum() {
            int sum = 0;

            for (int i = 0; i < 6; ++i) {
                sum += marks[i];
            }

            return sum;
        }
};

class Professor : public Person
{
    public:
        int publications;
        int id;

        Professor() {
            ProfessorId ++;
        }

        void getdata() {
            Person::getdata();
            cin >> publications;
            this->id = ProfessorId;
        }

        void putdata() {
            Person::putdata();
            cout << publications << " " << id << endl;
        }
};
int main(){
