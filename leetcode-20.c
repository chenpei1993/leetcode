//主要是用栈
bool isValid(char* s) {
    char stack[1000000];
    int top=-1;
    int len=0;
    
    while(s[len]) {
        if (s[len]==')') {
            if (top>=0 && stack[top]=='(')
                top--;
            else
                return false;
        }
        else if (s[len]==']') {
            if (top>=0 && stack[top]=='[')
                top--;
            else
                return false;
        }
        else if (s[len]=='}') {
            if (top>=0 && stack[top]=='{')
                top--;
            else
                return false;
        }
        else {
            top=top+1;
            stack[top]=s[len];
        }
        
        len++;
    }
    return top==-1;          
}
