class Solution {
public:
    bool isGreaterThanTen(int num){
        if(num>9){
            return true;
        }
        return false;
    }
    int addDigits(int num) {
        if(num<10&&num>=0){
            return num;
        }

        while(isGreaterThanTen(num)){
            int remainder=num%10;
            num=num/10;
            num=num+remainder;
        }
        return num;
    }
};