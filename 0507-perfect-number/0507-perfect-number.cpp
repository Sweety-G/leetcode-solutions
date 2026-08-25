class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1 ; i*i<=num; i++){
            if(num%i==0){
                if(i != num)
                sum += i;
            
        if(num/i!=i)
            if(num/i != num)
                sum += num/i;}
        }
       return(sum == num);
    }
     
    
};