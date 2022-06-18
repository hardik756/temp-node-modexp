#include<iostream>
#include<deque>

int circtour2(int pet[],int dis[],int n){
    std::deque<int>dq;
    int start=0,curr_pet=0,prev_pet=0;
    for(int i=0;i<n;i++){
        curr_pet+=(pet[i]-dis[i]);
        if(curr_pet<0){
            start=i+1;
            prev_pet+=curr_pet;
            curr_pet=0;
        }
    }
    return((curr_pet+prev_pet)>=0)?start+1:-1;
}


int circtour(int pet[],int dis[],int n){
    std::deque<int>dq;
    int tobeadded=0;
    int sum=0;
    int pos=1;
    int count=0;

    for(int i=0;i<n;i++){
        dq.push_back(pet[i]-dis[i]);
    }

    while(!dq.empty()){
        while(dq.front()<0){
            tobeadded+=dq.front();
            pos++;
            dq.pop_front();
        }
        while(sum>=0 && !dq.empty()){
            sum+=dq.front();
            count++;
            dq.pop_front();
        }
        if(sum<0){
            tobeadded+=sum;
            pos+=count;
            sum=0;
        }
    }
    if(sum+tobeadded<0){
        return -1;
    }
    else{
        return pos;
    }
}

int main(){
    int pet[]={4,9,7,1,11};
    int dis[]={6,6,6,6,6};
    std::cout<<circtour2(pet,dis,5);
std::cin.get();
}