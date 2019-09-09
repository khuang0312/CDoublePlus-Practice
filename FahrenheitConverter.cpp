#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double tempFahrenheit;

  while (true) {
  cout << "Input current temperature in Fahrenheit:" << endl;
  cin >> tempFahrenheit; //this program has unpredicted behavior if we enter a string...

  double tempCelsius;
  tempCelsius = (tempFahrenheit - 32) / 1.8;
  //printf("%.2f", tempCelsius);
  cout << "The current temperature in Celsius is " << fixed << tempCelsius << " degrees." << endl;

  char userQuit;
  cout << "Do you want to quit? (Y/N)" << endl;
  cin >> userQuit;
  
  if (userQuit == 'Y' or userQuit == 'y') {
    break;
  }

  cout << endl;

  }

  return 0;
}