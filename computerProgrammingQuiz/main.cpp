#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
using namespace std;
int main() {
    string name;
    int ans1;
    int ans2;
    int ans3;
    int score = 0;
    cout << "Please enter your name\n";
    cin >> name;
    cout << "Welcome to this Computer programming quiz " << name << "\nYou will need to answer 3 questions and get a total of 3 points to pass\n";
    cout << "| What programming language was made by Apple?\n1)Swift\n2)Python\n3)C++\n4)appleCode\n";
    cin >> ans1;
    cout << "|| Which language in the list is a front-end language\n1) C#\n2) Javascript\n3) SQL\n4) PHP\n";
    cin >> ans2;
    cout << "||| What language is used to design a webpage\n1) C\n2) Python\n3) Java\n4) CSS\n";
    cin >> ans3;
    switch (ans1) {
        case 1:
            score += 1;
            break;
        case 2 << 3 << 4:
            score -= .25;
            break;
        default:
            break;
    }
    
    switch (ans2) {
        case 2:
            score += 1;
            break;
        case 1 << 3 << 4:
            score -= .25;
            break;
        default:
            break;
    }
    
    switch (ans3) {
        case 4:
            score += 1;
            break;
        case 2 << 3 << 1:
            score -= .25;
            break;
        default:
            break;
    }
    cout << "Your score was: " << score << "\n";
}
