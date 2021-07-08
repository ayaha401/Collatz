#include <iostream>
using namespace std;

void collatz(int collatzNum)
{
	int num;
	int numb;
	string box = "";
	cout << collatzNum << "のとき＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝\n";
	while (collatzNum != 1)
	{
		if (collatzNum % 2 == 0)
		{
			// 偶数なら
			numb = collatzNum;
			collatzNum = collatzNum / 2;
			box = box + "■";
			
			cout << numb << " / 2 = " << collatzNum << "\n";
		}
		else
		{
			//奇数なら
			numb = collatzNum;
			collatzNum = collatzNum * 3 + 1;
			box = box + "□";
			
			cout << numb << " * 3 + 1 = " << collatzNum << "\n";
		}
	}
	cout << box << "\n";
	cout << "コラッツ完了＝＝＝＝＝＝＝＝＝＝＝＝＝＝\n";
}

int main()
{
	int reach;
	
	cout << "どこまでコラッツしたいか:";
	cin >> reach;

	for (int i = 1; i <= reach; i++)
	{
		collatz(i);
	}

}