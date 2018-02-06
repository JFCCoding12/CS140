//program that computes students grade as a % given that the student score and the total points
// round to whole
//
// (right/total) * 100
//


#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

ifstream file("mydata.dat"); //name of file with grades in it
double right;
double total;
double answer;

while(file >> right >> total) { // while file is open get first number as first and second as total
 answer = (right / total) * 100;

 cout << fixed;
 cout << "With out being rounded: "<< setprecision(5) << answer << endl;
 //cout << ;

 cout << "With rounding: " << defaultfloat <<  ceil(answer) << endl; //round nearest whole number

	}
file.close();
return 0;
}
