#include <iostream>
#include <string>		//C++ standard string class
using namespace std;

//Ƚ���� 5������ �����Ѵ�.
//�ܾ׺����� 1ȸ ����Ѵ�.


class transportation_card
	{
	public:
		//constructor initializes Name with string supplied as argument
		explicit transportation_card(string name,int money) :Name(name),Money(money)		//member initializer to initialize Name
		{}		//empty body.animal constructor
		/*
		void setName(string name)
		{
			Name=name;
		}*/
		void submoney1()
		{
			int tot;
			tot= Money-1100;
			if(Money>=0)
			{
				Money=tot;
				cout <<"���� �ܾ��� "<<Money << endl;
			}
			if(Money<0)
			{
				cout <<"���� �ܾ��� "<<Money;
				cout<<" �ܾ��� �����մϴ�"<<endl;
			}
		}
		void submoney2()
		{
			int tot;
			tot= Money-3000;
			if(Money>=0)
			{
				Money=tot;
				cout <<"���� �ܾ��� "<<Money << endl;
			}
			if(Money<0)
			{
				cout <<"���� �ܾ��� "<<Money;
				cout<<" �ܾ��� �����մϴ�"<<endl;
			}
		}
		void addmoney(int add) 
		{
			Money = Money+add;
		}
	private:
		int Money;
		string Name;
};

int main()
{
	int aa;
	int count =0;
	string cardname;
	int input;

	transportation_card AAA("aaa", 5000);
	

	if(count<5)
	{
		cout << "������ �̿��ϸ� 1�� �ýø� �̿��ϸ� 2���� �Է��ϼ���: ";
		cin >> aa;
		if(aa<2)
		{
			AAA.submoney1();
		}
		if(aa>=2)
		{
			AAA.submoney2();
		}
	}

	if(count<5)
	{
		cout << "������ �̿��ϸ� 1�� �ýø� �̿��ϸ� 2���� �Է��ϼ���: ";
		cin >> aa;
		if(aa<2)
		{
			AAA.submoney1();
		}
		if(aa>=2)
		{
			AAA.submoney2();
		}
	}
	if(count<5)
	{
		cout << "������ �̿��ϸ� 1�� �ýø� �̿��ϸ� 2���� �Է��ϼ���: ";
		cin >> aa;
		if(aa<2)
		{
			AAA.submoney1();
		}
		if(aa>=2)
		{
			AAA.submoney2();
		}
	}
	if(count<5)
	{
		cout << "������ �̿��ϸ� 1�� �ýø� �̿��ϸ� 2���� �Է��ϼ���: ";
		cin >> aa;
		if(aa<2)
		{
			AAA.submoney1();
		}
		if(aa>=2)
		{
			AAA.submoney2();
		}
	}
	if(count<5)
	{
		cout << "������ �̿��ϸ� 1�� �ýø� �̿��ϸ� 2���� �Է��ϼ���: ";
		cin >> aa;
		if(aa<2)
		{
			AAA.submoney1();
		}
		if(aa>=2)
		{
			AAA.submoney2();
		}
	}







	return 0;
}