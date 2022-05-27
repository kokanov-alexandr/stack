#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
// Лабараторная работа, задание №4

const int MAX_SIZE = 100;
struct Stack {
    size_t head;
    int* data;

    Stack() {
        head = 0;
        data = new int[MAX_SIZE];
    }

    int Is_Empty() {
        return head == 0;
    }

    void Push(int value) {
        data[head++] = value;
    }

    int Get() {
        if (Is_Empty())
            return -1;
        return data[head - 1];
    }

    int Remove() {
        if (Is_Empty())
            return -1;
        return data[head--];
    }

    void Clear() {
        head = 0;
        free(data);
    }
};



int main() {
    Stack stack = Stack();
    stack.Push(1);
    cout << stack.Get() << endl;
    stack.Push(2);
    cout << stack.Get() << endl;
    stack.Push(3);
    cout << stack.Get() << endl;
    stack.Remove();
    cout << stack.Get();
    return 0;
}