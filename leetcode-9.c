//数学方法
bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int compared=x;
    int compare=0;
    while(x!=0){
        compare=compare*10+x%10;
        x=x/10;
    }
    
    if(compared==compare){
        return true;
    }else{
        return false;
    }
}
