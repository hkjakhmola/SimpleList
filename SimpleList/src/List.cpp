#include "include/List.hpp"
void List::print_menu(){
    int choice=0;
    while(1){
        cout<<"--------------------------------"<<endl;
        cout<<"1. print list"<<endl;
        cout<<"2. add to list"<<endl;
        cout<<"3. delete from list"<<endl;
        cout<<"Anyother key to exit"<<endl;
    
        cout<< "Enter choice: "<<endl;
        cin>>choice;
        switch (choice){
            case 1: 
                print_list();
            break;
            case 2: 
                add_item();
            break;
            case 3: 
                delete_item();
            break;
            default:
                return;
        }            
    }
    cin.clear();
}

void List::add_item(){
    string item;
    cout<<" \nPlease add an item..Enter when done"<<endl;
    cin>>item;
    list.push_back(item);
}

void List::delete_item(){

    if(list.size() < 1){
        cout<<"list is empty"<<endl;
        return; 
    }
    cout<<"deleted item is"<<endl;
    list.pop_back();
 }

void List::print_list(){

    if(list.size() < 1){
        cout<<"list is empty"<<endl;
        return; 
    }
    for(long unsigned int i=0; i<list.size();i++){
        cout<<i<<" : "<< list[i]<<endl;
    } 
}
