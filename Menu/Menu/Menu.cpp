//khai bao thu vien
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//using std::cout;
//using std::cin;

//khoi tao bien toan cuc
int nthang, nnam,nngay;
int n, n1, n2, n5, n10, n20;
// khoi tao ham chanle
void chanle(int& x) {
	cout << "Nhap so x xem la chan hay le: ";
	cin >> x;//nhap x
	if (x % 2 == 0)cout << x << " la so chan\n";
	else {
		cout << x << " la so le\n";
	}
}
void dem_so(/*int& demso, int& chan, int& le*/int& demso, int& biendem_chan, int& biendem_le) {
	/*chan = 0;
	le = 0;
	cout << "nhap vao so nguyen cho den khi bang 0 thi ket thuc: ";
	cin >> demso;
	for (int i = demso; i > 0; i--) {
		if (i % 2 == 0) {
			chan++;
		}
		if(i%2!=0) {
			le++;
		}
	}
	cout << "Co " << chan << "so chan\n";
	cout << "Co " << le << "so chan\n";*/
	// đặt 2 biến đếm làm điểm bắt đầu
	biendem_chan = 0;
	biendem_le = 0;
	do {
		cout << "nhap vao so nguyen cho den khi bang 0 thi ket thuc: ";
		cin >> demso;
		if (demso == 0) {//tránh tình trạng 0 là số chẵn
			break;
		}
		else if (demso % 2 == 0) { cout << demso << " la so chan\n"; biendem_chan++; }//nếu chẵn thì biến đếm chẵn + 1
		else if  (demso % 2 != 0) { cout << demso << " la so le\n"; biendem_le++; }//nếu lẽ thì biến đếm lẽ + 1
	}
	while (demso != 0);
	cout << "Co " << biendem_chan << "so chan\n";
	cout << "Co " << biendem_le << "so le\n";		 
}
int UCLN(int& a, int& b) {
	int i;
	for (i = min(a, b); i > 0; --i) {//đặt i là số lớn nhất lớn giảm dần đến 0
		if (a % i == 0 && b % i == 0)//nếu a =b thì xuất ra
			return i;//trả về giá trị nhỏ nhất
	}
}
void sum1() {
	int a; int sum = 0;
	cout << "Nhap a: ";
	cin >> a;
	cout << "tong cua ";
	for (int i = 0; i <= a; i++) {
		cout << sum << "+";
		sum += i;
		
	}
	cout<< " = "<<sum << endl;
}
void sum2() {
	int n, sum = 0;
	cout << "Enter the number: ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sum = sum + (i * i);
	}
	cout <<" Sum = "<< sum << endl;
}
void sum3() {
	float sum = 0, n, i;
	cout << "Enter the number: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		sum += 1.0 / i;
		cout << "Tong so s = 1+1/2+ ... +1/n = " << sum << endl;
	}
}
void sum4() {
	int n, s = 1;
	cout << "Enter the number: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s = s * i;
	}
	cout << "Tong so s = 1*2*3*n = " << s << endl;
}
void thoigian(int& gio,int& phut,int& giay,int& giaythem) {
	
	cout << "Nhap gio: ";
	cin >> gio;
	cout << "Nhap phut: ";
	cin >> phut;
	cout << "Nhap giay: ";
	cin >> giay;
	cout << "Nhap giay them: ";
	cin >> giaythem;
	giay = giay + giaythem;
	if (giay >= 60) {
		giay = giay % 60;
		phut = phut+(giay/60);
	}
	if (phut >= 60) {
		phut = phut % 60;
		gio = gio + (phut / 60);
	}
	cout << "thoi gian vua nhap la " << gio << " gio " << phut << " phut " << giay << " giay " << endl;
}
void thangnam(int t, int n) {
	cout << "Nhap thang: ";
	cin >> t;
	cout << "Nhap nam: ";
	cin >> n;
	if(t>=1||t<=12){
		switch (t) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:cout << "thang " << t << " co 31 ngay\n"; break;
		case 4: case 6: case 9: case 11:cout << "thang " << t << " co 30 ngay\n"; break;
		case 2:
			if (n % 4 == 0) {
				cout << "thang " << t << "co 29 ngay\n";
			}
			else {
				cout << "thang " << t << " co 28 ngay\n"; break;
			}
		}
		if (t > 12)cout << "Khong co thang/nam do\n";
	}
}
void ngaythangnam(int& d, int& m, int& y) {
	cout << "Nhap ngay,thang,nam: ";
	cin >> d >> m >> y;
	if (m >= 1 || m <= 12) {
		switch (m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (d > 31) {
				cout << "Khong hop le"; 
				break; 
			}
			else
				d++; cout << "Ngay thang nam vua nhap la " << d << "/" << m << "/" << y << endl; break;
		case 4: case 6: case 9: case 11:
			if (d > 30) {
				cout << "Khong hop le";
				break;
			}
			else
				d++; cout << "Ngay thang nam vua nhap la " << d << "/" << m << "/" << y << endl; break;
		case 2:
			if (y % 4 == 0) {
				if (d > 29)cout << "khong hop le";
				else d++; cout << "Ngay thang nam vua nhap la " << d << "/" << m << "/" << y << endl;
			}
			else{
				if (d > 28)cout << "khong hop le";
				else d++; cout << "Ngay thang nam vua nhap la " << d << "/" << m << "/" << y << endl; break;
			}	
		}
	}
	if(m>12)
		cout << "Khong hop le\n";	
}
void bangcuuchuong() {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			cout << j << "*" << i << "=" << i * j<<"\t";
			if (j % 9 == 0) {
				cout << "\n";
			}
		}
	}
}
void doitien() {
	n, n1, n2, n5, n10, n20;
	cout << "Nhap tien: ";
	cin >> n;
	
	while (n >= 20) {
		n = n - 20;
		++n20;
	}cout << n20<<" to 20"<<endl;
	while (n >= 10) {
		n = n - 10;
		++n10;
	}cout << n10 << " to 10" << endl;
	while (n >= 5) {
		n = n - 5;
		++n5;
	}cout << n5 <<" to 5" << endl;
	while (n >= 2) {
		n = n - 2;
		++n2;
	}cout << n2 << " to 2" << endl;
	while (n >= 1) {
		n = n - 1;
		++n1;
	}cout << n1 << " to 1" << endl;
}
void trau() {
	int d, n, g;
	for (d = 1; d <= 100; d++) {
		for (n = 1; n <= 100; n++) {
			for (g = 1; g <= 100; g++) {
				if (5 * d + 3 * n + g / 3 == 100 && g % 3 == 0 && d + n + g == 100) {
					cout << "\nTrau dung " << d << " con" << " trau nam " << n << " con " << " trau gia " << g << " con";
				}
			}
		}
	}
}
void ga_tho() {
	int ga, tho;
	for (int ga = 0; ga <= 50; ga++) {
		for (int tho = 0; tho <= 25; tho++) {
			if ((ga + tho == 43) && (2 * ga + 4 * tho == 100)) {
				cout << "Ga = " << ga << "\nTho = " << tho << endl;
			}
		}
	}
}
#include <iostream>
using namespace std;

void TamGiacVuongCanDac(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "* ";
		cout << "\n";
	}
	cout << "\n";
}
void TamGiacVuongCanRong(int h)
{
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i || i == h)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << "\n";
	}
	cout << "\n";
}
void TamGiacCanDac(int h)
{
	int m = h, n = h;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= 2 * h - 1; j++)
		{
			if (j >= m && j <= n)
				cout << "*";
			else
				cout << " ";
		}
		m--;
		n++;
		cout << "\n";
	}
	cout << "\n";
}
void TamGiacCanRong(int h)
{
	int m = h, n = h;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= 2 * h - 1; j++)
		{
			if (j == m || j == n || i == h)
				cout << "*";
			else
				cout << " ";
		}
		m--;
		n++;
		cout << "\n";
	}
}
void menuhinh() {
	cout << "0. Thoat\n";
	cout << "1. Tam giac vuong can dac\n";
	cout << "2. Tam giac vuong can rong\n";
	cout << "3. Tam giac can dac\n";
	cout << "4. Tam giac can rong\n";
}
void vehinh() {
	int h;
	int lc;
	menuhinh();
	cout << "Vui long nhap lua chon: ";
	cin >> lc;
	while (lc != 0) {
		system("cls");
		switch (lc) {
		case 1:cout << "Nhap chieu cao: "; cin >> h; TamGiacVuongCanDac(h); break;
		case 2:cout << "Nhap chieu cao: "; cin >> h; TamGiacVuongCanRong(h); break;
		case 3:cout << "Nhap chieu cao: "; cin >> h; TamGiacCanDac(h); break;
		case 4:cout << "Nhap chieu cao: "; cin >> h; TamGiacCanRong(h); break;
		}
		menuhinh();
		cout << "Vui long nhap lua chon: ";
		cin >> lc;
		system("cls");
	}
}
#include <iostream>
using namespace std;

void doixung() {
	int n1, n2, s = 0, i;
	cout << "Nhap so: ";
	cin >> n1;
	for (i = n1; n1 != 0; n1 = n1 / 10) {
		n2 = n1 % 10;
		s = s * 10 + n2;
	}
	if (i == s) {
		cout << i << " la so doi xung \n";
	}
	else
		cout << i << " Khong la so doi xung \n";
	cout << endl;
}
void chinhphuong() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	int a = sqrt(n);
	if (a * a == n) {
		cout << n << " La so chinh phuong\n";
	}
	else {
		cout << n << " Khong la so chinh phuong\n";
	}
	cout << endl;
}
int songuyento(int& n1) {
	int n2 = 0;
	cout << "Nhap so nguyen duong: ";
	cin >> n1;
	if (n1 < 2) {
		cout << n1 << " Khong la so nguyen to";
		return 0;
	}
	for (int i = 2; i <= sqrt(n1); i++) {
		if (n1 % i == 0)
			cout << n2++ << endl; // Phần tử đệm
	}
	if (n2 == 0) {
		cout << n1 << " la so nguyen to\n";
	}
	else {
		cout << n1 << " khong la so nguyen to\n";
	}
	cout << endl;
}
int hoanchinh() {
	int n, sum = 0;
	cout << "Nhap so nguyen duong: ";
	cin >> n;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (n == sum) {
		cout << n << " la so hoan chinh" << endl;
	}
	else {
		cout << n << " khong la so hoan chinh" << endl;
	}
	system("pause");
	return sum;
}
void Tang_dan() {
	long int n, k;
	int csc, cskc;
	bool kt = true;

	cout << "Nhap so nguyen tang dan: ";
	cin >> n;

	//khai bao bien gan
	k = n;
	csc = k % 10;
	k = k / 10;

	while (k != 0)
	{
		int cskc = k % 10;
		k /= 10;
		if (csc < cskc)
		{
			kt = false;
			break;
		}
		else {

		}
	}
	if (kt) {
		/*cout <<k<< " True" << endl;*/
		cout << n << " Tang dan" << endl;
	}
	else {
		cout << n << " ERROR 404:))" << endl;
	}
}
void Giam_dan() {
	long int n, k;
	int csc, cskc;
	bool kt = true;

	cout << "Nhap so nguyen tang dan: ";
	cin >> n;

	//khai bao bien gan
	k = n;
	csc = k % 10;
	k = k / 10;

	while (k != 0)
	{
		int cskc = k % 10;
		k /= 10;
		if (csc > cskc)
		{
			kt = false;
			break;
		}
		else {

		}
	}
	if (kt) {
		/*cout <<k<< " True" << endl;*/
		cout << n << " Giam dan" << endl;
	}
	else {
		cout << n << " ERROR 404:))" << endl;
	}
}
void menuthuattoan() {
	cout << "0. Thoat\n";
	cout << "1. So doi xung\n";
	cout << "2, Chinh phuong\n";
	cout << "3. So nguyen to\n";
	cout << "4. So hoan chinh\n";
	cout << "5. Tang dan\n";
	cout << "6. Giam dan\n";
}
int thuattoan() {
	int number;
	int lc;
	menuthuattoan();
	cout << "Nhap lua chon: ";
	cin >> lc;
	while (lc != 0) {
		system("cls");
		switch (lc) {
		case 1: doixung(); break;
		case 2:chinhphuong(); break;
		case 3:songuyento(number); break;
		case 4:hoanchinh(); break;
		case 5:Tang_dan(); break;
		case 6:Giam_dan(); break;
		}
		menuthuattoan();
		cout << "Nhap lua chon: ";
		cin >> lc;
		system("cls");
	}
	return 1;
}
#include <iostream>
using namespace std;

void Solonnhat() {
	int n, max, i;
	int a;
	do {
		cout << "Nhap so: ";
		cin >> n;
	} while (n < 0);
	a = n;
	max = n % 10;
	if (n == 0)max = 0;
	do {
		i = n % 10;
		if (i > max)max = i;
	} while (n /= 10);
	cout << "tu so lon nhat trong " << a << " la: " << max << endl;
}
void Sonhonhat() {
	int n, min, i;
	int a;
	do {
		cout << "Nhap so: ";
		cin >> n;
	} while (n < 0);
	a = n;
	min = n % 10;
	if (n == 0)min = 0;
	do {
		i = n % 10;
		if (i < min)min = i;
	} while (n /= 10);
	cout << "ky tu so nho nhat trong " << a << " la: " << min << endl;
}
void Tong_so() {
	int n, sum = 0, a;
	cout << "Enter the number sum: ";
	cin >> n;
	a = n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	cout << "Tong cua so " << a << " la " << sum << endl;
}
void So_dao() {
	int n, t, k;
	cout << "Nhap so: ";
	cin >> n;
	cout << "So dao nguoc cua " << n << " la: ";
	for (; n != 0; n = n / 10) {
		cout << n % 10;
	}
	cout << endl;
}
void Dem_Ky_Tu() {
	int n, dem = 1;
	cout << "Nhap so: ";
	cin >> n;
	while (n > 10) {
		n /= 10;
		dem++;
	}
	cout << "So vua nhap co " << dem << " ky tu\n";
}
void Tinh_Ky_Tu() {
	int n, dem = 1;
	cout << "Nhap so: ";
	cin >> n;
	while (n > 10) {
		n /= 10;
		dem++;
	}
	cout << "Co " << dem << " ky tu\n";
	int sum = 1;
	for (int i = 1; i <= dem; i++) {
		sum = sum * i;
	}
	cout << "Tich cua Ky tu vua nhap co " << sum << " ky tu\n";
}
void Dem_So_Le_Va_Tong_So_Chan() {
	int n, dem_le = 0, tong_chan = 0, sum = 0;
	cout << "Nhap so: ";
	cin >> n;
	do {
		if (n % 2 != 0)dem_le++;
		if (n % 2 == 0)tong_chan++;
		n--;
	} while (n > 0);
	for (int i = 0; i <= tong_chan; i++) {
		sum = sum + i;
	}
	cout << "Co " << dem_le << " so le\n";
	cout << "Tong so chan la " << sum << endl;
}

void menutimso() {
	cout << "0. Thoat\n";
	cout << "1. So lon nhat\n";
	cout << "2. So nho nhat \n";
	cout << "3. Tong so\n";
	cout << "4. So dao\n";
	cout << "5. Dem ky tu\n";
	cout << "6. Tinh tich ky tu\n";
	cout << "7. Dem so le va tong so chan\n";
}
int timso() {
	int lc;
	menutimso();
	cout << "Nhap lua chon: ";
	cin >> lc;
	while (lc != 0) {
		system("cls");
		switch (lc) {
		case 1:Solonnhat(); break;
		case 2:Sonhonhat(); break;
		case 3:Tong_so(); break;
		case 4:So_dao(); break;
		case 5:Dem_Ky_Tu(); break;
		case 6:Tinh_Ky_Tu(); break;
		case 7:Dem_So_Le_Va_Tong_So_Chan(); break;
		}
		menutimso();
		cout << "Nhap lua chua: ";
		cin >> lc;
		system("cls");
	}
	return 0;
}

//khoi tao ham menu
void menu(int& user_choice) {
		cout << "0. Thoat\n";
		cout << "1. Kiem tra chan le\n";
		cout << "2. Kiem tra dem so chan le\n";
		cout << "3. UCLN\n";
		cout << "4. BCNN\n";
		cout << "5. 1 + 2 + ... + n \n";
		cout << "6. 1 ^ 2 + n ^ 2\n";
		cout << "7. 1+1/2+1\n";
		cout << "8. 1*2*3*n\n";
		cout << "9. Thoi gian\n";
		cout << "10. Thang nam\n";
		cout << "11. Ngay thang nam\n";
		cout << "12. Bang cuu chuong\n";
		cout << "13. Doi tien\n";
		cout << "14. Bai toan ve trau\n";
		cout << "15. So ga tho\n";
		cout << "16.Ve tam giac\n";
		cout << "17. Thuat toan\n";
		cout << "18.tim so\n";
	return;
}
int main() {
	int x, demso, chan, le, UCLN_A, UCLN_B;
	int BCNN_A, BCNN_B,gio,phut,giay,giaythem;

	int user_choice;
	menu(user_choice);
	cout << "hay nhap lua chon: ";
	while(user_choice != 0){
		system("cls");
		switch (user_choice) {
			//phần gọi hàm
		case 1:chanle(x); break;//goi ham chanle vao main
		case 2:dem_so(demso, chan, le); break;//gọi hàm đếm số lẻ chẵn
		case 3:UCLN(UCLN_A, UCLN_B);
			cout << "Nhap so a: ";
			cin >> UCLN_A;
			cout << "Nhap so b: ";
			cin >> UCLN_B;
			cout << "UCLN cua 2 so " << UCLN_A << " va " << UCLN_B << ": " << UCLN(UCLN_A, UCLN_B) << endl; break;
		case 4:UCLN(BCNN_A, BCNN_B);
			cout << "Nhap so a: ";
			cin >> BCNN_A;
			cout << "Nhap so b: ";
			cin >> BCNN_B;
			cout << "BCNN cua 2 so " << BCNN_A << " va " << BCNN_B << " la " << double(BCNN_A * BCNN_B) /
				UCLN(BCNN_A, BCNN_B) << endl; break;
		case 5:sum1(); break;
		case 6:sum2(); break;
		case 7:sum3(); break;
		case 8:sum4(); break;
		case 9:thoigian(gio, phut, giay, giaythem); break;
		case 10:thangnam(nthang, nnam); break;
		case 11:ngaythangnam(nngay,nthang,nnam); break;
		case 12:bangcuuchuong(); break;
		case 13:doitien(); break;
		case 14:trau(); break;
		case 15:ga_tho(); break;
		case 16:vehinh(); break;
		case 17:thuattoan(); break;
		case 18:timso(); break;
		}
		menu(user_choice);//gọi hàm menu
		cout << "\nhay nhap vao lua chon: ";
		cin >> user_choice;
		system("cls");//clear cmd
		char k{7};
		cout << k;
	}
	system("pause");
	return 0;
}