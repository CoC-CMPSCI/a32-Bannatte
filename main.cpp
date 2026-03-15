#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int numFemale, numMale, numOthers;
  double percF, percM, percO;

  cout << "Enter the number of students: Male, Female and Others";
  cin >> numMale >> numFemale >> numOthers;
  
  int total;
  total = numMale + numFemale + numOthers;

  percM = (double)numMale / total;
  percF = (double)numFemale / total;
  percO = (double)numOthers / total;

  percM *= 100;
  percF *= 100;
  percO *= 100;

  cout << setprecision(2) << fixed;
  cout << "Percentage of Male: " << percM << endl;
  cout << "Percentage of Female: " << percF << endl;
  cout << "Percentage of Others: " << percO << endl;
}
