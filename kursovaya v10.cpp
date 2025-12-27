
#include <iostream>
#include <cstdlib>

using namespace std;

void clear() {
    system("cls");
}
int main()
{
    int exit;
    setlocale(LC_ALL, "Russian");
    while (true) {
        cout << "КУРСОВАЯ МЕНЮ\n\n";

        cout << "1. ТИПЫ ДАННЫХ И ИХ ВНУТРЕННЕЕ ПРЕДСТАВЛЕНИЕ В ПАМЯТИ\n\n";
        cout << "2. ОДНОМЕРНЫЕ СТАТИЧЕСКИЕ МАССИВЫ\n\n";
        cout << "3. ДВУМЕРНЫЕ СТАТИЧЕСКИЕ МАССИВЫ. УКАЗАТЕЛИ\n\n";
        cout << "4. ТЕКСТОВЫЕ СТРОКИ\n\n";
        cout << "Выбор: ";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            clear();
            system("C:\\Users\\дима\\source\\repos\\first_pere\\x64\\Debug\\first_pere.exe");
            
            cout << "0. Выйти\n\n";
            cin >> exit;
            clear();
            break;
        case 2:
            clear();
            system("C:\\Users\\дима\\source\\repos\\laba2\\x64\\Debug\\laba2.exe");
            
            cout << "0. Выйти\n\n";
            cin >> exit;
            clear();
            break;
        case 3:
            clear();
            system("C:\\Users\\дима\\source\\repos\\third\\x64\\Debug\\third.exe");
            cout << "0. Выйти\n\n";
            cin >> exit;
            clear();
            break;
        case 4:
            clear();
            system("C:\\Users\\дима\\source\\repos\\4etvertoe\\x64\\Debug\\4etvertoe.exe");
            cout << "0. Выйти\n\n";
            cin >> exit;
            clear();
            break;
        default:
            break;
        }
    }

   
    return 0;
}

