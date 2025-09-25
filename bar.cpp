#include <iostream>
#include <string>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

using namespace std;

string getHpBar(int hp, int maxHP, int barWidth){
    int filledLength = (hp * barWidth / maxHP);
    string bar = "[" + string(filledLength, '=') + string(barWidth - filledLength, ' ') + "]";
    return bar;
}

void clearSystem(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


int main() {
    for (int hp = 100; hp >= 0; hp -= 10) {
        clearSystem();
        cout << "HP: " << hp << " " << getHpBar(hp, 100, 20) << endl;
        Sleep(1000);
    }
    return 0;
}
