#include <bits/stdc++.h>
using namespace std;

bool isqueue(vector<int> push_operation,vector<int> pop_operation){
    queue<int> q;
    for(int i=0;i<(int)push_operation.size();i++){
        q.push(push_operation[i]);
    }
    vector<int> queue_vector;
    int sz = (int) q.size();
    for(int i=0;i<sz;i++){
        int top = q.front();
        queue_vector.push_back(top);
        q.pop();
    }

//    for(int i=0;i<pop_operation.size();i++){
//        cout << pop_operation[i] << "- ";
//    }
//    cout << endl;
//    for(int i=0;i<queue_vector.size();i++){
//        cout << queue_vector[i] << " ";
//    }
//    cout << endl;


    if(pop_operation == queue_vector){
        return true;
    }
    else return false;
}


bool isstack(vector<int> push_operation,vector<int> pop_operation){
    stack<int> q;
    for(int i=0;i<(int)push_operation.size();i++){
        q.push(push_operation[i]);
    }
    vector<int> queue_vector;
    int sz = (int) q.size();
    for(int i=0;i<sz;i++){
        int top = q.top();
        queue_vector.push_back(top);
        q.pop();
    }

//    for(int i=0;i<pop_operation.size();i++){
//        cout << pop_operation[i] << "- ";
//    }
//    cout << endl;
//    for(int i=0;i<queue_vector.size();i++){
//        cout << queue_vector[i] << " ";
//    }
//    cout << endl;


    if(pop_operation == queue_vector){
        return true;
    }
    else return false;
}

bool ispriorityqueue(vector<int> push_operation,vector<int> pop_operation){
    priority_queue<int> q;
    for(int i=0;i<(int)push_operation.size();i++){
        q.push(push_operation[i]);
    }
    vector<int> queue_vector;
    int sz = (int) q.size();
    for(int i=0;i<sz;i++){
        int top = q.top();
        queue_vector.push_back(top);
        q.pop();
    }

//    for(int i=0;i<pop_operation.size();i++){
//        cout << pop_operation[i] << "- ";
//    }
//    cout << endl;
//    for(int i=0;i<queue_vector.size();i++){
//        cout << queue_vector[i] << " ";
//    }
//    cout << endl;


    if(pop_operation == queue_vector){
        return true;
    }

    else return false;
}

int main(){
    freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int tc;
    while(scanf("%d",&tc)!=EOF){
        vector<int> push_operation;
        vector<int> pop_operation;

        for(int i=0;i<tc;i++){
            int a,b;
            scanf("%d%d",&a,&b);
            if(a==1){
                push_operation.push_back(b);
            }
            else{
                pop_operation.push_back(b);

            }
        }
        if(isqueue(push_operation,pop_operation)){
            printf("queue\n");
        }
        if(isstack(push_operation,pop_operation)){
            printf("stack\n");
        }
        if(ispriorityqueue(push_operation,pop_operation)){
            printf("priority queue\n");
        }


    }
    return 0;
}