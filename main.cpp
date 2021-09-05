#include <iostream>
#include <string>

using namespace std;

struct Con_Nguoi {
	Con_Nguoi(string ht, int t, float v1, float cc) {
		ho_ten = ht;
		tuoi = t;
		vong_mot = v1;
		chieu_cao = cc;
		con_zin = true;
	}
	virtual string choi_xep_hinh()
	{
		return "truyen thong";
	}
	string ho_ten;
	int tuoi;
	float vong_mot;
	float chieu_cao;
	bool con_zin;
};

struct GaiNgoan : public Con_Nguoi 
{
	GaiNgoan(string ht, int t, float v1, float cc) : Con_Nguoi(ht, t, v1, cc)
	{  }
	string choi_xep_hinh() {
		return "Up thia";
	}
};

struct GaiHu : public Con_Nguoi 
{
	GaiHu(string ht, int t, float v1, float cc) : Con_Nguoi(ht, t, v1, cc)
	{  }
	string choi_xep_hinh() {
		return "69";
	}
};

struct Gay : public Con_Nguoi 
{
	Gay(string ht, int t, float v1, float cc) : Con_Nguoi(ht, t, v1, cc)
	{  }
	string choi_xep_hinh() {
		return "Dau kiem";
	}
};

void pha_zin(Con_Nguoi * pNguoi) 
{
	cout << "Thuc hien pha zin em " << pNguoi->ho_ten << " theo kieu " << pNguoi->choi_xep_hinh() << endl;
	pNguoi->con_zin = false;
}

int main() 
{
	Con_Nguoi * hoi_phu_nu[5] = 
	{
		new Con_Nguoi("Thao", 22, 95, 1.65),
		new GaiNgoan("Lan", 18, 90, 1.70),
		new GaiHu("Huong", 29, 85, 1.62),
		new Con_Nguoi("Nhung", 16, 80, 1.63),
		new Gay("Tuyet", 30, 100, 1.65),
	};
	
	Con_Nguoi *pBo_nhi = nullptr;
	
	for(int i = 0; i < 5; i++) 
	{
		pBo_nhi = hoi_phu_nu[i];
		pha_zin(pBo_nhi);
	}

	return 0;
}
