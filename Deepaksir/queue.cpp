#include <bits/stdc++.h>
using namespace std;
int main() {
    std::queue<int> q;

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access the front and back elements
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element: " << q.back() << std::endl;

    // Remove an element from the front
    q.pop();

    // Access the front and back elements again
    std::cout << "Front element after pop: " << q.front() << std::endl;
    std::cout << "Back element after pop: " << q.back() << std::endl;

    // Check the size of the queue
    std::cout << "Size of the queue: " << q.size() << std::endl;

    // Check if the queue is empty
    if (q.empty()) {
        std::cout << "The queue is empty." << std::endl;
    } else {
        std::cout << "The queue is not empty." << std::endl;
    }

    return 0;
}
