#include <iostream>
using namespace std;

int main() {

  int beanLength;
  int beanHeight;
  int volumeOfJar;
  int volumeOfSingleBean;
  int numberOfBean;

  cout << "Welcome to my bean count program!!" << endl;
  cout << "Enter jelly bean length (cm), jelly bean height (cm), and jar size (mL), separated by space: ";

  cin >> beanLength >> beanHeight >> volumeOfJar;

  volumeOfSingleBean = (5 * 3.14159265358979323846 * beanLength * (beanHeight * beanHeight)) / 24;

  numberOfBean = (volumeOfJar * .745) / volumeOfSingleBean;

  cout << endl;
  cout << endl;
  cout << "Estimate of jelly beans in the jar: ";
  cout << numberOfBean << endl;

return 0;

}
