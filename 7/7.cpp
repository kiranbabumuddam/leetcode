class Solution {
public:
        long long int reverse(long long int x) {
        long long int reverseDigit=0;
        long long int temp=abs(x);
        while(temp>0){
            reverseDigit=(reverseDigit*10)+(temp%10);
            temp=temp/10;
        }
        if(((reverseDigit>pow(2,31)-1) or (reverseDigit<pow(-2,31)))){
            return 0;
        }
        else if(x<0){
            reverseDigit=reverseDigit*(-1);
        }
        
        return reverseDigit;    
    }
};
