// get input of 12 temps
// write it to tempdata.dat
// with the difference between the one before it
// print out average off all temps

#include <iostream>
#include <fstream>


using namespace std;


int main()
{

   const int Length = 12;
   float arr[Length];
   int i, cnt, x;
   double sum = 0;
   ofstream datafile;
   datafile.open("tempdata.dat");
   cout << "Enter up to 12 temperatures \n" << "(Quit with a letter):" << endl;

   // this will run 12 times or till user puts in a letter because x input has to be an int
   for( i = 0; i < Length  &&  cin >> x; ++i)
      arr[i] = x;



   cnt = i; //count
   for( i = 0; i < cnt; ++i)
	   //this puts info into tempdata.dat if its not the first number it will do the difference
	   if (i == 0){
		   datafile << arr[i] << endl;
		   sum = sum + arr[i]; // add up first value in arr[]
	   } else {
      datafile << arr[i] << "  " <<  arr[i] - arr[i-1] << endl;
      sum = sum + arr[i]; // add up the values in arr[]
	   }
   cout << endl;

   datafile.close();

   cout << "The average temp is: " << sum/i << endl;



   return 0;

}
