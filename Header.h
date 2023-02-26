#include <iostream>
using namespace std;

class Dollar
{
public:
	float Convert()
	{
		float dollar = 76.02;
		return dollar;
	}
};

class Euro
{
public:
	float Convert()
	{
		float euro = 80.18;
		return euro;
	}
};
class Product
{
public:
	virtual ~Product() {}
	virtual double Get_cost_int(int quantity, double price) = 0;
	virtual double Get_cost_double(double quantity, double price) = 0;
};

class Adapter_dollar : public Product
{
private:
	Dollar* p_product;

public:
	Adapter_dollar(Dollar* p)
	{
		p_product = p;
	}

	~Adapter_dollar()
	{
		delete p_product;
	}
	double Get_cost_int(int quantity, double price) override
	{
		return (double)(p_product->Convert() * quantity * price);
	}
	double Get_cost_double(double quantity, double price) override
	{
		return (double)(p_product->Convert() * quantity * price);
	}

};

class Adapter_euro : public Product
{
private:
	Euro* p_product;

public:
	Adapter_euro(Euro* p)
	{
		p_product = p;
	}

	~Adapter_euro()
	{
		delete p_product;
	}
	double Get_cost_int(int quantity, double price) override
	{
		return (double)(p_product->Convert() * quantity * price);
	}
	double Get_cost_double(double quantity, double price) override
	{
		return (double)(p_product->Convert() * quantity * price);
	}

};
