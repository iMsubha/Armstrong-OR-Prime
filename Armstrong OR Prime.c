#include<stdio.h>
#include<math.h>

void isPrime(int num){
    int i,flag=0;
    int root=sqrt(num);
    for(i=2;i<=root;i++)
        if(num%i == 0){
            flag=1;
        }
        if(flag==0){
            printf("%d is a Prime Number!\n",num);
        }else{
            printf("%d is NOT a Prime Number!\n",num);
        }
}

int order(int n){
    int count=0;
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
}

void isArmStrong(int num,int order){
    int n=num;
    int reminder=0;
    int result=0;
    float r;
    while(num != 0){
            reminder = num % 10;
            //printf("Reminder:%d\n",reminder);
            num = num / 10;
           // printf("Num: %d\n",num);
            r = pow(reminder,order);
            //printf("Cube: %f\n",r);
            result = result + r;
           // printf("Result: %d\n",result);
           // printf("\n");
        }
        if(n==result){
            printf("%d is an ArmStrong Number!\n",n);
        } else{
            printf("%d is NOT an ArmStrong Number!\n",n);
        }
}
int main(){
    int n,count;
    printf("Enter number:");
    scanf("%d",&n);
    count=order(n);
    isArmStrong(n,count);
    isPrime(n);
    //printf("%d is a Prime Number!",n);
}
