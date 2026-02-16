#include <iostream>
#include <string>
#include <vector>


class Book{
private:
    std::string title;
    std::string author;
    int id;
public:  
    Book(const std::string &t, const std::string &a, int i) : title{t}, author{a}, id{i}{
    }

    void set_title(const std::string &t){
        title = t;
    }
    void set_author(const std::string &a){
        author = a;
    }
    void set_id(int  i){
        id = i;
    }

    std::string get_title(){
        return title;
    }
     std::string get_author(){
        return author;
    }

     int get_id(){
        return id;
    }

    };

class Library{
private:
    std::vector<Book> books;
public:
    Library() = default;  

    void addBook(const Book& book){
        books.push_back(book);
    }
    void listBooks() {
        for(int i = 0; i < books.size(); ++i){
            std::cout << books[i].get_title() <<" ";
            std::cout << books[i].get_author() <<" ";
            std::cout << books[i].get_id()<< " ";
            std::cout << std::endl;
        }
    }
    Book* findBookByTitle(const std::string& title){
        for(int i = 0; i < books.size(); ++i){
            if(books[i].get_title() == title){
                return &books[i];
            }
        }
        return nullptr;
    }
};

int main()
{
    Library L;
    Book B("girq1", "hexinak1", 1);
    Book A("girq2", "hexinak2", 2);

    L.addBook(B);
    L.addBook(A);

    L.listBooks();
    
}