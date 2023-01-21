#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
void series(int term0, int term1, int n) {
 //int c;
 int term2 = 0;
 if (n > 0)
 {
 cout << term0 << ", " << term1;
 for (int i = 0; i < n - 1; i++)
 {
 term2 = term0 + term1;
 //if (i == n - 2)

 cout << ", " << term2;
 term0 = term1;
 term1 = term2;
 }

 }
 else if (n == 0)
 {
 cout << term0;
 }
}
int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 int term0, term1, n;
 cin >> term0 >> term1 >> n;
 series(term0, term1, n);
 return 0;
}
