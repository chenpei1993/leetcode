int strStr(char* haystack, char* needle) {
    int ans=0,i,j;
    int m=strlen(haystack);
    int n=strlen(needle);
    int fuck=m-n+1;
    if( strlen(needle)==0){
        return ans;
    }
    printf("%d",fuck);
    for(i=0;i<fuck;i++){
        for(j=0;j<strlen(needle);j++){
            if(*(haystack+i+j)!=*(needle+j)){
                break;
            }
            
        }
        
        if(j==strlen(needle)){
            
            return i;
        }
        
    }
    ans=-1;
    return ans;
}
