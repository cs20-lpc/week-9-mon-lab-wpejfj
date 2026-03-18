#include <iostream>
#include "LinkedQueue.hpp"

int main(int argc, char **argv) {
  LinkedQueue<int> q;

  try {
    q.front();
  } catch(std::string &e) {
    std::cout << e << '\n';
  }

  try {
    q.back();
  } catch(std::string &e) {
    std::cout << e << '\n';
  }

  try {
    q.dequeue();
  } catch(std::string &e) {
    std::cout << e << '\n';
  }

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);

  std::cout << "length: " << q.getLength() << '\n';
  std::cout << "front: " << q.front() << '\n';
  std::cout << "back: " << q.back() << '\n';

  while (!q.isEmpty()) {
    std::cout << q.front() << ' ';
    q.dequeue();
  }
  std::cout << std::endl;
  std::cout << q.isEmpty() << '\n';

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  LinkedQueue<int> q1(q);
  q.enqueue(40);
  std::cout << "length of copy: " << q1.getLength() << '\n';
  std::cout << "front: " << q1.front() << '\n';
  std::cout << "back: " << q1.back() << '\n';
  
  LinkedQueue<int> q2;
  q2 = q1;
  q1.clear();
  std::cout << "length of copy: " << q1.getLength() << '\n';
  try {
    std::cout << "front: " << q1.front() << '\n';
  } catch(std::string &e) {
    std::cout << e << '\n';
  }

  try {
    std::cout << "back: " << q1.back() << '\n';
  } catch(std::string &e) {
    std::cout << e << '\n';
  }
  
  q2 = q2;
  std::cout << q2.getLength() << '\n';

  q2.clear();
  std::cout << q2.isEmpty() << '\n';

  LinkedQueue<std::string> sq;
  sq.enqueue("a");
  sq.enqueue("b");
  sq.enqueue("c");

  while (!sq.isEmpty()) {
    std::cout << sq.front() << ' ';
    sq.dequeue();
  }

  std::cout << std::endl;

  return 0;

}
    
