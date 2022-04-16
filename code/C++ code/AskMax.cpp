#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "数值个数： ";
	cin >> num;
	int math[num],max1 = 0;
	for(int i = 1;i <= num;i++)
	{
		cout <<  "数值" <<  i << "： ";
		cin >> math[num];	
		if(math[num] > max1)	max1 = math[num];
	}
	cout << "最大值：" << max1 << endl;
	return 0;
}