#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

    // proc1
	//double powera3(double a) {
	//	//double res = a * a * a;
	//	return a * a * a;
	//}

//proc2
//double powera2(double a) {
//	return a * a;
//}
//double powera4(double a) {
//	return a * a * a *a;
//}

//proc3
//double amean(double x, double y) {
//		return (x + y / 2) ;
//	}
//double gmean(double x, double y) {
//	return (sqrt(x*y));
//}

//proc4
//double trianglep(double a) {
//	return(3 * a );
//}
//double triangles(double a) {
//	return(a * a * sqrt(3.0/4.0));
//}

//proc5
double rectP(double x1, double x2, double y1, double y2) {
	return((abs(x1-x2) * 2) + (abs(y1 - y2) * 2));
}
double rectS(double x1, double x2, double y1, double y2) {
	return(abs(x1 - x2) * abs(y1 - y2));
}


	int main() {
		setlocale(LC_ALL, "rus");

		//proc1
		/*srand(time(nullptr));
		for (int i = 1; i <= 5; i++) {
			int a = rand() % 11;
			double a3 = powera3(a);
			cout << "a=" << a << ' ';
			cout << a3 << endl;
		}*/

		//proc2
		/*srand(time(nullptr));
		for (int i = 1; i <= 5; i++) {
			int a = rand() % 11;
			double a2 = powera2(a);
			double a4 = powera4(a);
			cout << "a=" << a << ' ';
			cout << a2 << ' ' << a4 << endl;
		}*/

		//proc3
		/*srand(time(nullptr));
		for (int i = 1; i <= 10; i++) {
			double x1 = rand() % 100 / 10.0;
			double y1 = rand() % 100 / 10.0;
			double am = amean(x1, y1);
			double gm = gmean(x1, y1);
			cout << x1 << ' ' << y1 << " am=" << am << " gm=" << gm << endl;
		}*/

		//proc4
		/*for (int i = 1; i <= 3; i++) {
			double a;
			cout << "введите сторону треугольника" << endl;
			cin >> a;
			double tP = trianglep(a);
			double tS = triangles(a);
			cout << tP << ' ' << tS << endl;
		}*/

		//proc5
		 /*for (int i = 1; i <= 3; i++) {
			double x1,x2,y1,y2;
			cout << "введите сторону прямоугольника" << endl;
			cin >> x1 >> x2 >> y1 >> y2 ;
			double P = rectP(x1,x2,y1,y2);
			double S = rectS(x1,x2,y1,y2);
			cout << P << ' ' << S << endl;
		}*/

	}






