#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll sum_of_list(vector<ll> array){
    ll sum = 0;for(ll n: array)sum+=n;
    return sum;
}
vector<ll> get_max_non_negative_sub_array(vector<ll> array){
    vector<vector<ll>> vvi;

    vector<ll> sub_list_vector;

    ll max_sum = INT_MIN;
    vector<pair<ll, vector<ll>>> sum_list_pair;

    ll length = array.size();
    for(ll i=0;i<length;i++)
    {
        ll data = array[i];
        // if non-negative then append to a new list
        if(data>=0)
        {
            sub_list_vector.push_back(data);
        }

        //if negative number then push the previous list and clear the list for new elements
        else{
            if(sub_list_vector.empty())continue;

            //sum find before sublist push
            ll sum_list = sum_of_list(sub_list_vector);
            if(sum_list>max_sum) {
                max_sum = sum_list;
            }
            sum_list_pair.push_back(make_pair(sum_list,sub_list_vector));
            //


                vvi.push_back(sub_list_vector);
            sub_list_vector.clear();
        }

        //if at the end there is any element in the list then push the list
        if(i==length-1 && !sub_list_vector.empty()){
            //sum find before sublist push
            ll sum_list = sum_of_list(sub_list_vector);
            if(sum_list>max_sum) {
                max_sum = sum_list;
            }
            sum_list_pair.push_back(make_pair(sum_list,sub_list_vector));
            //


            vvi.push_back(sub_list_vector);
        }

    }
    //start: print the sub lists
//    cout <<"----------------------------------" << endl;
//    for(vector<int> list : vvi){
//        for(int data: list){
//            cout << data << " ";
//        }
//        cout << endl;
//    }
//    cout <<"----------------------------------" << endl;
    //end: print the sub lists

    //max sum sub list need to be returned
    // if tie
    //      - return the list with max length
    //           - if tie return segment with minimum starting index


    //solution
    // first find the sum of all and put it in a map

    // sum - length - index - list

//    int max_sum = INT_MIN;
  //  pair<int, vector<int>> sum_list_pair;
//    for(vector<int> list : vvi){
//        int sum_list = sum_of_list(list);
//        if(sum_list>INT_MIN){
//            max_sum = sum_list;
//        }
//    }
//cout << "==============" << endl;



    ll max_list_size = INT_MIN;

    vector<pair<ll,vector<ll>> > max_sum_lists;//list with max sum
    for(pair<ll,vector<ll>> pivi:  sum_list_pair){
        if(pivi.first==max_sum){
            ll list_size = pivi.second.size();
            if(list_size>max_list_size){
                max_list_size = list_size;
            }
            max_sum_lists.push_back(make_pair(list_size,pivi.second));
        }
    }
    for(pair<ll,vector<ll>> pivi:  max_sum_lists) {
        if(pivi.first == max_list_size){
            return pivi.second;
        }
    }



//    cout << "==============" << endl;










    return array;
}

int main(){
    vector<ll> inputArray;
    inputArray.push_back(1);
    inputArray.push_back(13);
    inputArray.push_back(9);
    inputArray.push_back(-1);
    inputArray.push_back(-2);
    inputArray.push_back(-3);
    inputArray.push_back(-11);
    inputArray.push_back(-1);
    inputArray.push_back(10);
    inputArray.push_back(13);
    vector<ll> outputArray = get_max_non_negative_sub_array(inputArray);
    for(ll o :outputArray){
        cout << o << endl;
    }
    return 0;
}