//双指针法，要分奇偶
//不知道为什么会出现dddddddd"，在自己的Ubuntu 16.04 就没有这个问题
//改成C++就是对的
char* longestPalindrome(char* s) {
    int size=strlen(s); //int size = s.size();
    int len=1,right=0,left=0;
    int ansLeft=0,ansRight=0;
    for(int i=0;i<size;i++){
        //偶数
        for(left=i-1,right=i;left>=0 && right<size && s[left]==s[right]; --left, ++right){
           
        }
        if( len < right-left-1){
            len=right-left-1;
            ansLeft=left+1;
            ansRight=right;
                
        }
        //奇数
        for(left=i-1,right=i+1;left>=0 && right<size && s[left]==s[right]; --left, ++right){
            
        }
        if( len <right-left-1){
            len=right-left-1;
            ansLeft=left+1;
            ansRight=right;
        }
      
    }
//return s.substr(ansLeft, len);
    printf("%d ,%d \n",len,ansLeft);
    char *ans=(char *)malloc(len);
    strncpy(ans,s+ansLeft,len);
    printf ("%s",ans);
    return ans;
}
