#include <iostream>
using namespace std;

void collatz(int collatzNum)
{
	int num;
	int numb;
	string box = "";
	cout << collatzNum << "�̂Ƃ�����������������������������������\n";
	while (collatzNum != 1)
	{
		if (collatzNum % 2 == 0)
		{
			// �����Ȃ�
			numb = collatzNum;
			collatzNum = collatzNum / 2;
			box = box + "��";
			
			cout << numb << " / 2 = " << collatzNum << "\n";
		}
		else
		{
			//��Ȃ�
			numb = collatzNum;
			collatzNum = collatzNum * 3 + 1;
			box = box + "��";
			
			cout << numb << " * 3 + 1 = " << collatzNum << "\n";
		}
	}
	cout << box << "\n";
	cout << "�R���b�c��������������������������������\n";
}

int main()
{
	int reach;
	
	cout << "�ǂ��܂ŃR���b�c��������:";
	cin >> reach;

	for (int i = 1; i <= reach; i++)
	{
		collatz(i);
	}

}