#include <iostream>
#include <math.h>
using namespace std;

int main()
	{
		float a,b,c;
		if (a==0) cout<<"Day khong phai phuong trinh bac hai!";
		else
			{
				float D = pow(b,2)-4*a*c;
				if (D<0) cout<<"Phuong trinh vo nghiem.";
				else if (D==0)
					{
						float x = (-b)/(2*a);
						cout<<"Phuong trinh co nghiem kep: "<<"%.2f%"<<x;
					}
				else
					{
						float x1 = (-b+sqrt(D))/(2*a);
						float x2 = (-b-sqrt(D))/(2*a);
						cout<<"Phuong trinh co hai nghiem phan biet:\n";
						cout<<"%.2f%"<<x1<<"\n";
						cout<<"%.2f%"<<x2<<"\n";
					}
			}
		return 0;
	}
