#include<random>
#include<fstream>
#include"opt_alg.h"
#include"ode_solver.h"

int main()
{
	try
	{
		cout << "xdd - lab1" << endl;

		matrix Y0(new double[3]{ 5,1,10 }, 3), C;
		matrix *S = solve_ode(0, 1, 1000, Y0, C);//from 1 to 1000 s // c - matrix with editable parameters - for now - empty matrix
		ofstream F1("results_lab1.csv");
		F1 << S[1] << endl;
		F1.close();

	}
	catch (char * EX_INFO)
	{
		cout << EX_INFO << endl;
	}
	system("pause");
	return 0;
}



