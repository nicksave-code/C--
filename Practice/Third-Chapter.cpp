//Objects in C++
#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string my_name;

string courses;

class MyFriends {
public: 
    void my_function() {
        cout << "Hello " << my_name << endl;
    }
    string eyes;
    int age;    
};

class Homework {
public:
    void courses() {
        cout << "Your courses are: " << courses << endl;
    }
};

void my_function() {
    cout << "Hello " << my_name << endl;
};

int main() {
    cout << "Your name is: " << endl;
    cin >> my_name;

    std::transform(my_name.begin(), my_name.end(), my_name.begin(), ::tolower);

    MyFriends nico;
    nico.eyes = "brown";
    nico.age = 0x11;
    
    MyFriends sandra;
    sandra.eyes = "light brown";
    sandra.age = 0x12;

    if (my_name == "sandra" || my_name == "sand") { //I need a break!
        sandra.my_function();
        cout << sandra.eyes << endl;
        cout << sandra.age << endl;
    }

    else if (my_name == "nico") {
        nico.my_function();
        cout << nico.eyes << endl;
        cout << nico.age << endl;
    }

    else {
        cout << "You are a stranger!" << endl;
    }

    cout << "Your courses are: " << endl;
    getline( cin, courses );

    
    return 0;
}