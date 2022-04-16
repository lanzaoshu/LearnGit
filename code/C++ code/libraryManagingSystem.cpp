#include <iostream>
using namespace std;

 //Newbook_func
    void newBook()
    {
        string bName;
        string bWriter;
        string bType;
        string bTime;
        string bLReader;
        cout << "Name : ";
        cin >> bName;
        cout << "Writer : ";
        cin >> bWriter;
        cout << "Type:";
        cin >> bType;
        cout << "Time : ";
        cin >> bTime;
        cout << "Last reader : ";
        cin >> bLReader;
    }
    
int main()
{
    //Superintendent
    int checkCh_superitdIn = 0;
    
    {
        cout << "Welcome to library managing system!" << endl;
        cout << "Add new book : 1" << "     " << "*******"<<endl;
        cin >> checkCh_superitdIn;
        while (checkCh_superitdIn == 1)
        {
            int cancel = 765;
            cout << "Cancel : 0" << "       " << "Continue : 2" << endl;
            cin >> cancel;
            if (cancel == 0)
            {
                break;
            }
            newBook();
        }
    }
    return 0;
}
    
   