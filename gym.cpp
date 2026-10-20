#include <iostream>
using namespace std;

class gymMember {
    private:
    int memberid;
    static int totalmember;
    public:
    void registerMember(int id) {
    memberid = id;
    totalmember++; 
    }
    static void showTotalMembers(void) {
        cout<<"Total Gym members: "<<totalmember<<endl;
    }
    
};
int gymMember:: totalmember;
 int main () {
    gymMember g1;
    g1.registerMember(1);
    g1.showTotalMembers();
    return 0;
 }