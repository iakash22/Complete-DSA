#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

   vector<int> v;
   v.push_back(1);
   v.push_back(3);
   v.push_back(6);
   v.push_back(7);
   int num = v.begin();
   cout<<num<<endl;
   cout << "Finding-->>" << binary_search(v.begin(), v.end(), 6) << endl;

   cout << "Lower bound-->> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
   cout << "Upper bound-->> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

   int a = 3;
   int b = 4;

   cout << "max-->> " << max(a, b) << endl;
   cout << "min-->> " << min(a, b) << endl;
   cout << " before-->> " << endl
        << " a-> " << a << endl
        << " b-> " << b << endl;
   swap(a, b);
   cout << " After"
        << "Swap-->> " << endl
        << " a-> " << a << endl
        << "b-> " << b << endl;

   rotate(v.begin(), v.begin() + 1, v.end());
   cout << "After Rotate -->>" << endl;
   for (int i : v)
   {
      cout << i << " ";
   }
   cout << endl
        << "sort vector " << endl;
   sort(v.begin(), v.end());
   for (int i : v)
   {
      cout << i << " ";
   }
   return 0;
}