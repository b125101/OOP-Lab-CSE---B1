#include <iostream>
using namespace std;
class QueueDisplay {
    int queueSize;
    int *customerIDs;

public:
    QueueDisplay(int size = 0) {
        queueSize = size;

        if (queueSize > 0)
            customerIDs = new int[queueSize];
        else
            customerIDs = nullptr;
     }

    QueueDisplay(const QueueDisplay &other) {
        queueSize = other.queueSize;

        if (queueSize > 0) {
            customerIDs = new int[queueSize];
            for (int i = 0; i < queueSize; i++)
                customerIDs[i] = other.customerIDs[i];
        } else {
            customerIDs = nullptr;
        }
     }

    void insertID(int position, int id) {
        if (position >= 0 && position < queueSize)
            customerIDs[position] = id;
        else
            cout << "Invalid position.\n";
    }

    void display() const {
        cout << "Queue Size: " << queueSize << '\n';
        cout << "Customer IDs: ";

        for (int i = 0; i < queueSize; i++)
            cout << customerIDs[i] << ' ';

        cout << "\n";
    }

    friend void exchangeQueues(QueueDisplay &q1, QueueDisplay &q2);

    ~QueueDisplay() {
        delete[] customerIDs;
    }
};

void exchangeQueues(QueueDisplay &q1, QueueDisplay &q2) {
    swap(q1.queueSize, q2.queueSize);
    swap(q1.customerIDs, q2.customerIDs);
}

int main() {
    int size1, size2;

    cout << "Enter size of Queue 1: ";
    cin >> size1;

    cout << "Enter size of Queue 2: ";
    cin >> size2;

    QueueDisplay *queues = new QueueDisplay[2]{
        QueueDisplay(size1),
        QueueDisplay(size2)
    };

    int id;

    cout << "\nEnter Customer IDs for Queue 1:\n";
    for (int i = 0; i < size1; i++) {
        cout << "ID " << i + 1 << ": ";
        cin >> id;
        queues[0].insertID(i, id);
    }

    cout << "\nEnter Customer IDs for Queue 2:\n";
    for (int i = 0; i < size2; i++) {
        cout << "ID " << i + 1 << ": ";
        cin >> id;
        queues[1].insertID(i, id);
    }

    cout << "\nBefore Exchange:\n";
    queues[0].display();
    queues[1].display();

    exchangeQueues(queues[0], queues[1]);

    cout << "\nAfter Exchange:\n";
    queues[0].display();
    queues[1].display();

    delete[] queues;
    return 0;
}
