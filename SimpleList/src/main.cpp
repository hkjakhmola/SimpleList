#include "include/List.hpp"

using namespace std;

int main( int argc, char* argv[] ){
    string s = string(argv[1]);
    List  l(s);
    if(argc > 1){
        l.print_menu();
    }
    else{
        cout<<" Username not supplied...exiting program"<<endl;
    }
    return 0;
}
