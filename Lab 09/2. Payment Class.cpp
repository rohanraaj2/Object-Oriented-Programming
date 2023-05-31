#include <iostream>
using namespace std;
class Payment
{
 private:
 double amount_of_payment;

 public:
 Payment(double amount)
 {
 amount_of_payment = amount;
 }
 void paymentDetails()
 {
 cout << "Amount of ";
 }

 double getAmount()
 {
 return amount_of_payment;
 }
};
class CashPayment : public Payment
{
 public:
 CashPayment(double amount): Payment{amount}
 {}
 void paymentDetails()
 {
Payment :: paymentDetails();
 cout << "cash payment: $" << getAmount() << endl;
 }
};
class CreditCardPayment : public Payment
{
 private:
 string name;
 string date;
 string card_num;

 public:
 CreditCardPayment(double amount, string n, string d, string card) :
Payment{amount}
 {
 name = n;
 date = d;
 card_num = card;
 }
 void paymentDetails()
 {
 Payment :: paymentDetails();
 cout << "credit card payment: $" << getAmount() << endl;
 cout << "Name on the credit card: " << name << endl;
 cout << "Expiration date: " << date << endl;
 cout << "Credit card number: " << card_num << endl;
 }
};
