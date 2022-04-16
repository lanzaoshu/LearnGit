#include <fstream>
//要存储读取数据
#include <iostream>
using namespace std;

//命名空间变量
namespace space
{
    string choice_Mod = "non";
    string choice_Wel = "non";
    string password = "non";
}

//启用命名空间
using namespace space;

//管理者认证模式
int manager()
{

    return 0;
}
//访问者模式
int visitor()
{
    for (;;)
    {
        cout << "Hello,Visitor!" << endl;
        return 0;
    }
}

//管理者验证模式
int managerif(string password = "non")
{
    for (;;)
    {
        cout << "Cancel : C" << endl;
        cout << "Password : " ;
        cin >> password;
        cout << endl;
        if (password == "manager123")
        {
            cout << "Welcome!" <<endl;
            cout << endl;
            manager();
            break;
        }
        if (password == "C")
        {
            break;
        }
        else
        {
            cout << "Password wrong!" << endl;
            cout << "Try again!" << endl;
            cout << endl;
        }
    }
    return 0;
}

//主程序
int main()
{
    for (;;)
    {
        for (;;)
        {
            cout << endl << "Hi~" << endl;
            cout << "Choice mode : " << endl;
            cout << "Visitor : V" << "      " << "Manager : M" << "        " << "Shut down : SD" << endl <<endl;
            cin >> choice_Mod;
            if (choice_Mod == "V")
            {
                cout << endl;
                visitor();
                break;
            }
            if (choice_Mod == "M")
            {
                cout << endl;
                managerif();
                break;
            }
            if (choice_Mod == "SD")
            {
                for (;;)
                {
                    cout << endl;
                    cout << "Canael : C" << endl;
                    cout << "Password : ";
                    cin >> password;
                    if (password == "manager123")
                    {
                        cout << endl;
                        return 0;
                    }
                    if (password == "C")
                    {
                        break;
                    }
                    else
                    {
                        cout << endl << endl << "Password wrong!" << endl;
                        cout << "Try again!" << endl;
                    }
                }
            }
            else
            {
                cout << endl << "Invalid write!" << endl << endl;
                continue;
            }
        }
    }
    return 0;
}