//Objects in C++
#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string my_name;

class MyFriends {
public: 
    string eyes;
    int age;    
};

void my_function() {
    cout << "Hello " << my_name << endl;
};

int main() {
    cout << "Your name is: " << endl;
    cin >> my_name;
    
    my_function();

    std::transform(my_name.begin(), my_name.end(), my_name.begin(), ::tolower);

    MyFriends nico;
    nico.eyes = "brown";
    nico.age = 0x11;
    
    MyFriends sandra;
    sandra.eyes = "light brown";
    sandra.age = 0x12;

    if (my_name == "sandra" || my_name == "sand") { //I need a break!
        cout << sandra.eyes << endl;
        cout << sandra.age << endl;
    }

    else if (my_name == "nico") {
        cout << nico.eyes << endl;
        cout << nico.age << endl;
    }

    else {
        cout << "You are a stranger!" << endl;
    }
    
    return 0;
}