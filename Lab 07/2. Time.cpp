class Time
{
 private:
 int hours;
 int minutes;
 int seconds;
 public:
 Time ()
 {
 this -> hours = 0;
 this -> minutes = 0;
 this -> seconds = 0;
 }
 Time (int h, int m, int s)
 {
 Time r = converter(h, m, s);
 this -> hours = r.hours;
 this -> minutes = r.minutes;
 this -> seconds = r.seconds;
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
 Time converter(int h, int m, int s)
 {
 Time result;
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
 result.hours = h;
 result.minutes = m;
 result.seconds = s;
return result;
   }
 Time operator + (const Time &x )
 {
 Time resulting_time;
 resulting_time.hours = hours + x.hours;
 resulting_time.minutes = minutes + x.minutes;
 resulting_time.seconds = seconds + x.seconds;
 return(converter(resulting_time.hours, resulting_time.minutes,
resulting_time.seconds));
 }
};
