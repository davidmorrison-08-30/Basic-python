#include <iostream>
#include <math.h>
using namespace std;

bool nhohon100(int n)
{
	if (0<n<100) return true;
	else return false;	
}

bool checkprime(int n)
{
	if (n <= 1) return false;
	else if (n == 2) return true;
	else if (n%2 == 0) return false;
	else
		{
			double m = sqrt(n);
			if ((int)m == m) return false;
			else if (m < 3) return true;
			else
				{
					bool check_prime = true;
					for (int i = 3; i <= (int)m; i += 2)
						{
							if (n%i == 0)
								{
									check_prime = false;
									break;
								}
						}
					return check_prime;
				}
		}
}

int main()
{
	int N;
	cout<<"Nhap so nguyen duong N nho hon 100: "; cin>>N; cout<<"\n";
	while (not nhohon100(N))
		{
			cout<<"Can so nguyen duong nho hon 100! Vui long nhap lai N: ";
			cin>>N; 
			cout<<"\n";
		}
	cout<<"Ket qua la: "<<"\n";
	if (N == 1) cout<<"Khong co so nguyen to nao nho hon "<<N;
	else if (N==2) cout<<2;
	else
		{
			for (int x=0; x<N; x++)
				{
					if (checkprime(x)) cout<<x<<"\n";
				}
		}
}
