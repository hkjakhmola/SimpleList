#include <iostream>
#include <vector>
using namespace std;

class List{
    private:
        vector<string> list;
        string name;
    protected:
    public:
    List(string name){
        this->name=name;
    };
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    ~List(){};
};
