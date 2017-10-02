/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int count=0,num1,num2;
    struct ListNode *sum=(struct ListNode*)malloc(sizeof(struct ListNode));
    sum->next=NULL;
    struct ListNode *ans=sum;
    while(!(sum==NULL)){
       if(l1==NULL){
           num1=0;       
       }else{
           num1=l1->val;
       }
        if(l2==NULL){
            num2=0;
            
        }else{
            num2=l2->val;
        }
            
        
        
        if(num1+num2+count>=10){
            sum->val=(num1+num2+count)%10;
            count=(num1+num2+count)/10;
        }else{     
             
            
                sum->val=num1+num2+count;
                count=0;
            
             
        }
        
        if(l1!=NULL){
            l1=l1->next;
        }
        
       if(l2!=NULL){
            l2=l2->next;
        }
        if(l1==NULL && l2==NULL ){
            break;
        }
        sum->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        sum=sum->next;
        sum->next=NULL;
    }
    
    if(count==1){
        sum->next=(struct ListNode*)malloc(sizeof(struct ListNode));
        sum=sum->next;
        sum->val=1;
        sum->next=NULL;
    }
    return ans;
    

    
}
