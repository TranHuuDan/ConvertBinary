#include<iostream>
#define MAX 100

using namespace std;

void ConvertBinary(int &n)
{
	int bin[MAX];
	int i = 0;
	while (n > 0)
	{
		bin[i] = n % 2; i++;
		n /= 2;

	}
	for (int j = i-1; j >=0; j--)
	{
		cout << bin[j];
	}
	cout << endl;
//ok
}
int main()
{
	int n;
	cout << "Nhap so nguyen duong ban muon chuyen:";
	cin >> n;
	ConvertBinary(n);
	return 0;
}