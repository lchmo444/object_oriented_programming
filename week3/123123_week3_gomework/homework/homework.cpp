#include <iostream>
#include <string>		//C++ standard string class
using namespace std;

//횟수를 5번으로 제한한다.
//잔액부족시 1회 허용한다.


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
				cout <<"현재 잔액은 "<<Money << endl;
			}
			if(Money<0)
			{
				cout <<"현재 잔액은 "<<Money;
				cout<<" 잔액이 부족합니다"<<endl;
			}
		}
		void submoney2()
		{
			int tot;
			tot= Money-3000;
			if(Money>=0)
			{
				Money=tot;
				cout <<"현재 잔액은 "<<Money << endl;
			}
			if(Money<0)
			{
				cout <<"현재 잔액은 "<<Money;
				cout<<" 잔액이 부족합니다"<<endl;
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
		cout << "버스를 이용하면 1을 택시를 이용하면 2번을 입력하세요: ";
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
		cout << "버스를 이용하면 1을 택시를 이용하면 2번을 입력하세요: ";
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
		cout << "버스를 이용하면 1을 택시를 이용하면 2번을 입력하세요: ";
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
		cout << "버스를 이용하면 1을 택시를 이용하면 2번을 입력하세요: ";
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
		cout << "버스를 이용하면 1을 택시를 이용하면 2번을 입력하세요: ";
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