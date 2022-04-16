#include <iostream>
using namespace std;
int main()
{
    int num = 0; 
    long double sum = 0,result = 0;
    cout << "项目数： " ;
    cin >> num;
    long double score1[num];
    for (int i = 1;i <= num;i++)
    {
        cout << "输入 " << i << " :";
        cin >> score1[i];
        sum += score1[i];
    }
    result = sum / num;
    cout << "平均值： " << result << endl;
    return 0;
}