#include <iostream>
#include <string>
using namespace std;
// Khai bao mot class ten la Phu_nu(define a class name is Phu_nu)
class Phu_nu
{
public:
	Phu_nu()
	{  }
	Phu_nu(const string &ht, int t, bool z = true) : ho_ten(ht), con_zin(z), tuoi(t)
	{  }
	~Phu_nu()
	{
		cout << "Chia Tay " << ho_ten << endl;
	}
	void trang_diem() 
	{

	}
	virtual string choi_nhac_cu(string ten_nhac_cu)
	{
		return "AAAAAAAAAAAAAAAAAAAAA~~~~~";
	}
	void va_zin()
	{
		if (tuoi < 25)
		{
			con_zin = true;
		}
	}
	void show_hang()
	{
		cout << ho_ten << " " << (con_zin ? "con zin" : "mat zin") << endl;
	}

protected:
	string ho_ten;
	bool con_zin;
	int tuoi;
};

class Gai_Ngoan : public Phu_nu
{
public:
	Gai_Ngoan()
	{  }

	Gai_Ngoan(const string &ht, int t, bool z = true) : Phu_nu(ht, t, z)
	{  }

	string choi_nhac_cu(string ten_nhac_cu)
	{
		return "OOOOOOOOOOOOOOOOOOOO~~~~~~~~~~";
	}

	void noi_tro()
	{ 
		cout << ho_ten << " dang lam noi tro" << endl;
	}
private:

};

class Gai_Hu : public Phu_nu
{
public:
	Gai_Hu()
	{  }

	Gai_Hu(const string &ht, int t, bool z = true) : Phu_nu(ht, t, z)
	{  }

	string choi_nhac_cu(string ten_nhac_cu)
	{
		return "UUUUUUUUUUUUUUUUUUUUUU~~~~~~~~~~";
	}

	void di_bar()
	{  }
};

int main() 
{
	// Khai bao doi tuong Phu_nu ten la maria_ozawa theo kieu Cap Phat Dong (Define Dynamic Phu_nu object name is maria_ozawa)
	Phu_nu *maria_ozawa = new Gai_Hu("Maria Ozawa", 22);
	cout << maria_ozawa->choi_nhac_cu("Ken") << endl;

	return 0;
}

