// 123.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
//#include <string>

using namespace std;

void close()
{
    system("CLS");
    cout << "Closing the program..." << endl;
    exit(0);
}

int about()
{
    system("CLS");
    cout << "About program: " << endl
        << "Version: 1.0" << endl;

    /*

    string rt = "restart";
    return rt;

    */

    return 0;
}

void exit()
{
    system("CLS");
    cout << "Exit the program" << endl;
    exit(0);
}

void error_1()
{
    system("CLS");
    cerr << "ERROR: "
        << "Choose only from the supplied numbers" << endl; // -- ERROR 1
}

void choose()
{
    int input = 0;
    cout << "Choose a number:" << endl
        << "1. Close" << endl
        << "2. About" << endl
        << "3. Exit" << endl;
    cin >> input;
    switch (input)
    {
    case 1:
        close();
        break;
    case 2:
        about();
        break;
    case 3:
        exit();
        break;
    default:
        error_1();
        break;
    }

}

int main()
{
restart:
    choose();
    if (about() == 0)
    {
        //system("CLS");
        goto restart;
    }
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
