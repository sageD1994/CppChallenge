#include <iostream>
using namespace std;

int main()
{
   unsigned int limit = 0;
   std::cout << "Sum up numbers divisible by 3 and 5 \n Upper limit: ";
   std::cin >> limit;

   unsigned long long sum = 0;
   for (int i = 3; i < limit; i++)
   {
      if (i % 3 == 0 || i % 5 == 0)
         sum += i;
   }
   std::cout << "sum=" << sum << std::endl;
}