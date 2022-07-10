#include <bits/stdc++.h>
using namespace std;


class Yoga{
    public:
        static int capacity;
        vector<string> vect;
        int top;
        vector<string> waitlist;
    public:
        Yoga(){
            top = -1;
        }
        void book(string user_name){
            if(top==capacity-1){
                cout<<"Sorry! All Slots are full\n";
                cout<<"Press 1 for Wait\n";
                cout<<"Press 2 for Exit\n";
                cout<<"Enter your choice: ";
                int x; cin>>x;
                if(x==1){
                    waitlist.push_back(user_name);
                }
            }else{
                top++;
                vect.push_back(user_name);
                cout<<"Booked Successful\n";
            }
        }
        void cancel(string user){
            auto fnd = find(vect.begin(),vect.end(),user)-vect.begin();
            if(vect[fnd]!=user){
                cout<<"Wrong Choice\n";
            }else{
                if(waitlist.size()>0){
                    vect[fnd] = waitlist[0];
                    waitlist.erase(waitlist.begin());
                }else{
                    vect.erase(vect.begin()+fnd);
                    top--;
                }
            }
        }
        
        void print_user_list(){
            for(int i=0;i<vect.size();i++){
                cout<<vect[i]<<" ";
            }
        }
        void print_wtlist(){
            for(int i=0;i<waitlist.size();i++){
                cout<<waitlist[i]<<" ";
            }
        }
};

int Yoga::capacity = 100;
class Gym{
    public:
        static int capacity;
        vector<string> vect;
        int top;
        vector<string> waitlist;
    public:
        Gym(){
            top = -1;
        }
        void book(string user_name){
            if(top==capacity-1){
                cout<<"Sorry! All Slots are full\n";
                cout<<"Press 1 for Wait\n";
                cout<<"Press 2 for Exit\n";
                cout<<"Enter your choice: ";
                int x; cin>>x;
                if(x==1){
                    waitlist.push_back(user_name);
                }
            }else{
                top++;
                vect.push_back(user_name);
                cout<<"Booked Successful\n";
            }
        }
        void cancel(string user){
            auto fnd = find(vect.begin(),vect.end(),user)-vect.begin();
            if(vect[fnd]!=user){
                cout<<"Wrong Choice\n";
            }else{
                if(waitlist.size()>0){
                    vect[fnd] = waitlist[0];
                    waitlist.erase(waitlist.begin());
                }else{
                    vect.erase(vect.begin()+fnd);
                    top--;
                }
            }
        }
        
        void print_user_list(){
            for(int i=0;i<vect.size();i++){
                cout<<vect[i]<<" ";
            }
        }
        void print_wtlist(){
            for(int i=0;i<waitlist.size();i++){
                cout<<waitlist[i]<<" ";
            }
        }
};

int Gym::capacity = 100;
class Dance{
    public:
        static int capacity;
        vector<string> vect;
        int top;
        vector<string> waitlist;
    public:
        Dance(){
            top = -1;
        }
        void book(string user_name){
            if(top==capacity-1){
                cout<<"Sorry! All Slots are full\n";
                cout<<"Press 1 for Wait\n";
                cout<<"Press 2 for Exit\n";
                cout<<"Enter your choice: ";
                int x; cin>>x;
                if(x==1){
                    waitlist.push_back(user_name);
                }
            }else{
                top++;
                vect.push_back(user_name);
                cout<<"Booked Successful\n";
            }
        }
        void cancel(string user){
            auto fnd = find(vect.begin(),vect.end(),user)-vect.begin();
            if(vect[fnd]!=user){
                cout<<"Wrong Choice\n";
            }else{
                if(waitlist.size()>0){
                    vect[fnd] = waitlist[0];
                    waitlist.erase(waitlist.begin());
                }else{
                    vect.erase(vect.begin()+fnd);
                    top--;
                }
            }
        }
        void print_user_list(){
            for(int i=0;i<vect.size();i++){
                cout<<vect[i]<<" ";
            }
        }
        void print_wtlist(){
            for(int i=0;i<waitlist.size();i++){
                cout<<waitlist[i]<<" ";
            }
        }
};

int Dance::capacity = 100;
int main() {
	//cin>>yc>>gc>>dc;
	Yoga yoga;
	Gym gym;
	Dance dance ;
	int n; cout<<"No of Users you want to book/cancel: "; 
	cin>>n;
	while(n--){
	    string str;
	    int a;
	    cout<<"Which type of class you want to choose :\n";
	    cout<<"Press 1 for yoga\n";
	    cout<<"Press 2 for gym\n";
	    cout<<"Press 3 for dance\n";
	    cout<<"Enter your choice: ";
	    cin>>a;
	    if(a==1){
	        cout<<"Press 1 for booking\n";
	        cout<<"Press 2 for cancelling\n";
	        cout<<"Enter your choice: ";
	        int b; cin>>b;
	        cout<<"Enter your name: ";
	        cin>>str;
	        if(b==1){
	            yoga.book(str);
	        }else{
	            yoga.cancel(str);
	        }
	    }else if(a==2){
	        cout<<"Press 1 for booking\n";
	        cout<<"Press 2 for cancelling\n";
	        cout<<"Enter your choice: ";
	        int b; cin>>b;
	        cout<<"Enter your name: ";
	        cin>>str;
	        if(b==1){
	            gym.book(str);
	        }else{
	            gym.cancel(str);
	        }
	    }else if(a==3){
	        cout<<"Press 1 for booking\n";
	        cout<<"Press 2 for cancelling\n";
	        cout<<"Enter your choice: ";
	        int b; cin>>b;
	        cout<<"Enter your name: ";
	        cin>>str;
	        if(b==1){
	            dance.book(str);
	        }else{
	            dance.cancel(str);
	        }
	    }else{
	        cout<<"Sorry! Class is not available\n";
	    }
	}
	dance.print_wtlist();
	dance.print_user_list();
	return 0;
}
