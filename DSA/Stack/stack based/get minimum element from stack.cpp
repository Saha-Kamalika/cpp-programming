class Solution{
    int minEle;
    stack<int> s;
    public:
        stack<int> ss;
       /*returns min element from stack*/
       int getMin(){
           if(ss.size()==0) return -1;
           return ss.top();
       }
       /*returns poped element from stack*/
       int pop(){
           if(ss.size()==0) return -1;
           minEle=s.top();
           s.pop();
           if(ss.top()==minEle) ss.pop();
           return minEle;
       }
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
           if(ss.empty() || ss.top()>=x) ss.push(x);
       }
};
