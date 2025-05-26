/*Преобразовать строку так, чтобы все цифры в ней были
отсортированы по убыванию.*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    system("cls");
    string str;
    string str1 = "";
    cout << "Введите строку: ";
    getline(cin, str);
    string str2 = "";
    string str3 = "";
    string str4 = "";
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str1 += str[i];
        }
        else
        {
            for (char c : str1)
            {
                if (isdigit(c))
                {
                    str2+=str1;
                    str2 += " ";
                }
            }
            str1 = "";
        }
    }
    for (int i = 0; i <= str2.length(); i++)
    {
        if (str2[i] != ' ')
        {
            str4 += str2[i];
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < str2.size(); ++i)
    {
        for (int j = 0; j < str2.size() - i - 1; ++j)
        {
            if (str2[j] != ' ')
            {
                str3 += str2[j];
            }
            else
            {
                if (str4 < str3)
                {
                    
                }
            }
        }
    }
    
    int g = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str1 += str[i];
        }
        else
        {
            for (char c : str1)
            {
                if (isdigit(c))
                {
                    str.erase(i, str2[g]);
                    g++;
                }
            }
            str1 = "";
        }
    }
    cout << "Результат: " << str << endl;
    return 0;
}

