class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.size()!=0){
            int temp=output.top();
            output.pop();
            return temp;
        }
        else{
            while(input.size()!=0){
                int temp=input.top();
                input.pop();
                output.push(temp);
            }
            return temp;
        }
    }
    
    int peek() {
        if(outputstack.size()!=0) return outputstack.top();
          
        else{
            while(inputstack.size()!=0){
            int temp = inputstack.top();
            inputstack.pop();
            outputstack.push(temp);
            }
            return peek();
        }
    }
    
    bool empty() {
        if(inputstack.size()==0 && outputstack.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue objessct will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */