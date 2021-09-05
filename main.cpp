#include <iostream>
#include <string>

using namespace std;

struct ConNguoi 
{
	ConNguoi(string ht, int t, float cc, float cn) {
		ho_ten = ht;
		tuoi = t;
		chieu_cao = cc;
		can_nang = cn;
		con_zin = true;
	}
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
	ConNguoi khoa("Khoa", 18, 1.8, 60);
	ConNguoi *pointer = &khoa;
	string ket_qua = chi_so_BMI(khoa);
	dong_thoi_gian(khoa, 10);

	system("pause");
	return 0;
}
