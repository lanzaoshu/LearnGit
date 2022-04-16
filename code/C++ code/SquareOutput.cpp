#include <iostream>
using namespace std;
int main()
{
    //选择输出模式
    int ch1;
    cout << "模式输出：" << endl;
    cout << "1:常规输出" << endl;
    cout << "2:自制法输出" << endl;
    cout << "3:破坏循环（不推荐！！！）"<<endl;
    cout << "choice:";
    cin >> ch1;

    //选择第一种
    if(ch1 == 1)
    {
        //第一种：常规
        int x,y;
        cout << "? * ?:";
        cin >> x >> y;
        for (int i1 = 1;i1 <= y;i1++)
        {
            for (int i2 = 1;i2 <= x;i2++)
            {
                cout << "x";
            }
        cout << endl;
        }
    }

    //选择第二种
    if(ch1 == 2)
    {
        //第二种：自制输出法
        int m,n;
        cout << "_*_?:";
        cin >> m >> n;
        for(int a1 = 1;a1 <= n;a1++)
        {
            for(int a2 = 1;a2 <= m;a2++)
            {
                cout << "*";
                if(a2 % m == 0)
                {
                    cout << endl;
                    break;
                }
            }
        }
    }

    //选择第三种
    if(ch1 == 3)
    {
       //安乐死法确认
       int anle,cor,CorIn;
       for (int an1 = 1;an1 <= 5;an1++)
       {
           if(an1 == 1)     cor = 2;
           if(an1 == 2)     cor = 1;
           if(an1 == 3)     cor = 7;
           if(an1 == 4)     cor = 3;
           if(an1 == 5)     cor = 1;
           cout << "您确定要运行这个程序吗？    确定："<< cor << "      结束：任意数字" << "   " << an1 << " / 5" << endl;
           cin >> CorIn;
           if (CorIn != cor)
           {
               cout << "Finish!"<<endl;
               break;
           } 
           //万恶之源
           if (an1 == 5)
           {
               for(;;)
               {
                   for(unsigned long long int an2 = 1;unsigned long long int an3 = 999999999999999999;an2++)
                   {
                       an3 -= 1;
                       if(an3 == 9)       {an3 = 999999999999999999;an2 -= 2;}
                       if(an2 <= 19)        an2 += 1;
                       cout << "&"<<an3/an2;
                   }             
               }
           }
       }

    }
    return 0;
}