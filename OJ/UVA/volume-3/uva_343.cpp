
//1.abs
//2.sq
//3.max
//min
//swap
//bigmod
//gcd
//lcm
//nCr
//fib
//sieve                      prime
//q_sort
//fact









//{ Template
using namespace std;
//{ C-headers
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cfloat>
#include <cctype>
#include <cassert>
#include <ctime>
//}
//{ C++-headers
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>



//abs of any numbers
#define abs(x) (((x) < 0) ? - (x) : (x))
#define sq(x) x*x
//value of pi
#define PI 2*acos (0.0)
//}
typedef long long ll;
typedef unsigned long long llu;
#define memo(a,v) memset(a,v,sizeof(a)) //need to see in the internet
#define all(a) a.begin(),a.end() //it is also unclear
/*
#define db double
#define pb push_back
#define pii pair<int ,int >
#define NL puts("")
*/

#define OC printf("Case %d:",i);
//}
//}




//max of two numbers
//--------------------
template <class T, class U> inline T max(T &a, U &b)
{
	return a > b ? a : b;
}





//min of two numbers
//...................
template <class T, class U> inline T min(T &a, U &b)
{
	return a < b ? a : b;
}






//swap two numbers
//....................
template <class T, class U> inline T swap(T &a, U &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}







//function for calculating BIGMOD
//................................
template<class T>
T bigmod(T b, T p, T m)  // b^p % m type
{
	if (p == 0)return 1;
	else if (p % 2 == 0)return sq(bigmod(b, p / 2, m)) % m;
	else return ((b%m) % bigmod(b, p - 1, m)) % m;
}//....end of the code bigmod






//code for GCD
//..................
template <class T>
T gcd(T a, T b)
{
	/*
	if (a%b)return b;
	else return (b, a%b);
	*/
	while (b > 0){
		a = a%b;
		a ^= b;
		b ^= a;
		a ^= b;
	}
	return a;

}//...end of the code gcd






//code for lcm
//.....................
template<class T>
T lcm(T a, T b)
{
	return ((a*b) / gcd(a, b));
}







//code for nCr
//....................
template <class T>
void Divbygcd(T& a, T& b)
{
	if (a > 0 && b > 0){
		T g = gcd(a, b);
		if (g > 0){
			a /= g;
			b /= g;
		}
	}
}
template<class T>
T nCr(T n, T k)
{
	T numerator = 1;
	T denominator = 1;
	T toMul;
	T toDiv;
	T i;
	if (k > n/2)k = n - k;
	for (i = k; i; i--){
		toMul = n - k + i;
		toDiv = i;
		Divbygcd(toMul, toDiv);
		Divbygcd(numerator, toDiv);
		Divbygcd(toMul, denominator);
		numerator *= toMul;
		denominator *= toDiv;
	}
	return numerator / denominator;

} //... end of the code of nCr






//n'th fibonacci number
//....................
template<class T>
T fib(T n) {
	T i, h, j, k , t;
	i = h = 1;
	j = k = 0;
	while (n > 0) {
		if (n % 2 == 1) { // if n is odd
			t = j*h;
			j = i*h + j*k + t;
			i = i*k + t;
		}
		t = h*h;
		h = 2 * k*h + t;
		k = k*k + t;
		n = (int)n / 2;
	}
	return j;

} // ......... endl of fibonacci function ..







//sieve prime generator
//...........................

void sieve(int L, int U) { //give prime between L & U
	int i, j, d;
	d = U - L + 1; /* from range L to U, we have d=U-L+1 numbers. */
	/* use flag[i] to mark whether (L+i) is a prime number or not. */
	bool *flag = new bool[d];
	for (i = 0; i<d; i++) flag[i] = true; /* default: mark all to be true */
	for (i = (L % 2 != 0); i<d; i += 2) flag[i] = false;
	/* sieve by prime factors staring from 3 till sqrt(U) */
	for (i = 3; i <= sqrt(U); i += 2) {
		if (i>L && !flag[i - L]) continue;
		/* choose the first number to be sieved -- >=L,
		divisible by i, and not i itself! */
		j = L / i*i; if (j<L) j += i;
		if (j == i) j += i; /* if j is a prime number, have to start form next
							one */
		j -= L; /* change j to the index representing j */
		for (; j<d; j += i) flag[j] = false;
	}
	if (L <= 1) flag[1 - L] = false;
	if (L <= 2) flag[2 - L] = true;
	for (i = 0; i<d; i++) if (flag[i]) cout << (L + i) << " ";
	cout << endl;
}//..........end of sieve prime generator ........







//code for factorial
//.......................
template <class T>
T fact(T n)
{
	T sum = 1 , i;
	for (i = 1; i <= n; i++){
		sum = sum*i;
	}
	return sum;
}






//quick sort ...
//qsort(<arrayname>, <size>, sizeof(<elementsize>), compare_function); ...needs cstdlib header.....

int compare_function(const void *a, const void *b) {
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}

/*
int compare_function(const void *a, const void *b) {
	return (strcmp((char *)a, (char *)b));
}

int compare_function(const void *a, const void *b) {
	double *x = (double *)a;
	double *y = (double *)b;
	// return *x - *y; // this is WRONG...
	if (*x < *y) return -1;
	else if (*x > *y) return 1; return 0;
}

typedef struct {
int day,month,year;
char *name;
} birthday;
int compare_function(const void *a,const void *b) {
birthday *x = (birthday *) a;
birthday *y = (birthday *) b;
if (x->month != y->month) // months different
return x->month - y->month; // sort by month

else { // months equal..., try the 2nd field... day
if (x->day != y->day) // days different
return x->day - y->day; // sort by day
else // days equal, try the 3rd field... year
return x->year - y->year; // sort by year
}
}

*/








//..................................................................................

//singly link list
//-----------------------


struct singly_link_list
{
	int data;
	struct singly_link_list* next;
};


//insert first
void singly_link_list_insert_first(struct singly_link_list* &head, int data)
{
	struct singly_link_list* new_node = (struct singly_link_list*)malloc(sizeof(struct singly_link_list));
	new_node->data = data;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
	}
	new_node->next = head;
	head = new_node;

}


//insert last
void singly_link_list_insert_last(struct singly_link_list* &head, int data)
{
	struct singly_link_list* new_node = (struct singly_link_list*)malloc(sizeof(struct singly_link_list));
	new_node->data = data;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
	}
	else{

		struct singly_link_list* temp = head;
		while (temp->next != NULL){
			temp = temp->next;
		}
		//new_node->next = temp;
		temp->next = new_node;
	}
}


//print all nodes
void singly_link_list_print(struct singly_link_list* &head)
{
	struct singly_link_list* temp = head;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;

	}
	cout << endl;
}



//delete data

void singly_link_list_delete_first(struct singly_link_list* &head)
{
	if (head == NULL) return;
	struct singly_link_list* temp = head;

	head = head->next;
	free(temp);
}
void singly_link_list_delete_last(struct singly_link_list* &head)
{
	if (head == NULL) return;
	struct singly_link_list* temp = head ,*cur = NULL;
	while (temp->next != NULL)
	{
		cur = temp;
		temp = temp->next;
	}
	if (cur!=NULL)
	cur->next = temp->next;
	free(temp);

}
void singly_link_list_delete_any(struct singly_link_list* &head,int data)
{
	struct singly_link_list* temp = head,*prev = NULL , *next = NULL;
	if (temp->data == data)
	{
		head = head->next;
		free(temp);
		return;
	}
	while (temp->data != data)
	{
		prev = temp;
		temp = temp->next;

	}
	if (temp->next == NULL) return;
	next = temp->next;
	prev->next = next;
	free(temp);


}




//...............................................................



//---------------------------------------------------------------------------------------------------------------------------------------------------
//double link list

struct doubly_link_list{
	int data;
	struct doubly_link_list* next;
	struct doubly_link_list* prev;
};


//insert first
void doubly_link_list_insert_first(struct doubly_link_list* &head, int data)
{
	struct doubly_link_list* new_node = (struct doubly_link_list*)malloc(sizeof(struct doubly_link_list));
	new_node->data = data;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (head == NULL)
	{
		head = new_node;
		return;
	}
	new_node->next = head;
	head->prev = new_node;
	//head->next = new_node;
	//new_node->prev = head;

	head = new_node;

}

void doubly_link_list_print(struct doubly_link_list* &head)
{
	struct doubly_link_list* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

//--------------------end of doubly link list-------------------------------------------------------------------------------------------------------------------------------








//---------------------------------------------------------------------------------------------------------------------------------------------------
//graph --------
vector<int> v[100];
int vertex, edge;


void graph_insert()
{
	cout << "Enter vertex & node: ";
	cin >> vertex >> edge;
	int x, y;
	for (int i = 0; i < edge; i++){
		cout << "vertext->edge: ";
		cin >> x >> y;

		v[x].push_back(y);


	}

}


void graph_print()
{
	cout << "the graph: " << endl;
	for (int i = 0; i <= edge; i++)
	{
		cout << i << "->";
		for (int j = 0; j < v[i].size(); j++){
			//cout << "i:" << i <<" j:" << j << " " <<  v[i][j] << " ";
			cout  << v[i][j] << "->";
		}
		cout <<"end" <<  endl;
	}

}


//end of graph
//---------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------------------------------------





//---------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------

int func(char ch)
{
    if(ch>='A' && ch<='Z'){
        return ch - 'A' + 10;
    }

}
int exponent(int base,int power) {
int i,result = 1;
for (i=0; i<power; i++) result *= base;
return result;}

int base(int value, int b)
{
    int num = value ;
    int result = 0;
    int i = 0;
    while(num!=0){
        result += (num%10)*exponent(b,i);
        num = num/10;
        i++;
    }
    cout << "result " << result << endl;
    return result ;
}


int main(int argc, char const *argv[])
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char a[100];
	while(gets(a))
    {
        int sum = 0;
        int second;
        for(int i=0 ;i < strlen(a) ; i++)
        {
            if(a[i] >= '0' && a[i] <='9')
            {

                sum = sum * 10 + a[i] - '0' ;
            }
            second  = func(a[i]);

        }
        int big = max(sum,second);
        int small = min(sum,second);





       cout <<"one:" <<  big << endl;
        cout <<"two:" << small << endl;

        //base(12,3);
        base(10,10);
        base(10,11);
       // base(2,3);

        cout << "till working " << endl;

       // cout << a << endl;
        for(int i=2;i<=35;i++)
        {
            for(int j=small+1+i;j<=35;j++){
                if(base(big,i)==base(small,j)){
                    printf("%d (base %d) = %d (base %d)",big,base(big,i),small,base(small,j));

                    break;
                }
            }

        }



        getchar();

    }
	getchar();
	return 0;
}
