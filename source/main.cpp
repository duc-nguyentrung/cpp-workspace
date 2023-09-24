#include "iostream"
using namespace std;

int main(){
    string name;
    cout << "Hi bro!, what's your name?\n";
    cout << "...'s answer: ";
    cin >> name;
    cout << "Hello " + name + ". Nice to meet you!\n";    
    return 0;
}