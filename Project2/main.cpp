#include <iostream>

int main()
{

	double  count_of_rubles, count_of_money, commission,
	commission_rate = 0.05,
	dollars = 92.86,
	euro = 103.41,
	yuan = 13.21,
	farit = 37.00,
	yen = 0.64;
	int currency;
	char restart;

	do
	{
		std::cout << "Enter how many rubles you want to exchange: ";
		std::cin >> count_of_rubles;

		std::cout << "Currencies available for exchange:\n1. Dollars\t\t" << dollars
			<< "\n" << "2. Euro\t\t\t" << euro << "\n3. Yuan\t\t\t" << yuan
			<< "\n4. Farit \t\t" << farit << "\n5. Yen\t\t\t" << yen << "\n";

		std::cout << "Enter the currency number for exchange: ";
		std::cin >> currency;

		if (currency == 1) // dollars
		{
			count_of_money = count_of_rubles / dollars;
			commission = count_of_rubles * commission_rate;
			std::cout << "You will be able to get: " << count_of_money << " Dollars\n"
				<< "Transfer fee: " << commission << "\n"
				<< "Total: " << count_of_rubles + commission;
		}
		else if (currency == 2) // euro
		{
			count_of_money = count_of_rubles / euro;
			commission = count_of_rubles * commission_rate;
			std::cout << "You will be able to get: " << count_of_money << " Euro\n"
				<< "Transfer fee: " << commission << "\n"
				<< "Total: " << count_of_rubles + commission;
		}
		else if (currency == 3) // yuan
		{
			count_of_money = count_of_rubles / yuan;
			commission = count_of_rubles * commission_rate;
			std::cout << "You will be able to get: " << count_of_money << " Yuan\n"
				<< "Transfer fee: " << commission << "\n"
				<< "Total: " << count_of_rubles + commission;
		}
		else if (currency == 4) // farit
		{
			count_of_money = count_of_rubles / farit;
			commission = count_of_rubles * commission_rate;
			std::cout << "You will be able to get: " << count_of_money << " Farits\n"
				<< "Transfer fee: " << commission << "\n"
				<< "Total: " << count_of_rubles + commission;
		}
		else if (currency == 5) // yen
		{
			count_of_money = count_of_rubles / yen;
			commission = count_of_rubles * commission_rate;
			std::cout << "You will be able to get: " << count_of_money << " Yen\n"
				<< "Transfer fee: " << commission << "\n"
				<< "Total: " << count_of_rubles + commission << "";
		}
		else
		{
			std::cout << "Currency input error.\n";
		}

		std::cout << "\nRepeat the exchange?\n";
		std::cin >> restart;

	} while (restart == 'y' || restart == 'Y');
	return 0;
}