 /*write C++ programs (separate) to implement access modifiers in C++
 
 Implement a class called "Person" with private member variables for name, age, and address. 
 Provide public member functions to set and get the values of these variables. 
 Create an object of the class and demonstrate the use of access modifiers to encapsulate the data.*/
 
 #include<iostream>
using namespace std;

class Person {
private:
    int age;
    string name, address;

public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAddress(string adr) {
        address = adr;
    }

    string getAddress() {
        return address;
    }
};

int main() {
    int age;
    string name, address;

    Person p;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter address: ";
    cin >> address;

    p.setName(name);
    p.setAge(age);
    p.setAddress(address);

    string n = p.getName();
    int a = p.getAge();
    string add = p.getAddress();

    cout << "\nName: " << n;
    cout << "\nAge: " << a;
    cout << "\nAddress: " << add;

    return 0;
}

