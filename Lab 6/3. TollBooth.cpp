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
class TollBooth
{
private:
 unsigned int num_of_cars;
 unsigned int amount_of_money_collected;

 public:
 TollBooth()
 {
 this -> num_of_cars = 0;
 this -> amount_of_money_collected = 0;
 }

 void payingCar()
 {
 num_of_cars += 1;
 amount_of_money_collected += 50;
 }

 void nopayCar()
 {
 num_of_cars += 1;
 }

 void display()
 {
 cout << "Total cars passed: " << num_of_cars << endl;
 cout << "Total toll collected: Rs. " << amount_of_money_collected <<
endl;
 }
};
int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 TollBooth A;
 char car_type;
 while (car_type != 'q')
 {
 cin >> car_type;
 if (car_type == 'p')
 {
 A.payingCar();
 }
 else if (car_type == 'n')
 {
 A.nopayCar();
 }
 }
 A.display();
}
