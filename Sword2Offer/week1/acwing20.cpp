class MyQueue {
public:
    
	void copy(stack<int> &a, stack<int> &b) {//��aջ�е���ȫ������bջ 
        while(a.size()){
            b.push(a.top());
            a.pop();
        }
    }
	
	/** Initialize your data structure here. */
    stack<int> stk, cache;
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x){//����ջ�м���Ԫ�� 
        stk.push(x);
    } 

    /** Removes the element from in front of queue and returns that element. */
    int pop(){//����ջȫ����������ջ����ʱ����ջ�������ʼ�����Ԫ�أ�ȡ�������������ٵ���ȥ 
        copy(stk,cache);
        int res=cache.top();
        cache.pop();
        copy(cache,stk);
        return res;
    }

    /** Get the front element. */
    int peek(){//��pop����һ������ֻ���������� 
        copy(stk,cache);
        int res=cache.top();
        copy(cache,stk);
        return res;
    }

    /** Returns whether the queue is empty. */
    bool empty(){//�ж���ջ�Ƿ�Ϊ�ռ��� 
        return stk.empty();
    }
};
