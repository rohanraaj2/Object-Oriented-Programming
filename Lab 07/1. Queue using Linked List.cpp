// 1-- Create a class Node, which has one variable for storing data and a
pointer which points to the next node
class Node
{
 public:
 int data;
 Node* ptr;
};
// 2 -- Create a class Queue ; which has two public pointers for front and
rear nodes
// and it also has two public functions void Enqueue(int x) and int
Dequeue()
// also add a function print_queue() which prints all the elements in
the queue
class Queue
{
 private:
 Node* front = nullptr;
 Node* rear = nullptr;
 public:
 void Enqueue (int x)
 {
 Node* y = new Node;
 (*y).data = x;
 if (front == nullptr && rear == nullptr)
 {
 front = y;
 rear = y;
 }
 else
 {(*rear).ptr = y;
 rear = y;}

 }
 int Dequeue()
 {
 Node* y;
 if (front != nullptr && rear != nullptr)
 {
 y = front;
 front = (*y).ptr;
 (*y).ptr = nullptr;
 // delete [] y;
 // y = nullptr;
 }
 return (*y).data;
 }
 void print_queue()
 {
 Node* current = nullptr;
 if (front != nullptr)
 {
 current = front;
 cout << (*current).data << " ";
 }
 while ((*current).ptr != nullptr && current != nullptr)
 {
 current = (*current).ptr;
 cout << (*current).data << " ";
 }
 cout << endl;
 }
};
