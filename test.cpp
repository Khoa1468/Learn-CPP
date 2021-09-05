#include <iostream>
#include <string>

using namespace std;

struct ConNguoi 
{
	string ho_ten;
	int tuoi;
	float chieu_cao;
	float can_nang;
	bool con_zin;
};

string chi_so_BMI(ConNguoi nguoi) 
{
	float bmi = nguoi.can_nang / (nguoi.chieu_cao * nguoi.chieu_cao);
	string ket_qua;
	if (bmi < 18.5)
	{
		ket_qua = "gay vl";
	}
	else if (bmi > 25)
	{
		ket_qua = "bung to lo xo be";
	}
	else
	{
		ket_qua = "dep zai co nhieu gai yeu";
	}
	return ket_qua;
}

void dong_thoi_gian(ConNguoi nguoi, int nam_troi_qua)
{
	for(int i = 0 ; i < nam_troi_qua ; i++)
	{
		nguoi.can_nang = nguoi.can_nang + 2;
	}

	string ket_qua = chi_so_BMI(nguoi);
	cout << "Ban " << nguoi.ho_ten << " " << nam_troi_qua << " nam troi qua se " << ket_qua << endl;
}

int main() 
{
	ConNguoi khoa;
	khoa.ho_ten = "Khoa";
	khoa.tuoi = 12;
	khoa.chieu_cao = 1.7;
	khoa.can_nang = 40;
	khoa.con_zin = true;
	ConNguoi *pointer = &khoa;
	cout << (*pointer).ho_ten << endl;

	system("pause");
	return 0;
}
