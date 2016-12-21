#include "stdafx.h"
#include <iostream> 
#include <conio.h>

using namespace std;

class Digital_elements
   {
    public:
	virtual double signal()
	{ 
	  return 0;
	}
	virtual int get()
	{
	  return 0;
	}
   };

class Nounters : public Digital_elements
{
public:

	virtual double signal()
	{
	   return 0;
	}
	virtual int get()
	{
           return 0;
	}
};

class Binary_counters : public Nounters
{
public:
	int get()
	
	{
		cout << "Signal number coming inlet :";
		cin >> number_sign_input;
		cout << "coefficient of binary counter :";
		cin >> coef_bin_count;
		volume = number_sign_input*coeficient_bin_count;
		return 0;
	}
	double signal()
	{
		return volume;
	}
private:
	int number_sign_input, coefficient_bin_count, volume;
};

class Binary_decimal_counters : public Nounters
{
public:
	int get()
	{
	cout << "Signal number coming inlet :";
	cin >> number_sign_input1;
	cout << "coefficient of binary counter :";
	cin >> coefficient_bin_des_count;
	volume1 = number_sign_input1*coef_bin_des_count;
		return 0;
	}
   double signal()
	{
		return volume1;
	}
   private:
	   int number_sign_input1, coefficient_bin_des_count, volume1;
};

class  reversing_counters : public Nounters
{
public:
	int get()
	{
		cout << "Signal number coming inlet :";
		cin >> number_sign_input;
		cout << "Coefficient of reversible counter :";
		cin >> coefficient_rev_count;
		cout << "Entrances signals :";
		cin >> view_standings;
		Suma = (number_sign_input*coefficient_rev_count)*view_standings;
		return 0;
	}
	double signal()
	{
		return sum;
	}
private:
	int number_sign_input, coefficient_rev_count, view_standings, sum;
};

class Triggers : Digital_elements
{
public:
	virtual double signal()
	{
		return 0;
	}
	virtual int get()
	{
		return 0;
	}
};

class D_triggers : public Triggers
	{
	public:
		int get()
		{
			cout << "delay signal at the input :";
			cin >> number_sign_input;
			cout << "Coefficient of delay in D-trigger :";
			cin >> coefficient_rev_count;
			cout << "Number of entrances in trigger :";
			cin >> kil_vxody;;
			Suma = (number_sign_input*coefficient_rev_count)*kil_vxody;;
			return 0;
		}
		double signal()
		{
			return sum;
		}
	private:
		int number_sign_input, coefficient_rev_count, kil_vxody, sum;
	};

	class RS_triggers : public Triggers
	{
	public:
		int get()
		{
		        cout << "delay signal at the input :";
			cin >> number_sign_input;
			cout << "delay signals in RS-trigger :";
			cin >> coefficient_rev_count;
			cout << "Number of entrances in trigger :";
			cin >> kil_vxody;;
			Suma = (number_sign_input*coefficient_rev_count)*kil_vxody;;
			return 0;
			
		}
		double signal()
		{
			return sum;
		}
	private:
		int number_sign_input, coeficient_rev_count, kil_vxody, sum;
	};

	class Registers : public Digital_elements
	{
	public:
		virtual double signal()
		{
			return 0;
		}
		virtual int get()
		{
			return 0;
		}
	};

	class multiplexers : public Registers
	{
	public:
		int get()
		{
			cout << " Number of entrances in multiplexor :";
			cin >> number_sign_input;
			cout << "Number of exits in multiplexor :";
			cin >> coefficient_rev_count;
			cout << " Enter binary number :";
			cin >> kil_vxody;;
			return 0;
		}
		double signal()
		{
			return 0;
		}
	private:
		int number_sign_input, coefficient_rev_count, kil_vxody;
	};

	class shifting_registers : public Registers
	{
	public:
		virtual double signal()
		{
			return 0;
		}
		virtual int get()
		{
			return 0;
		}
	};


	int main()
	{
		setlocale(LC_ALL, "English");
		cout << "Select device:" << endl;
		cout << "1. binary counters" << endl;
		cout << "2. binary-decimal counter" << endl;
		cout << "3. Reversible counter " << endl;
		cout << "4. D-trigger" << endl;
		cout << "5. RS-trigger" << endl;
		cout << "6. multiplexer" << endl;
		cout << "7. shifting registers" << endl;

		int choise;
		cin >> choise;
		if (choise == 1)
		{
			Nounters *ptr1 = new binary_counters;
			ptr1->get();
			cout << (ptr1->signal()) << endl;
		}
		else if (choise == 2)
		{
			Nounters *ptr2 = new  binary_decimal_counters;
			ptr2->get();
			cout << (ptr2->signal()) << endl;
		}
		else if (choise == 3)
		{
			Nounters *ptr3 = new reversing_counters;
			ptr3->get();
			cout << (ptr3->signal()) << endl;
		}
		else if (choise == 4)
		{
			Triggers *ptr4 = new  D_triggers;
			ptr4->get();
			cout << (ptr4->signal()) << endl;
		}
		else if (choise == 5)
		{
			Triggers *ptr5 = new  RS_triggers;
			ptr5->get();
			cout << (ptr5->signal()) << endl;
		}
		else if (choise == 6)
		{
			Registers *ptr6 = new  multiplexers;
			ptr6->get();
			cout << (ptr6->signal()) << endl;
		}
		else if (choise == 7)
		{
			Registers *ptr7 = new  shifting_registers;
			ptr7->get();
			cout << (ptr7->Signal()) << endl;
		}
		else {
			cout << "Number is not valid" << endl;

			return 0;
		}
		_getch();
	}


