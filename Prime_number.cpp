#include <iostream>
#include <math.h>
using namespace std;
			//Câu 5
int main()
{
	unsigned int n;
	cout<<"So nguyen duong n: "; cin>>n; cout<<"\n";
	if (n <= 1) cout<<n<<" khong la so nguyen to";
	else if (n == 2) cout<<n<<" la so nguyen to";
	else if (n%2 == 0) cout<<n<<" khong la so nguyen to";
	else
		{
			double m = sqrt(n);
			if ((int)m == m) cout<<n<<" khong la so nguyen to";
			else if (m < 3) cout<<n<<" la so nguyen to";
			else
				{
					bool check_prime = true;
					for (int i = 3; i <= (int)m; i += 2)
						{
							if (n%i == 0)
								{
									cout<<n<<" khong la so nguyen to";
									check_prime = false;
									break;
								}
						}
					if (check_prime) cout<<n<<" la so nguyen to";
				}
		}
}
