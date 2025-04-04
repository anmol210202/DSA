class Solution {
public:
    
    int helper(int n){
        int val = 0;
        while(n!=0){
            int x=n%10;
            n/=10;
            val+=x*x;
        }
        return val;
    }

    bool isHappy(int n) {
        // using slow fast pointer now
        int fast = n;
        int slow = n;
        while(1){
            slow = helper(slow);
            fast = helper(helper(fast));

            if(slow ==1 || fast == 1) return true;

            if(fast == slow) return false;
        }

        // unordered_set<int> box;
        // while(n!=1){
        //     box.insert(n);
        //     n=helper(n);
        //     if(box.find(n)!=box.end()) return false;
        // }
        // return true;
    }
};
