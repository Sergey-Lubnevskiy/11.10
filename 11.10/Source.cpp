#include <iostream>
using namespace std;

class HDD
{
	string name;
	string size;
public:
	HDD()
	{
		name = "��������";
		size = "����� T�";
	}
	HDD(const char* n, const char* s)
	{
		name = n;
		size = s;
		size += " T�";
	}
	void Show()
	{
		cout << name << endl <<"�����: " << size << endl;
	}
};

class RAM
{
	string name;
	string size;
public:
	RAM()
	{
		name = "��������";
		size = "����� ��";
	}
	RAM(const char* n, const char* s)
	{
		name = n;
		size = s;
		size += " ��";
	}
	void Show()
	{
		cout << name << endl << "�����: " << size << endl;
	}
};

class Printer
{
	string name;
public:
	Printer()
	{
		name = "��������";
	}
	Printer(const char* n)
	{
		name = n;
	}
	void Show()
	{
		cout << name << endl;
	}
};

class CPU
{
	string name;
	string speed;
public:
	CPU()
	{
		name = "��������";
		speed = "�������� Ghz";
	}
	CPU(const char* n, const char* s)
	{
		name = n;
		speed = s;
		speed += " GHz";
	}
	void Show()
	{
		cout << name << endl << "��������: " << speed << endl;
	}
};

class GPU
{
	string name;
	string size;
public:
	GPU()
	{
		name = "��������";
		size = "����� ��";
	}
	GPU(const char* n, const char* s)
	{
		name = n;
		size = s;
		size += " ��";
	}
	void Show()
	{
		cout << name << endl << "�����: " << size << endl;
	}
};

class Keyboard
{
	string name;
public:
	Keyboard()
	{
		name = "��������";
	}
	Keyboard(const char* n)
	{
		name = n;
	}
	void Show()
	{
		cout << name << endl;
	}
};

class Laptop
{
	RAM* ram;
	Printer* printer;
	HDD* hdd;
	Keyboard keyboard;
	CPU cpu;
	GPU gpu;
	string name;
	int year;
public:
	Laptop(RAM* r, Printer* p, HDD* h, Keyboard k, CPU c, GPU g, const char* n, int y) :ram(r), printer(p), hdd(h), keyboard(k), cpu(c), gpu(g)
	{
		name = n;
		year = y;
	}
	void Show()
	{
		cout << "�������" << endl;
		cout << "��������: " << name << endl;
		cout << "���: " << year << endl;
		cout << "CPU: ";
		cpu.Show();
		cout << "RAM: ";
		ram->Show();
		cout << "HDD: ";
		hdd->Show();
		cout << "GPU: ";
		gpu.Show();
		cout << "����������: ";
		keyboard.Show();
		cout << "�������: ";
		printer->Show();
	}
	~Laptop()
	{
		cout << "����������"<< endl;
	}
};

int main()
{
	setlocale(0, "ru");
	HDD h("Silicon Power", "2");
	RAM r("Kingstone", "32");
	CPU c("Intel Core I9", "3.8");
	GPU g("NVidia RTX 1070 TI", "16");
	Keyboard k("Gembird");
	Printer p("Canon");
	Laptop obj(&r, &p, &h, k, c, g, "LG", 2018);
	obj.Show();
}