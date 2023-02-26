#include "Header.h"
void main()
{
	Product* p_d = new Adapter_dollar(new Dollar);

	Product* p_e = new Adapter_euro(new Euro);

	int quantity_int;
	double quantity_double;
	double price;
	short key;
	bool q;

	do
	{
		system("cls");
		cout << "Pick the product:\n\n1 - bag, 2 - watch, 3 - juice" << endl << endl;
		cin >> key;
		switch (key)
		{
		case 1:
		{

			do
			{
				system("cls");
				price = 250.56;
				cout << "The price of the bag = " << price << " dollar" << endl << endl;
				cout << "Enter the quantity of bags you would like to get" << endl << endl;
				try
				{
					cin >> quantity_int;
					if (quantity_int < 0)
						throw exception("Error");
				}
				catch (exception& str)
				{
					system("cls");
					cout << str.what() << endl;
					system("pause");
				}
			} while (quantity_int < 0);
			system("cls");
			cout << "Price for " << quantity_int << " bag(s) = " << p_d->Get_cost_int(quantity_int, price) << " rub" << endl;

		} break;
		case 2:
		{
			do
			{
				system("cls");
				price = 300.33;
				cout << "The price for 1 watch = " << price << " euro" << endl << endl;
				cout << "Enter how many watches you want to buy" << endl << endl;
				try
				{
					cin >> quantity_int;
					if (quantity_int < 0)
						throw exception("Error");
				}
				catch (exception& str)
				{
					system("cls");
					cout << str.what() << endl;
					system("pause");
				}
			} while (quantity_int < 0);
			system("cls");
			cout << "Price for " << quantity_int << " watch(es) = " << p_e->Get_cost_int(quantity_int, price) << " rub" << endl;

		} break;
		case 3:
		{
			do
			{
				system("cls");
				price = 1.60;
				cout << "Price for 1 liter of juice = " << price << " dollar" << endl << endl;
				cout << "Enter how many litres you would like to buy" << endl << endl;
				try
				{
					cin >> quantity_double;
					if (quantity_int < 0)
						throw exception("Error");
				}
				catch (exception& str)
				{
					system("cls");
					cout << str.what() << endl;
					system("pause");
				}
			} while (quantity_double < 0);
			system("cls");
			cout << "Price for " << quantity_double << " litres of juice = " << p_d->Get_cost_double(quantity_double, price) << " rub" << endl;

		} break;
		default:
			cout << "Error" << endl;
			break;
		}
		cout << "\nPress 1 to continue, press 0 to break\n";
		cin >> q;
	} while (q);


}