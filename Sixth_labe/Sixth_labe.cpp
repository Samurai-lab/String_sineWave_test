#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void cycleDisplayHelper(char s[], int j, int stopNum, int i) {
    for (; j <= stopNum; j++) {
        cout << s[i + j];
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    char s [255];
    puts("Введите текст не более чем из 255 символов: \n");
    cin.getline(s, 255, '.');
    int count = 2;

    //firstLine
    for (int i = 8; i < strlen(s); i += 18) {
        cout << "\t";
        cycleDisplayHelper(s, 1, 4, i);
        cout << "\t";
        count++;
    }
    cout << endl;
    cout << "      ";
    //secondLine
    for (int i = 6, countHelper = 1; i < strlen(s) && count > countHelper; i += 8) {
        int j = 1;
        for (; j < 3; j++) {
            cout << s[i + j];
        }
        int const jHelper = j;
        cout << "    ";
        for (j += 4; j < jHelper + 6; j++) {
            if (i + j < strlen(s)) {
                cout << s[i + j];
            }
        }
        cout << "\t";
        cout << "      ";
        i += 10;
        countHelper++;
    }
    cout << endl;
    cout << "     ";

    //thirdLine
    for (int i = 5, countHelper = 1; i < strlen(s) && count > countHelper; i += 7) {
        int j = 1;
        for (; j < 2; j++) {
            cout << s[i + j];
        }
        int const jHelper = j;
        cout << "        ";

        for (j += 8; j < jHelper + 9; j++) {
            if (i + j < strlen(s)) {
                cout << s[i + j];
            }
        }
        cout << "\t";
        cout << "     ";
        i += 11;
        countHelper++;
    }
    cout << endl;
    cout << "    ";

    //fourthLine
    for (int i = 3, countHelper = 1; i < strlen(s) && count > countHelper; i += 7) {
        int j = 1;
        for (; j < 3; j++) {
            cout << s[i + j];
        }
        int const jHelper = j;
        cout << "        ";
        for (j += 10; j < jHelper + 12; j++) {
            if (i + j < strlen(s)) {
                cout << s[i + j];
            }
            
        }
        cout << "    ";
        i += 11;
        countHelper++;
    }
    cout << endl;

    //fifthLine
    for (int i = 0; i < strlen(s); i += 17) {
        cycleDisplayHelper(s, 0, 3, i);
        cout << "\t\t";
        i++;
    }
}
