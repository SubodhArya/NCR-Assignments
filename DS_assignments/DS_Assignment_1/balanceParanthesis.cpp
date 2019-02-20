//paranthesis evaluation
#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool checkParanthesis(string str){
		stack<char> st;
		for(int i=0;i<str.length();i++){
			char ch=str[i];
			if(ch=='('||ch=='['||ch=='{'){
				st.push(ch);
			}
			else if(ch==')'){
				if(!st.empty()){
					if(st.top()=='('){
						st.pop();
					}else{
						return 0;
					}
				}
				else{
					return 0;
				}
			}
			else if(ch=='}'){
				if(!st.empty()){
					if(st.top()=='{'){
						st.pop();
					}else{
						return 0;
					}
				}
				else{
					return 0;
				}
			}
  	      else if(ch==']'){
				if(!st.empty()){
					if(st.top()=='['){
						st.pop();
					}else{
						return 0;
					}
				}
				else{
					return 0;
				}
			}
		 else{
 			//ignore for other characters
 		}
		}
		if(st.empty()){
			return 1;
		}
		return 0;
}
int main(){

	string str;
	cin>>str;
	if(checkParanthesis(str)){
		cout<<"BALANCED\n";
	}
	else{
		cout<<"not balanced\n";
	}
	
}