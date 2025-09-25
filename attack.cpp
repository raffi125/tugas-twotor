#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    // attack random loop sampai hp habis dari 100 ke 0
    int hp = 100;
    while (hp > 0) {
        int damage = rand() % 20 + 1;  // random damage between 1 and 20
        cout << "You dealt " << damage << " damage!, HP: " << hp << endl;
        Sleep(1000);
        hp -= damage;
    }
    cout << "Enemy defeated!" << endl;
    return 0;
}