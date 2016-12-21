#include "stdafx.h"
#include <iostream> 
#include <conio.h>

using namespace std;

class Digital_elements
   {
    public:
	virtual double Signal()
	{ 
	  return 0;
	}
	virtual int Get()
	{
	  return 0;
	}
   };

class Nounters : public Digital_elements
{
public:

	virtual double Signal()
	{
	   return 0;
	}
	virtual int Get()
	{
           return 0;
	}
};

class binary_counters : public Nounters
{
public:
	int Get()
	{
		cout << "Signal number coming inlet :";
		cin >> NumberSignInput;
		cout << "coefficient of binary counter :";
		cin >> CoefBinCount;
		Volume = NumberSignInput*KoefBinCount;
		return 0;
	}
	double Signal()
	{
		return Volume;
	}
private:
	int NumSignInput, CoefficientBinCount, Volume;
};

class binary_decimal_counters : public Nounters
{
public:
	int Get()
	{
	cout << "Signal number coming inlet :";
	cin >> NumberSignInput1;
	cout << "coefficient of binary counter :";
	cin >> KoefBinDesCount;
	Volume1 = NumberSignInput1*CoefBinDesCount;
		return 0;
	}
   double Signal()
	{
		return Volume1;
	}
   private:
	   int NumSignInput1, CoefficientBinDesCount, Volume1;
};

class  reversing_counters : public Nounters
{
public:
	int Get()
	{
		cout << "Signal number coming inlet :";
		cin >> NumSignInput;
		cout << "Coefficient of reversible counter :";
		cin >> CoefficientRevCount;
		cout << "Entrances signals :";
		cin >> ViewStandings;
		Suma = (NumberSignInput*CoefficientRevCount)*ViewStandings;
		return 0;
	}
	double Signal()
	{
		return Sum;
	}
private:
	int NumSignInput, CoefficientRevCount, ViewStandings, Sum;
};

class Triggers : Digital_elements
{
public:
	virtual double Signal()
	{
		return 0;
	}
	virtual int Get()
	{
		return 0;
	}
};

class D_triggers : public Triggers
	{
	public:
		int Get()
		{
			cout << "delay signal at the input :";
			cin >> NumberSignInput;
			cout << "Coefficient of delay in D-trigger :";
			cin >> CoefficientRevCount;
			cout << "Number of entrances in trigger :";
			cin >> KilVxody;;
			Suma = (NumSignInput*KoefRevCount)*KilVxody;;
			return 0;
		}
		double Signal()
		{
			return Sum;
		}
	private:
		int NumberSignInput, CoefficientRevCount, KilVxody, Sum;
	};

	class RS_triggers : public Triggers
	{
	public:
		int Get()
		{
			cout << "delay signal at the input:";
			cin >> NumberSignInput;
			cout << "delay signals in RS-trigger :";
			cin >> CoefficientRevCount;
			cout << "Number of entrances in trigger :";
			cin >> KilVxody;;
			Suma = (NumberSignInput*CoefficientRevCount)*KilVxody;;
			return 0;
		}
		double Signal()
		{
			return Sum;
		}
	private:
		int NumberSignInput, CoeficientRevCount, KilVxody, Sum;
	};

	class Registers : public Digital_elements
	{
	public:
		virtual double Signal()
		{
			return 0;
		}
		virtual int Get()
		{
			return 0;
		}
	};

	class multiplexers : public Registers
	{
	public:
		int Get()
		{
			cout << " Number of entrances in multiplexor :";
			cin >> NumberSignInput;
			cout << "Number of exits in multiplexor :";
			cin >> CoefficientRevCount;
			cout << " Enter binary number :";
			cin >> KilVxody;;
			return 0;
		}
		double Signal()
		{
			return 0;
		}
	private:
		int NumberSignInput, CoefficientRevCount, KilVxody;
	};

	class shifting_registers : public Registers
	{
	public:
		virtual double Signal()
		{
			return 0;
		}
		virtual int Get()
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
			ptr1->Get();
			cout << (ptr1->Signal()) << endl;
		}
		else if (choise == 2)
		{
			Nounters *ptr2 = new  binary_decimal_counters;
			ptr2->Get();
			cout << (ptr2->Signal()) << endl;
		}
		else if (choise == 3)
		{
			Nounters *ptr3 = new reversing_counters;
			ptr3->Get();
			cout << (ptr3->Signal()) << endl;
		}
		else if (choise == 4)
		{
			Triggers *ptr4 = new  D_triggers;
			ptr4->Get();
			cout << (ptr4->Signal()) << endl;
		}
		else if (choise == 5)
		{
			Triggers *ptr5 = new  RS_triggers;
			ptr5->Get();
			cout << (ptr5->Signal()) << endl;
		}
		else if (choise == 6)
		{
			Registers *ptr6 = new  multiplexers;
			ptr6->Get();
			cout << (ptr6->Signal()) << endl;
		}
		else if (choise == 7)
		{
			Registers *ptr7 = new  shifting_registers;
			ptr7->Get();
			cout << (ptr7->Signal()) << endl;
		}
		else {
			cout << "Number is not valid" << endl;

			return 0;
		}
		_getch();
	}


