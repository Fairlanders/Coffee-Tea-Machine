#include "pch.h"
#include <iostream>
#include "ConsoleApplication1.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	
	lel:
	cout << "Please choose your language./// Lutfen dilinizi seciniz.\n";
	cout << "Turkce icin lutfen ikiye basiniz.\n";
	cout << "For English please press two.\n"; 
	int dil;
	cin >> dil;
	if (dil == 1)
	{
		int i;
		int a;
	yeniden1:
		cout << "Lutfen para girisi yapiniz.";
		cout << endl;
		cin >> a;
		if (a <= 1)
		{
			cout << "Maalesef, bir urun alacak kadar paraniz yok." << endl;
			this_thread::sleep_for(std::chrono::seconds(2));
			goto yeniden1;
		}
		else (a >= 2);
		{
			cout << "Lutfen hangi urunleri alacaginizi seciniz.";
			cout << endl;
		}
		cout << endl;
	yeniden:
		cout << "Cay icin 1,(2 Turk Lirasi)\n";
		cout << "Kahve icin 2 giriniz.(8 Turk Lirasi)\n";
		cin >> i;

		if (i == 1)
		{
			if (a >= 2)
			{
				cout << "Kalan paraniz " << a - 2 << endl;
				int b = a - 2;
				cout << "Cayiniz hazirlaniyor. Lutfen bekleyiniz...";
				cout << endl;
				cout << endl;
				this_thread::sleep_for(chrono::seconds(2));
			}
		}
		else if (i == 2)
		{
			if ((a - 8 >= 0))
			{
				cout << "Kalan paraniz " << a - 8 << endl;
				cout << "Kahveniz hazirlaniyor. Lutfen bekleyiniz...";
				cout << endl;
				cout << endl;
				this_thread::sleep_for(chrono::seconds(2));
			}
			else
			{
				cout << "Paraniz bu urunu almak icin yeterli degil. Lutfen yeni para girisi yapiniz.\n";
				goto yeniden1;
			}
		}
		else if (i > 2)
		{
			cout << "Ne girdin kardesim anlayamadim?";
			cout << endl;
			cout << endl;
			this_thread::sleep_for(std::chrono::seconds(2));
			goto yeniden;
		}
		else if (i <= 0)
		{
			cout << "La duzgun gir su sayiyi ya.";
			cout << endl;
			cout << endl;
			this_thread::sleep_for(std::chrono::seconds(2));
			goto yeniden;
		}
		if ((a - 2 >= 6) && (a - 8 >= 6))
		{
			cout << "Yanina atistirmalik ister miydiniz?";
			cout << endl;
		omegaxd:
			cout << "Istediginiz atistirmaligi seciniz...\n";
			cout << "Karam icin 1;(6 Turk Lirasi)\n";
			cout << "Tutku icin 2;(8 Turk Lirasi)\n";
			cout << "Bir sey istemiyorsaniz 3'e basiniz.\n";
			int atistirmalik;
			cin >> atistirmalik;
			if ((atistirmalik == 1) && (i == 1))
			{
				if ((a - 2) >= 6)
				{
					cout << "Paraniz kaldi: " << a - 2 - 6 << endl;
					cout << "Karaminiz veriliyor...\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
			}
			else if ((atistirmalik == 1) && (i == 2))
			{
				if ((a - 8) >= 6)
				{
					cout << "Paraniz kaldi: " << a - 8 - 6 << endl;
					cout << "Karaminiz veriliyor...\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
			}
			else if ((atistirmalik == 2) && (i == 1))
			{
				if ((a - 2) >= 8)
				{
					cout << "Paraniz kaldi: " << a - 2 - 8 << endl;
					cout << "Tutkunuz veriliyor...\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
				else if ((a - 8) < 8)
				{
					cout << "Paraniz yeterli degildir.\n";
					goto omegaxd;
				}
			}
			else if ((atistirmalik == 2) && (i == 2))
			{
				if ((a - 8) >= 8)
				{
					cout << "Paraniz kaldi: " << a - 8 - 8 << endl;
					cout << "Tutkunuz veriliyor...\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
				else if ((a - 8) < 8)
				{
					cout << "Paraniz yeterli degildir.\n";
					goto omegaxd;
				}
			}
			else if (atistirmalik == 3)
			{
				cout << "Iceceginiz veriliyor...\n";
				this_thread::sleep_for(std::chrono::seconds(2));
			}
			else if ((atistirmalik <= 0) || (atistirmalik >= 4))
			{
				cout << "Lutfen dogru bir deger giriniz." << endl;
				this_thread::sleep_for(std::chrono::seconds(2));
				goto omegaxd;
			}
		}
		else
		{
			cout << "Yeniden bekleriz.\n";
		}
	}
	else if (dil == 2)
	{

		int i;
		int a;
		yeniden2:
		cout << "Please insert cash.";
		cout << endl;
		cin >> a;
		if (a <= 1)
		{
			cout << "Unfortunately, you don't have enough cash to purchase a product." << endl;
			this_thread::sleep_for(std::chrono::seconds(2));
			goto yeniden2;
		}
		else (a >= 2);
		{
			cout << "Please choose which products you are going to purchase.";
			cout << endl;
		}
		cout << endl;
	yeniden3:
		cout << "For tea 1,(2 Dollars)\n";
		cout << "For coffee press 2,(8 Dollars)\n";
		cin >> i;

		if (i == 1)
		{
			if (a >= 2)
			{
				cout << "Your change " << a - 2 << endl;
				int b = a - 2;
				cout << "Preparing your tea, please wait...";
				cout << endl;
				cout << endl;
				this_thread::sleep_for(chrono::seconds(2));
			}
		}
		else if (i == 2)
		{
			if ((a - 8 >= 0))
			{
				cout << "Your change " << a - 8 << endl;
				cout << "Preparing your coffee, please wait...";
				cout << endl;
				cout << endl;
				this_thread::sleep_for(chrono::seconds(2));
			}
			else
			{
				cout << "Cash you put is not enough to buy this product. Please insert more money to buy this product.\n"; // Çık ekranı getir! hem türkçede hem ingilizcede
				goto yeniden1;
			}
		}
		else if (i > 2)
		{
			cout << "I couldn't understand what number you just typed.";
			cout << endl;
			cout << endl;
			this_thread::sleep_for(std::chrono::seconds(2));
			goto yeniden3;
		}
		else if (i <= 0)
		{
			cout << "Please type a proper number.";
			cout << endl;
			cout << endl;
			this_thread::sleep_for(std::chrono::seconds(2));
			goto yeniden3;
		}
		if ((a - 2 >= 6) && (a - 8 >= 6))
		{
			cout << "Would you like some snacks?";
			cout << endl;
		omegaxdxd:
			cout << "Please choose what snack you are going to have.\n";
			cout << "For 'Karam' 1;(6 Dollars)\n";
			cout << "For 'Tutku' 2;(8 Dollars)\n";
			cout << "If you would like to exit, please type 3.\n";
			int atistirmalik;
			cin >> atistirmalik;
			if ((atistirmalik == 1) && (i == 1))
			{
				if ((a - 2) >= 6)
				{
					cout << "Your change: " << a - 2 - 6 << endl;
					cout << "Dropping your 'Karam'\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
			}
			else if ((atistirmalik == 1) && (i == 2))
			{
				if ((a - 8) >= 6)
				{
					cout << "Your change: " << a - 8 - 6 << endl;
					cout << "Dropping your 'Tutku'\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
			}
			else if ((atistirmalik == 2) && (i == 1))
			{
				if ((a - 2) >= 8)
				{
					cout << "Your change: " << a - 2 - 8 << endl;
					cout << "Dropping your 'Tutku'\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
				else if ((a - 8) < 8)
				{
					cout << "You do not have enough cash inserted.\n";
					goto omegaxdxd;
				}
			}
			else if ((atistirmalik == 2) && (i == 2))
			{
				if ((a - 8) >= 8)
				{
					cout << "Your change: " << a - 8 - 8 << endl;
					cout << "Dropping your 'Tutku'\n";
					this_thread::sleep_for(std::chrono::seconds(2));
				}
				else if ((a - 8) < 8)
				{
					cout << "You do not have enough cash inserted.\n";
					goto omegaxdxd;
				}
			}
			else if (atistirmalik == 3)
			{
				cout << "Preparing your drink...\n";
				this_thread::sleep_for(std::chrono::seconds(2));
			}
			else if ((atistirmalik <= 0) || (atistirmalik >= 4))
			{
				cout << "Please type a proper value." << endl;
				this_thread::sleep_for(std::chrono::seconds(2));
				goto omegaxdxd;
			}
		}
		else
		{
			cout << "Would like to see you again.\n";
		}

	}
	else if ((dil >= 2) || (dil <= 0))
	{
		cout << "Please type a proper value\n";
		goto lel;
	}
	system("pause");
}
