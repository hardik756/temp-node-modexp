#include<iostream>
#include<queue>

struct triplet{
    int val,apos,vpos;
    triplet(int value,int ap,int vp){
        val=value;
        apos=ap;
        vpos=vp;
    }
};

struct mycmp{
    bool operator()(triplet &t1,triplet &t2){
        return t1.val>t2.val;
    }
};

std::vector<int>mergearr(std::vector<std::vector<int>> &arr){
    std::vector<int>res;
    std::priority_queue<triplet,std::vector<triplet>,mycmp>pq;
    for(int i=0;i<arr.size();i++){
        triplet t(arr[i][0],i,0);
        pq.push(t);
    }
    while(pq.empty()==false){
        triplet curr=pq.top();
        pq.pop();
        res.push_back(curr.val);
        int ap=curr.apos;
        int vp=curr.vpos;
        if(vp+1<arr[ap].size()){
            triplet t(arr[ap][vp+1],ap,vp+1);
            pq.push(t);
        }
    }
    return res;
}

int main(){



    std::cin.get();
}