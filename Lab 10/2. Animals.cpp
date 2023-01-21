#include <iostream>
#include <sstream>
#include <string>
using namespace std;
// separate string by space
void seperate_name_sound(const string input, string& name, string& sound)
{
 int c=1;
 while(input[c]!='\0' && input[c]!=' ')
 c++;
 if(c<input.length())
 {
 name = input.substr(1,c-1);
 sound = input.substr(c+1,input.length());
 }
 else{
 name = input.substr(1,c);
 }
}
class Animal {
protected:
 string m_name, m_sound;
public:
 Animal(string name, string sound) : m_name(name), m_sound(sound)
 {}
 virtual ~Animal() {}

 virtual void make_sound() = 0;
};
using namespace std;
class Cat : public Animal {
 // implement
 public:
 Cat(string name, string sound = "Meow") : Animal(name, sound)
 {}
 void make_sound() override
 {
 cout << m_name << " purrs: " << m_sound << "!" << endl;
 }
};
class Cow : public Animal {
 // implement
 public:
 Cow(string name, string sound = "Moo") : Animal(name, sound)
 {}
 void make_sound() override
 {
 cout << m_name << " moos: " << m_sound << "!" << endl;
 }
};
class Dog : public Animal {
 // implement
 public:
 Dog(string name, string sound = "Woof") : Animal(name, sound)
{}
void make_sound() override
 {
 cout << m_name << " barks: " << m_sound << "!" << endl;
 }
};
class Duck : public Animal {
 // implement
 public:
 Duck(string name, string sound = "Quack") : Animal(name, sound)
 {}
 void make_sound() override
 {
 cout << m_name << " quacks: " << m_sound << "!" << endl;
 }
};
class Horse : public Animal {
 // implement
 public:
 Horse(string name, string sound = "Neigh") : Animal(name, sound)
 {}
 void make_sound() override
 {
 cout << m_name << " nickers: " << m_sound << "!" << endl;
 }
};
class Pig : public Animal {
 // implement
 public:
 Pig(string name, string sound = "Oink") : Animal(name, sound)
 {}
 void make_sound() override
 {
 cout << m_name << " snorts: " << m_sound << "!" << endl;
 }
};
int main()
{
 int num_animals; // number of animals
 cin >> num_animals;


 Animal** animals = new Animal* [num_animals];// implement array creation
 cin.ignore();

 for(int i=0;i<num_animals;i++)
 {
 string input; // string input
 string name; // to store name
 string sound = ""; // to store sound
 int n=0; // animal's number

 cin >> n;
 getline(cin, input); // read complete line

 seperate_name_sound(input, name, sound);


 switch(n)
{
 case 1:
 if (sound == "")
 {
 animals[i] = new Cat(name);
 }
 else
 {
 animals[i] = new Cat(name, sound);
 }
 break;

 // implement: rest of cases
 case 2:
 if (sound == "")
 {
 animals[i] = new Cow(name);
 }
 else
 {
 animals[i] = new Cow(name, sound);
 }
 break;
 case 3:
 if (sound == "")
 {
 animals[i] = new Dog(name);
 }
 else
 {
 animals[i] = new Dog(name, sound);
 }
 break;
 case 4:
 if (sound == "")
 {
 animals[i] = new Duck(name);
 }
 else
 {
 animals[i] = new Duck(name, sound);
 }
 break;
 case 5:
 if (sound == "")
 {
 animals[i] = new Horse(name);
 }
 else
 {
 animals[i] = new Horse(name, sound);
 }
 break;
 case 6:
 if (sound == "")
 {
 animals[i] = new Pig(name);
 }
 else
 {
 animals[i] = new Pig(name, sound);
 }
 break;
 }

 }
 int sounds = 0;
 cin >> sounds;
 for(int i=0;i<sounds;i++)
 {
 int s;
 cin >> s;
 animals[s-1]->make_sound();
 }


 // implement: release the memory


 return 0;
}
