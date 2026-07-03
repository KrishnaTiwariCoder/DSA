#include <bits/stdc++.h>

using namespace std;


// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> stack;
//         for(int i = 0; i < s.length() ; i++ ){
//             char element = s[i];
//             if(string("([{").find(element)!= string::npos){
//                 stack.push(element);
//             } else {
//                 if(stack.empty()) return 0;
//                 switch (element){
//                 case ')':
//                     if(stack.top()=='(') stack.pop();
//                     else return 0;
//                     break;
//                 case ']':
//                     if(stack.top()=='[') stack.pop();
//                     else return 0;
//                     break;
//                 case '}':
//                     if(stack.top()=='{') stack.pop();
//                     else return 0;
//                     break;
//                 default:
//                     break;
//                 }

//             }
//         }
//         return stack.empty();
//     }
// };

class Solution {
public:
    int numberOfSubstrings(string s) {
        int sum = 0;
        cout<<s<< s.length() << endl;
        for (int i =0; i<s.length(); i++){
            // string checked_string =s[i]+"";
            for (int j=i; j<s.length()-1; j++){
                // checked_string = checked_string + s[i+j];
                // cout << "i: " << i << " j: " << j << endl;
                cout << j << endl;
            }
            
            cout << "\n\n-------------------" << endl;
            cout << i << endl;
            cout << "-------------------\n\n" << endl;
        }
        cout << "\n\n\n";
        cout << "--------- THE RESULT ----------------" << "\n\n"; 
        return sum;
    }
};


int main(){
    Solution s;
    string given;
    cin>>given;
    cout << s.numberOfSubstrings(given);
    return -1;
}