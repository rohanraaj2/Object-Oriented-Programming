#include<iostream>
using namespace std;
class Time24
{
 private:
 int hours;
 int minutes;
 int seconds;

 public:
 Time24(int h, int m, int s, char p)
 {
 if (p == 'p')
 {
 h += 12;
 }
 this -> hours = h;
 this -> minutes = m;
 this -> seconds = s;
 converter(hours, minutes, seconds);
 }

 Time24(int h = 0, int m = 0, int s = 0)
 {
 this -> hours = h;
 this -> minutes = m;
 this -> seconds = s;
 converter(hours, minutes, seconds);
 }

 void show()
 {
 if (hours < 10)
 cout << 0 << hours << ':';
 else
 cout << hours << ':';
 if (minutes < 10)
 cout << 0 << minutes << ':';
 else
   cout << minutes << ':';
 if (seconds < 10)
 cout << 0 << seconds;
 else
 {cout << seconds;}
 cout << endl;
 }

 void converter(int h, int m, int s)
 {
 while (s > 59)
 {
 s -= 60;
 m += 1;
 }
 while (m > 59)
 {
 m -= 60;
 h += 1;
 }
 while (h > 23)
 {
 h -= 24;
 }
 this -> hours = h;
 this -> minutes = m;
 this -> seconds = s;
 }
 void add(Time24 time)
 {
 hours = hours + time.hours;
 minutes = minutes + time.minutes;
 seconds = seconds + time.seconds;
 converter(hours, minutes, seconds);
 }
};
