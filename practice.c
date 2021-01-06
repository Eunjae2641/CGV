#include "Çì´õ.h"

void gotoxy(int, int);
void Keyboard_screen(int b, int c);

int main() {
    int b = 10, c = 5;
    Keyboard_screen(b, c);
}

void Keyboard_screen(int b, int c) {
    char d;
    gotoxy(b, c);
    d = _getch();
    if (d == -32) {
        d = _getch();
        switch (d) {
        case 75:
            gotoxy(b--, c);
            break;
        case 77:
            gotoxy(b++, c);
            break;
        case 78:
            gotoxy(b, c--);
            break;
        case 80:
            gotoxy(b, c++);
            break;
        }
    }
   /* else if (d == ENTER) {

    }*/
}

