//日了狗了，这个傻逼题目。"   +0 123"期待的是零,不是123，也就是说只能开始的时候为空格
int myAtoi(char* str) {
    if( strlen(str)== 0){
        return 0;
    }
    
    int len=strlen(str);
    
    
    char sign='+';
    int x,ans=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            continue;
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
        }else{
            break;
        }
        
    }
    printf("%d",ans);
    if(sign=='-'){
        return -ans;
    }else{
        return ans;
    }
}
