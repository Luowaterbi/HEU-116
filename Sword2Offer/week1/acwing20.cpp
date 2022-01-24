class MyQueue {
public:
    
	void copy(stack<int> &a, stack<int> &b) {//把a栈中的数全都倒给b栈 
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
    void push(int x){//往主栈中加入元素 
        stk.push(x);
    } 

    /** Removes the element from in front of queue and returns that element. */
    int pop(){//把主栈全部倒给缓存栈，此时缓存栈顶就是最开始加入的元素，取出来并弹出，再倒回去 
        copy(stk,cache);
        int res=cache.top();
        cache.pop();
        copy(cache,stk);
        return res;
    }

    /** Get the front element. */
    int peek(){//和pop操作一个道理，只不过不弹出 
        copy(stk,cache);
        int res=cache.top();
        copy(cache,stk);
        return res;
    }

    /** Returns whether the queue is empty. */
    bool empty(){//判断主栈是否为空即可 
        return stk.empty();
    }
};
