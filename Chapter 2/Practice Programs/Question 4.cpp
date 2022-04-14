#include <iostream>

using namespace std;

int main() {
    string instructor, name, food, adjective, colour, animal;
    int number;

    cout << "Enter your instructors name: ";
    cin >> instructor;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter a food: ";
    cin >> food;
    cout << "Enter a number between 100 and 120: ";
    cin >> number;

    cout << "Enter a adjective: ";
    cin >> adjective;
    cout << "Enter a colour: ";
    cin >> colour;
    cout << "Enter an animal: ";
    cin >> animal;
    cout << endl;

    cout << "Dear Instructor " << instructor << "," << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time. First," << endl;
    cout << "I ate a rotten " << food << ", which made me turn " << colour << " and extremely ill. I" << endl;
    cout << "came down with a fever of " << number << ". Next, my " << adjective << " pet" << endl;
    cout << animal << " must have smelled the remains of the " << food << " on my homework," << endl;
    cout << "because he ate it. I am currently rewriting my homework and hope you" << endl;
    cout << "will accept it late." << endl;
    cout << "Sincerely," << endl;
    cout << name;

    return 0;
}