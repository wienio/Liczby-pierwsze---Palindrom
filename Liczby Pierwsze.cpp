#include <iostream>
#include <math.h>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	cout<<"Program wypisujacy PALINDROM dwoch nastepnych liczb pierwszych pomnozonych przez siebie do podanego zakresu!\n";
	cout<<"Podaj koncowa liczbe do ktorej mam sprawdzac: ";
	int koniec;
	cin>>koniec;
	
	unsigned long long int zmienna=2;
	bool a;
	int ilosc_liczb=0;
	unsigned long long int liczba1,liczba2;
	unsigned long long int wynik;

	
	while(zmienna!=koniec+1)
	{
		a=true;
		
		for(int i = 2 ; i <=sqrt(zmienna) ; i++)
		{
			if(zmienna%i==0)
			{
				a=false;
				break;
			}
		}
		
		if(a && ilosc_liczb%2==0)
		{
			liczba1=zmienna;
		}
		
		if(a && ilosc_liczb%2==1)
		{
			liczba2=zmienna;
		}
		
		wynik=liczba1*liczba2;
		
		if(a)
		{
			ilosc_liczb++;
			
			ostringstream ss;
			ss<<wynik;
			string str=ss.str();
			int dlugosc=str.length();
			
			for(int j=0; j<(str.length()/2)+1 ; j++)
			{
				if(str[j]!=str[dlugosc-1])
				{
					a=false;
					break;
				}
				dlugosc--;
			}
		}
		
		if(a)
		{
			cout<<endl<<liczba1<<"*"<<liczba2<<" daje PALINDROM, ktorego wynikiem jest: "<<wynik<<endl;
		}
		
		
		
		zmienna++;
	}
	
	
	
	cout<<endl<<endl<<endl<<"Ilosc liczb pierwszych do tego zakresu wynosi: "<<ilosc_liczb;
	
	return 0;
}
