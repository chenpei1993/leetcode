//日了狗了，这个傻逼题目。
int myAtoi(char* str) {
    if( strlen(str)== 0){
        return 0;
    }
    
    int len=strlen(str);
   
    
    char sign='+';
    int x;
    unsigned long long ans=0;
    int i,begin;
    for(i=0;i<len;i++){
        if(str[i]!=' '){
            begin=i;
            break;
        }
    }
    
    for(int i=begin;i<len;i++){
        if(str[i]==' '){
            break;
        }
        
        if(str[i]=='-' || str[i]=='+'){
            if('0'<=str[i+1] && '9'>=str[i+1] ){
                sign=str[i];
                i++;
            }else{
                return 0;
            }
            
        }
       
        if('0'<=str[i] && '9'>=str[i] ){
            x=str[i]-'0';
            ans=ans*10+x;
            if(ans>INT_MAX ){
                return sign=='+' ? INT_MAX : INT_MIN ;
            }
        }else{
            break;
        }
        
    }
  
                
    
    if(sign=='-'){
        return -ans;
    }else{
        return ans;
    }
}
