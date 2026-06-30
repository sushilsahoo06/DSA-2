#include <queue>

class MyStack {
private:
    std::queue<int> q;

public:
    MyStack() {
        // The default constructor is fine since std::queue initializes itself
    }
    
    void push(int x) {
        // Record the current size of the queue
        int s = q.size();
        
        // Push the new element to the back
        q.push(x);
        
        // Rotate the previous elements to the back of the queue
        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */