#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int function(string& str, int length)
{
    if (str.length() == length) throw 10;
    else return str.length();
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str = "";
    int length = 0;

    cout << "Введите запретную длину: ";
    cin >> length;

    while (0 == 0)
    {
        try {
            cout << "Введите слово: ";
            cin >> str;

            cout << "Длинна слова \"" + str + "\" равна " + to_string(function(str, length)) << endl;
        }
        catch (int err)
        {
            if (err == 10)
            {
                cout << "Вы ввели слово запретной длины! До свидания" << endl;
                break;
            }
        }

    }

}