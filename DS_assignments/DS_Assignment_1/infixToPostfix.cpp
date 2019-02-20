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
bool isOperand(char ch){
	if(ch>='0'&&ch<='9'){
		return 1;
	}
	return 0;
}
bool isParanthesis(char ch){
	if(ch=='{'||ch=='('||ch=='['||ch==']'||ch==')'||ch=='}'){
		return 1;
	}
	return 0;
}
bool isValidExpression(string s){
	for(int i=0;i<s.length();i++){
		if(i==0 && (s[i]=='/'||s[i]=='+'||s[i]=='*'||s[i]=='-')){
			return 0;
		}
		if(i==s.length()-1 && (s[i]=='/'||s[i]=='+'||s[i]=='*'||s[i]=='-')){
			return 0;
		}
		if((s[i]=='/'||s[i]=='+'||s[i]=='*'||s[i]=='-')&& (!isOperand(s[i+1]) ||!isParanthesis(s[i+1]))){
			return 0;
		}
		
	}
	return 1;
}
int getPrecedence(char ch){
	if(ch=='*'||ch=='/'){
		return 3;
	}
	else if(ch=='+'||ch=='-'){
		return 2;
	}
	else{
		return 1;
	}
}
string convertToPostfix(string s){
	stack<char> st; string newstr="";
	//a+b*c
	for(int i=0;i<s.length();i++){
		char ch=s[i];
	//	cout<<endl<<"the character is "<<ch<<endl;
		if(s[i]>='0'&&s[i]<='9'){
	//		cout<<endl<<"appending "<<ch<<" to string"<<endl;
			newstr=newstr+s[i];
		}
		else{
		//	cout<<"came to else";
			if(st.empty()){
			//	cout<<"came to empty stack";
			//	cout<<endl<<"added to stack "<<ch<<endl;
				st.push(s[i]);
			}
			else if(ch=='{'||ch=='('||ch=='['){
			//	cout<<endl<<" added to cute stack "<<ch<<endl;
				st.push(s[i]);
			}
		else if(ch=='*'||ch=='/'||ch=='-'||ch=='+'){
			//	cout<<endl<<"came here for arith oper"<<endl;
				if(getPrecedence(ch)>getPrecedence(st.top())){
				//	cout<<endl<<"added "<<ch<<endl;
					st.push(ch);
				}
				else{
				//	cout<<"entered else"<<endl;
					while(1){
					//	cout<<endl<<"entered to true loop"<<endl;
						if(getPrecedence(ch)<=getPrecedence(st.top())	){
					//	cout<<endl<<"same or less precedence"<<endl;
					//	cout<<endl<<"appending to strting"<<st.top()<<endl;
					    newstr=newstr+st.top();
						st.pop();
				    	}
						break;
					}
					//cout<<endl<<"added to stack assumed "<<ch<<endl;
					st.push(ch);
				}
			}
			
			else if(ch=='}'){
				while(1){
					if(st.top()=='{'){
						st.pop();
						break;
					}
				//	cout<<endl<<"appending to strting"<<st.top()<<endl;
					newstr=newstr+st.top();
					st.pop();
				}
			}
			else if(ch==')'){
				while(1){
					if(st.top()=='('){
						st.pop();
						break;
					}
				//	cout<<endl<<"appending to strting"<<st.top()<<endl;
					newstr=newstr+st.top();
					st.pop();
				}
			}
			else if(ch==']'){
				while(1){
					if(st.top()=='['){
						st.pop();
						break;
					}
				//	cout<<endl<<"appending to strting"<<st.top()<<endl;
					newstr=newstr+st.top();
					st.pop();
				}
			}
			else if(ch=='*'||ch=='/'||ch=='-'||ch=='+'){
				//cout<<endl<<"came here for arith oper"<<endl;
				if(getPrecedence(ch)>getPrecedence(st.top())){
				//	cout<<endl<<"added "<<ch<<endl;
					st.push(ch);
				}
				else{
				//	cout<<"entered else"<<endl;
					while(1){
					//	cout<<endl<<"entered to true loop"<<endl;
						if(getPrecedence(ch)<=getPrecedence(st.top())	){
						//cout<<endl<<"same or less precedence"<<endl;
					//	cout<<endl<<"appending to strting"<<st.top()<<endl;
					    newstr=newstr+st.top();
						st.pop();
				    	}
						break;
					}
					//cout<<endl<<"added to stack assumed "<<ch<<endl;
					st.push(ch);
				}
			}
		}
//	  cout<<endl<<"string progress: "<<newstr<<endl;
//	  cout<<endl<<"stack size now: "<<st.size()<<endl;
//	  cout<<"-----------------------------------------------------"<<endl;	
	}
	while(!st.empty()){
	//	cout<<endl<<"appending to strting"<<st.top()<<endl;
			newstr=newstr+st.top();
			st.pop();
	}
 return newstr;	
}
int main(){

	string str,poststr;
	cin>>str;
	if(checkParanthesis(str)){
	//	if(isValidExpression(str)){
		cout<<"BALANCED AND VALID\n";
		poststr = convertToPostfix(str);
	}
//	else{
//		cout<<endl<<"BALANCED BUT NOT VALID"<<endl;
//	}
	//}
	else{
		cout<<"not balanced\n";
		return 0;
	}
	cout<<endl<<"final string is: "<<poststr<<endl;
	
}
