#include <iostream>
#include <queue>
using namespace std;

// Function to display the elements in the queue
void displayQueue(queue<int> q) {
    cout << "Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q; // Initialize a queue

    // Enqueue (insert elements)
    cout << "Enqueuing 10, 20, 30 into the queue..." << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    // Display the queue
    displayQueue(q);

    // Dequeue (remove elements)
    cout << "Dequeuing an element..." << endl;
    if (!q.empty()) {
        q.pop(); // Remove the front element
    }

    // Display the queue
    displayQueue(q);

    return 0;
}
