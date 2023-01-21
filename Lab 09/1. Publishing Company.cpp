#include <iostream>
using namespace std;
class Publication
{
 private:
 char title[50];
 float price;

 public:
 Publication()
 {
 price = 0;
 }
 void getdata()
 {
 cin.getline(title, 50);
 cin >> price;
 }
 void putdata()
 {
 cout << "Publication title: " << title << endl;
 cout << "Publication price: " << price << endl;
 }
};
class book : public Publication
{
 private:
 int page_count;

 public:
 book()
 {
 page_count = 0;
 }
 void getdata()
 {
 Publication::getdata();
 cin >> page_count;
 }
 void putdata()
 {
 Publication::putdata();
 cout << "Book page count: " << page_count << endl;
 }
};
class tape : public Publication
{
 private:
 float playing_time;

 public:
 tape()
 {
playing_time = 0;
 }
 void getdata()
 {
 Publication::getdata();
 cin >> playing_time;
 }
 void putdata()
 {
 Publication::putdata();
 cout << "Tape's playing time: " << playing_time;
 }
};
