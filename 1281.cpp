//1281. Subtract the Product and Sum of Digits of an Integer


class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,r;
        while(n){
            r=n%10;
            product=product*r;
            sum=sum+r;
            n=n/10;

        }
        return product-sum;
        
    }
};