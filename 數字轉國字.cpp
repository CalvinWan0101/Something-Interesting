//絛瞅0~9999货计锣瓣祘Α
#include <iostream>
#include <string>
using namespace std;
void output(int n)
{
	string chinese[10] = { "箂","滁","禠","把","竩","ヮ","嘲","琺","","╤" };
	//0~999
	//1000~9999
	if (n >= 1000)
	{
		//
		cout << chinese[n / 1000] << "";
		//讽κ!=0κ计
		if ((n % 1000) / 100 != 0)
			cout << chinese[(n % 1000) / 100] << "ㄕ";
		//讽κ=0!=0箂
		else if (((n % 1000) / 100 == 0 && ((n % 1000) % 100) / 10 != 0))
			cout << "箂";
		//κ!=0计1
		if (((n % 1000) % 100) / 10 != 0)
			cout << chinese[((n % 1000) % 100) / 10] << "珺";
		//κ计!=0κ=0箂
		else if (((n % 1000) / 100 != 0 && ((n % 1000) % 100) / 10 == 0))
			cout << "箂";
		//讽,κ,!=0,κㄢ箂ボ
		if (((n % 1000) / 100 == 0 && ((n % 1000) % 100) / 10 == 0) && (((n % 1000) % 100) % 10) != 0)
			cout << "箂";
		//讽!=0计
		if (((n % 1000) % 100) % 10 != 0)
			cout << chinese[((n % 1000) % 100) % 10];
	}
	//100~999
	else if (n >= 100)
	{
		cout << chinese[n / 100] << "ㄕ";
		if (n % 100 > 10 && n != 100)
			cout << chinese[(n % 100) / 10] << "珺";
		else if (n % 100 < 10 && n != 100)
			cout << "箂";
		if (n != 100)
			cout << chinese[(n % 100) % 10] << endl;
	}
	//10~99
	else if (n >= 10)
	{
		cout << chinese[n / 10] << "珺";
		if (n % 10 != 0)
			cout << chinese[n % 10];
	}
	//0~9
	else if (n >= 0)
		cout << chinese[n] << endl;
}
int main(int argc, char** argv)
{
	int yi, wan, ge;
	int input;
	cout << "锣传玡";
	cin >> input;
	cout << "锣传";
	if (input >= 100000000)
	{
		yi = input / 100000000;
		wan = (input % 100000000) / 10000;
		ge = (input % 100000000) % 10000;
		output(yi);
		cout << "货";
		output(wan);
		cout << "窾";
		output(ge);
	}
	else if (input >= 10000)
	{
		wan = input / 10000;
		ge = input % 10000;
		output(wan);
		cout << "窾";
		output(ge);
	}
	else if (input >= 0)
		output(input);
	cout << endl;
	system("PAUSE");
	return 0;
}