//�d��0~9999�����Ʀr���r�p�{��
#include <iostream>
#include <string>
using namespace std;
void output(int n)
{
	string chinese[10] = { "�s","��","�L","��","�v","��","��","�m","��","�h" };
	//0~999
	//1000~9999
	if (n >= 1000)
	{
		//�L�X�d��
		cout << chinese[n / 1000] << "�a";
		//��ʦ�!=0�L�X�ʦ��
		if ((n % 1000) / 100 != 0)
			cout << chinese[(n % 1000) / 100] << "��";
		//��ʦ�=0�B�Q��!=0�L�X�s
		else if (((n % 1000) / 100 == 0 && ((n % 1000) % 100) / 10 != 0))
			cout << "�s";
		//�ʦ�!=0�L�X�Q���1
		if (((n % 1000) % 100) / 10 != 0)
			cout << chinese[((n % 1000) % 100) / 10] << "�B";
		//�ʦ��!=0�B�ʦ�=0�L�X�s
		else if (((n % 1000) / 100 != 0 && ((n % 1000) % 100) / 10 == 0))
			cout << "�s";
		//��d��,�ʦ�,�Ӧ�P��!=0�ɡA�d��,�ʦ��̥H�s���
		if (((n % 1000) / 100 == 0 && ((n % 1000) % 100) / 10 == 0) && (((n % 1000) % 100) % 10) != 0)
			cout << "�s";
		//��Ӧ�!=0�ɦL�X�Ӧ��
		if (((n % 1000) % 100) % 10 != 0)
			cout << chinese[((n % 1000) % 100) % 10];
	}
	//100~999
	else if (n >= 100)
	{
		cout << chinese[n / 100] << "��";
		if (n % 100 > 10 && n != 100)
			cout << chinese[(n % 100) / 10] << "�B";
		else if (n % 100 < 10 && n != 100)
			cout << "�s";
		if (n != 100)
			cout << chinese[(n % 100) % 10] << endl;
	}
	//10~99
	else if (n >= 10)
	{
		cout << chinese[n / 10] << "�B";
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
	cout << "�ഫ�e�G";
	cin >> input;
	cout << "�ഫ��G";
	if (input >= 100000000)
	{
		yi = input / 100000000;
		wan = (input % 100000000) / 10000;
		ge = (input % 100000000) % 10000;
		output(yi);
		cout << "��";
		output(wan);
		cout << "�U";
		output(ge);
	}
	else if (input >= 10000)
	{
		wan = input / 10000;
		ge = input % 10000;
		output(wan);
		cout << "�U";
		output(ge);
	}
	else if (input >= 0)
		output(input);
	cout << endl;
	system("PAUSE");
	return 0;
}