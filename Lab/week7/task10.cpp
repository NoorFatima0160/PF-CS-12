#include <iostream>
using namespace std;
int myfun(int number, int number2);
void LCM(int num, int a, int b);
main()
{
  int num1, num2;
  int hcf;
  cout << "enter  first  number : ";
  cin >> num1;
  cout << "enter  second  number : ";
  cin >> num2;

  hcf = myfun(num1, num2);
  cout << " HCF is : " << hcf << endl;
  LCM(hcf, num1, num2);
}

int myfun(int number1, int number2)
{
  int num;
  int HCF;
  if (number2 > number1)
  {
    num = number2;
    number2 = number1;
    number1 = num;
  }
  for (int n = 1; n <= number2; n++)
  {
    if (number1 % n == 0 && number2 % 2 == 0)
      HCF = n;
  }
  return HCF;
}

void LCM(int num, int a, int b)
{
  int lcm;
  lcm = a * b / num;
  cout <<"LCM is : "<< lcm;
}
