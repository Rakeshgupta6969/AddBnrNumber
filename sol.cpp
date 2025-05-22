// class Solution {
// public:
//     string addBinary(string a, string b) {
//         int n1 = a.size();
//         int n2 = b.size();

//         int num1 = 0, num2 = 0;

//         for (int i = n1 - 1; i >= 0; i--) {
//             num1 += (a[i] - '0') * pow(2, n1 - i - 1);
//         }

//         for (int i = n2 - 1; i >= 0; i--) {
//             num2 += (b[i] - '0') * pow(2, n2 - i - 1);
//         }

//         int sum = num1 + num2;
//         if (sum == 0) return "0";

class Solution {
    public:
     string addBinary(string a, string b) {
       string ans;
       int carry = 0;
       int i = a.length() - 1;
       int j = b.length() - 1;
   
       while (i >= 0 || j >= 0 || carry) {
         if (i >= 0)
           carry += a[i--] - '0';
         if (j >= 0)
           carry += b[j--] - '0';
         ans += carry % 2 + '0';
         carry /= 2;
       }
   
       reverse(begin(ans), end(ans));
       return ans;
   
      
       // using the brute force solution
      
        
        // base case.
   
       //  if((a.size() ==1 && a[0] == '0') && (b.size() ==1 && b[0] == '0')) return "0";
   
   
       // int n1 = 0;
       // int n2 = 0;
   
       //   for(int i = a.size()-1; i>=0; i--){
       //      n1 += (a[i] - '0')*pow(2,a.size()-1-i );
       //   }
   
       //      for(int i = b.size()-1; i>=0; i--){
       //      n2 += (b[i] - '0')*pow(2,b.size()-1-i );
       //   }
   
   
       //   int sum = n1+n2;
   
       //   string ans ="";
   
       //   while(sum>0){
       //       if(sum%2 == 1){
       //         ans += '1';
       //       }
       //       else{
   
       //           ans += '0';
       //       }
       //       sum = sum/2;
       //   }
   
       //  reverse(ans.begin(),ans.end());
       //  return ans;
   
   
     }
   };
   
   //         string result = "";
   //         while (sum > 0) {
   //             result += (char)((sum % 2) + '0');
   //             sum /= 2;
   //         }
   
   //         reverse(result.begin(), result.end());
   //         return result;
   //     }
   // };
   