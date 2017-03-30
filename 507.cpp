class Solution {
public:
    int checkPerfectNumber(int num) {
       int count = 0;
       if (num == 1) return false;
       if (num == 0) return false;
       for (int i = 0; i <= 100; i++){
          count =  pow(2, i-1)  *( pow(2, i) - 1);
          if (count == num)
            return true;
       }
    return  false;
       
       
}

};
