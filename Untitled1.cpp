#include<iostream>
using namespace std;
int main()
{
	int n, i, s = 0;
	int a[i];
	do{
	cout << "Nhap n: ";
	cin >> n;
}while(n>0);
	for (i = 1; i<=n; i++)
	{
		cout << "Nhap phan tu thu "<<i<<": ";
		cin >> a[i];
	}
	i=1;
	while(i<=n)
	{
		s=s+a[i];
		i++;
	}
	cout << s;
	return 0;
}
