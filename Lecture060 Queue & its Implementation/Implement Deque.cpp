class Deque {
    int *arr;
    int front, rear, size, capacity;

public:
    // Constructor to initialize deque of given capacity
    Deque(int n) {
        capacity = n;
        arr = new int[n];
        front = -1;
        rear = -1;
        size = 0;
    }

    // Push at front
    bool pushFront(int x) {
        if (isFull()) return false;

        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + capacity) % capacity;
        }

        arr[front] = x;
        size++;
        return true;
    }

    // Push at rear
    bool pushRear(int x) {
        if (isFull()) return false;

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }

        arr[rear] = x;
        size++;
        return true;
    }

    // Pop from front
    int popFront() {
        if (isEmpty()) return -1;

        int val = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }

        size--;
        return val;
    }

    // Pop from rear
    int popRear() {
        if (isEmpty()) return -1;

        int val = arr[rear];
        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + capacity) % capacity;
        }

        size--;
        return val;
    }

    // Get front element
    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    // Get rear element
    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }

    // Check if empty
    bool isEmpty() {
        return size == 0;
    }

    // Check if full
    bool isFull() {
        return size == capacity;
    }
};
