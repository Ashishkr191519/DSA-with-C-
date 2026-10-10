#include <iostream>
#include <vector>
using namespace std;

int main(){
    // creation of verctor

    vector<int> ans ;
    // cout << * (ans.begin()) << endl;
    // cout << * (ans.end());
    // end mai appand krne ke liye -> push_back()
    ans.push_back(10);
    ans.push_back(20);
    ans.push_back(40);
    // cout << ans.size()<<endl;

    // ans.pop_back();
    // cout << ans.size();
    // 1st element nikalne ke liye -> front()
    // cout << ans.front()<<endl;
    // // last element ko nikalne ke liye -> back()
    // cout << ans.back()<<endl;
    // // vector empty hai ya nahi check krne ke liye -> empty() -> ye 0 ya 1 ke form mai return krega agar direct print krwaye tou 0 -> false 1-> true
    // if(ans.empty()){
    //      cout << "vector is empty";
    // }
    // cout<<"vector is not empty";
    // cout <<ans[2]<<endl;
    // cout <<ans.at(2);
    // itrate krke looping kr sakte hai -> at() ke wajah se
    // for(int i = 0 ; i < ans.size(); i++){
    //     cout << ans.at(i) << " ";
    // }
    
    // .clear() -> vector ke andar sabhi element delete kr dega

    // intsert() -> ye fuction 2 argument leta hai eek mai -> kis position mai krna hai 2nd mai -> kya instert krna hai

    // ans.insert(ans.begin(),10);
    // cout << ans.at(1) << endl;

    // itreator kese bnate hai or use 
    // konse vector par bnane hai iterrator -> vector <int>
    // iterator ka naame 'a' rahega;
    // // iterator kaha point kr raha hai ans vector ke starting mai
    // vector<int>::iterator a = ans.begin();
    // // looping kese krte hai isse

    // while (a != ans.end())
    // {
    //     /* code */
    //     cout << *a <<" " <<endl;
    //     a++;
    // }
    // 2d array kaise bnate hai vector ke through
// this is vector with same coloumn 
   vector<vector<int>>ans(4,vector<int>(5,0));
   int totalRow = ans.size();
   int totalColoumn = ans[0].size();
    return 0;


// Now we will make a new vector with each row has diffrenet number of coloums -> Jacked array

vector<vector<int>>ans2(4);
ans2[0] = vector<int>(5);
ans2[1] =vector<int>(2),
ans[2] =vector<int>(3)
}