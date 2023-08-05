#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::vector;

class Book
{
    private:
        string title;
        string author;
        string isbn;
        bool available;
    
    public:
        Book(const string& title, const string& author, const string& isbn, bool available)
            : title(title), author(author), isbn(isbn), available(available){}
        
        void setTitle(const string& newTitle)
        {
            title = newTitle;
        }

        string getTitle()
        {
            return title;
        }

        void setAuthor(const string& newAuthor)
        {
            author = newAuthor;
        }

        string getAuthor()
        {
            return author;
        }
        void setIsbn(const string& newIsbn)
        {
            isbn = newIsbn;
        }

        string getIsbn()
        {
            return isbn;
        }

        void setAvailable(bool value)
        {
            available = value;
        }

        bool getAvailable()
        {
            return available;
        }
};

class Library
{
    private:
        vector<Book> collection;

    public:
        void addBook(Book book)
        {
            collection.push_back(book);
        }

        void removeBook(Book book)
        {
            vector<Book>::iterator it = find(collection.begin(), collection.end(), book);
            collection.erase(it);
        }
};

int main()
{
    return 0;
}