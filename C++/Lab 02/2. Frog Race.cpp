using namespace std;
void race(int prime_up, int prime_down, int tron_up, int tron_down)
{
 int d1 = 0;
 int d2 = 0;
 int c = 0;
 string winner;
 while (d1 < 1000 && d2 < 1000)
 {
 c += 1;
 cout << "Jump " << c << endl;

 d1 = d1 + prime_up;
 if (d1 < 1000)
 {
 d1 = d1 - prime_down;
 cout << "Frog Prime is at " << d1 << " meters." << endl;
 }
 else
 {
 cout << "Frog Prime" << " has cleared the well!" << endl;
 }
 d2 = d2 + tron_up;
 if (d2 < 1000)
 {
 d2 = d2 - tron_down;
 cout << "Frogatron is at " << d2 << " meters." << endl;
 }
 else
 {
 cout << "Frogatron" << " has cleared the well!" << endl;
 }
 }
 cout << "***** END OF RACE *****" << endl;
 if (d1 > 999 && d2 < 1000)
 {
 cout << "Frog Prime" << " wins in " << c << " jumps!";
 }
 else if (d2 > 999 && d1 < 1000)
 {
cout << "Frogatron" << " wins in " << c << " jumps!";
 }
 else if (d1 > 999 && d2 > 999)
 {
 cout << "TIE" << " in " << c << " jumps!";
 }
}
