#include <iostream>
using namespace std;
struct book {
    string name;
    string author;
    int pages;
    double price;
};


int main()
{
    //array
    book books[10];
    books[0].name = "boda";



    //??????? ??????
    book b1 = { "book1","author1",255,444.44 };
    cout << b1.price;
    

    
}