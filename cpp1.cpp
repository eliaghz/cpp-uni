قسمت اول تمرین
#include <iostream>
#include <cmath>
using namespace std;
class calculator{
public:
int floor(double number)
{
  return number;
    }
};
int main()
{
double number=9.9;
};


قسمت دوم تمرین
#include <iostream>
using namespace std;
class calculator{
public:
int add(int num1,int num2)
{
  return num1+num2;
}
};
int main()
{
int num1=5;
int num2=9;
};


قسمت سوم تمرین
#include <iostream>
using namespace std;
class calculator{
public:
float max1(float number1,float number2)
{
  if (number1>number2)
{
return number1;
}
else if (number1<number2)
  {
  return number2;
}
}
};
int main()
{
float number1=9.9;
float number2=6.7;
};


قسمت چهارم تمرین
#include <iostream>
using namespace std;
class calculator{
public:
bool find1(string & str, char ch)
{
  for ( char c: str)
{
if (c == ch)
{
return true;
}
return false;
}
};


قسمت پنجم تمرین
class calculator
{
public :
int max2 ( const int arr[], int size)
{
  int maxVal = arr[0];
{
for( int i=1 ; i < size;i++)
{
if(arr[i]>maxVal)
{
maxVal=arr[i];
  return maxVal;
}
}
}
}
};

