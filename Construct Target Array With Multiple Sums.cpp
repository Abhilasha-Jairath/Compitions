class Solution {

public:

    bool isPossible(vector<int>& target) {

        int n = target.size();

        long long sum = 0;

        int max = 0;

        

        for(int i=0;i<n;i++){

            sum += target[i];

            if(target[max]<target[i]){

            max = i;

            }

        }

        long diff = sum - target[max];

        if(target[max]==1 || diff==1){

            return 1;

        }

        if(diff>target[max] || diff==0 || target[max]%diff==0){

            return 0;

        }

        target[max]%=diff;

        

        return isPossible(target);

    }

};
