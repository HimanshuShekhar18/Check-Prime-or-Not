#include <bits/stdc++.h>
#include <cctype>
using namespace std;
const int MOD = 1e9 + 7; 

bool isPrime(int a)
 {
    for (int  i = 2; i <= sqrt(a); i++)
   {
         if(a%i==0)
       return 0;
   }
   return 1;
}
