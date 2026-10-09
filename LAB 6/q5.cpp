#include <iostream>
using namespace std;

class Score {
    int score;

public:
    Score(int s = 0) {
        score = s;
    }

    Score& operator++() {
        ++score;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() const {
        cout << score << endl;
    }
};
int main() {
    int n;

    cout << "Enter initial score: ";
    cin >> n;

    Score s1(n), s2(n);
    Score prefixResult = ++s1;
    Score postfixResult = s2++;

    cout << "Prefix result: ";
    prefixResult.display();

    cout << "Score after prefix: ";
    s1.display();

    cout << "Postfix result: ";
    postfixResult.display();

    cout << "Score after postfix: ";
    s2.display();

    return 0;
}
