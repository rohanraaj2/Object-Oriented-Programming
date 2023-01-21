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
class Tollbooth
{
 private:
 unsigned int num_of_cars;
 unsigned int amount_of_money;
 public:
 Tollbooth()
 {
 num_of_cars = 0;
 amount_of_money = 0;
 }
 void payingCar()
 {
 num_of_cars += 1;
 amount_of_money += 50;
 }
 void nopayCar()
 {
 num_of_cars += 1;
 }
 void display()
 {
 cout << "Total cars passed: " << num_of_cars << endl;
 cout << "Total toll collected: Rs. " << amount_of_money << endl;
 }
 // int get_num_cars()
 // {
 // return num_of_cars;
 // }
 // int get_amount()
 // {
 // return amount_of_money;
 // }
};
class LyariTollBooth : public Tollbooth
{
 private:
 unsigned int fine;
 public:
 LyariTollBooth()
 {
 fine = 0;
 }
 void nopayCar()
 {
 Tollbooth :: nopayCar();
 fine += 500;
 }
 void display()
 {
 Tollbooth :: display();
 cout << "Total fine collected: Rs. " << fine << endl;
 }
};
int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 char x;
 LyariTollBooth B;
 cin >> x;
 while (x != 'q')
 {
 if (x == 'p')
 {
 B.payingCar();
 }
 else if (x == 'n')
 {
 B.nopayCar();
 }
 cin >> x;
 }
 B.display();
 return 0;
}
