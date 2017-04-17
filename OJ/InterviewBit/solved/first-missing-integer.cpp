#include<bits/stdc++.h>
using namespace std;

//space taking more..
//int firstMissingPositive(vector<int> &A) {
//    // Do not write main() function.
//    // Do not read input, instead use the arguments to the function.
//    // Do not print the output, instead return values as specified
//    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//    if((int)A.size()==1 && A[0]>1)return 1;
//    set<int> s;
//
//    for(int i=0;i<A.size();i++){
//        s.insert(A[i]);
//    }
//    set<int> ::iterator it=s.begin(),prev=s.end();
//    prev--;
//    //cout << "prev: " << *prev << endl;
//    if(*prev <=0)return 1; // handling all negative case...
//
//
//    while(*it<=0 && it!=prev){
////        prev = it;
////        cout << " *it -> " << *it << endl;
//        it++;
//    }
//    //it--;
//    prev = it;
//    prev--;
//   // cout <<*prev << " hiseb " <<  *it << endl;
//    if(*prev<=0 && *it>1)return 1;
//
//  // cout << *prev<< "->" <<  *it << endl;
//   // cout << "- > " << start << endl;
//  //  cout << "dhuksi " << endl;
//
//    if((*it-1)>0)return 1;
//    int start = *it;
//   // cout << "start : " << start << endl;
//    if(start <=0)return 1;
////    cout << "bal " << endl;
////    int start = *s.begin();
////    set<int> ::iterator it=s.end();
////    it--;
////    int end = *it;
//////    cout << start << "  " << end << endl;
////    if(end<=0) return 1;
////
//    int missing = 1;
//    //cout << "start : " << start << endl;
//    for(;it!=s.end();it++) {
////        cout << " -> " << *it << " : " << start << endl;
//        if (*it != start ){//&& *it != 0) {
//           // cout << "dhukse " << start << *it << endl;
////            missing = start;//*it;
//            break;
//            // return start;
//        }
//        start++;
//    }
//    return start;
//
//
//
//
//}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int segregate(vector<int> &arr){
    int j=0,i;
    for(i=0;i<arr.size();i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return j;

}
int findMissingPositive(int* arr,int size){
    for(int i=0;i<size;i++){
        cout << "->" <<  arr[i] << endl;
        if(abs(arr[i]) -1 < size && arr[abs(arr[i]) -1]> 0 ){
            // cout << "dhukeni -> "<<abs(arr[i]) -1 << endl;
            arr[abs(arr[i]) -1] = -arr[abs(arr[i]) -1];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0)return i+1;
    }
    return size+1;

}
int firstMissingPositive(vector<int> &A){
    int shift = segregate(A);
    int *arr = &A[0];
    return findMissingPositive(arr+shift,A.size()-shift);
}

int main(){
//    vector<int> v{1};
    vector<int> v{3,4,-1,1};
//    vector<int> v{948, 20, 84, 710, 471, 606, 995, 581, -4, 428, 149, 832, 740, 943, 450, 974, 829, 721, 821, 476, 763, 4, 523, 937, 814, 624, 935, 87, 127, 816, 239, 33, 561, 999, 904, 282, 844, 923, 750, 551, 432, 9, 373, 387, 114, 376, 265, 801, 228, 454, 474, 764, 268, 680, 472, 431, 133, 785, 752, 643, 441, 151, 969, 395, 437, 94, 259, 973, 535, 272, 456, 546, 79, 677, 0, 109, 522, 295, 466, 956, 723, 157, 772, 865, 997, 771, 922, 980, 567, 939, 651, 478, 852, 926, 913, 494, 882, 207, 915, 645, 754, 385, 874, 554, 706, 722, 10, 374, 96, 647, 280, 418, 737, 538, 867, 850, 600, 23, 730, 742, 224, 511, 361, 251, 809, 907, 271, 319, 866, 848, 594, 566, 113, 211, 334, 644, 826, 430, 929, 603, 165, 147, 788, 529, 539, 633, 275, 602, 544, 540, 853, 123, -1, 443, 942, 386, 68, 465, 782, 250, 458, 174, 70, 919, 462, 347, 26, 589, 880, 648, 237, 294, 641, 707, 516, 507, 802, 989, 779, 519, 62, 619, 584, 358, 362, 277, 43, 198, 467, 625, 611, 212, 468, 767, 778, 173, 791, 331, 11, 461, 572, 97, 902, 558, 413, 28, 179, 370, 842, 568, 500, 311, 550, 464, 345, 411, 274, 181, 396, 339, 39, 760, 575, 327, 889, 579, 840, 734, 254, 934, 532, 29, 622, 780, 73, 479, 322, 2, 599, 227, 685, 65, 510, 716, 289, 912, 574, 262, 916, 924, 304, 57, 353, 40, 341, 521, 131, 307, 526, 398, 225, 63, 776};
//    vector<int> v{-8,-7,0};
//    vector<int> v{894, 669, 852, 722, 778, 169, 247, 927, 875, 858, 396, 760, 318, 409, 640, 976, 419, 600, 711, 610, 864, 655, 859, 567, 7, 487, 953, 632, 544, 158, 53, 919, 45, 699, 493, 414, 586, 460, 339, 540, 12, 948, 515, 16, 116, 772, 529, 606, 684, 214, 724, 811, 925, 703, 454, 592, 330, 143, 41, 401, 570, 326, 885, 943, 836, 252, 119, 773, 768, 447, 581, 237, 380, 182, 457, 868, 667, 109, 702, 692, 542, 517, 966, 583, 983, 273, 641, 691, 985, 115, 574, 216, 372, 298, 411, 784, 95, 251, 389, 354, 964, 430, 991, 799, 824, 826, 714, 238, 967, 977, 291, 545, 355, 287, 425, 305, 118, 902, 479, 388, 19, 61, 301, 782, 688, 893, 673, 195, 971, 693, 797, 996, 3, 314, 353, 103, 391, 905, 316, 734, 54, 939, 648, 526, 448, 255, 690, 114, 715, 148, 376, 878, 483, 408, 804, 585, 79, 644, 621, 221, 345 };
    cout << firstMissingPositive(v) << endl;

    return 0;
}