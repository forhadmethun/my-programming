package ctci.src.codes.ch7;

import java.util.*;
class Q7_5{


}

class OnlineReaderSystem{
    private Library library; 
    private UserManager userManager; 
    private Display display; 

    private Book activeBook; 
    private User activeUser; 

    public OnlineReaderSystem(){
        userManager = new UserManager(); 
        library = new Library(); 
        display = new Display();
    }
    public Library getLibrary(){return library;}
    public UserManager getUserManager(){return userManager;}
    public Book getActiveBook(){return activeBook;}

    public void setActiveBook(Book book){
        activeBook = book; 
        display.displayBook(book);
    }

    public User getActiveUser(){return activeUser;}
    public void setActiveUser(User user){
        activeUser = user; 
        display.displayUser(user);
    }

}

class Library{
    private HashMap<Integer, Book> books;

    public Book addBook(int id, String details){
        if(books.containsKey(id)){
            return null;
        }
        Book book = new Book(id, details); 
        books.put(id,book); 
        return book;
    }
    public boolean remove(Book b){return remove(b.getID());}
    public boolean remove(int id){
        if(!books.containsKey(id)){return false;}
        books.remove(id); 
        return true;
    }
    public Book find(int id){return books.get(id);}
}

class UserManager{
    private HashMap<Integer, User> users; 
    public User addUser(int id, String details, int accountType){
        if(users.containsKey(id)){return null;}
        User user = new User(id, details, accountType); 
        users.put(id, user); 
        return user;
    }
    public User find(int id){return users.get(id);}
    public boolean remove(User u){return remove(u.getID());}
    public boolean remove(int id){
        if(!users.containsKey(id)){return false;}   
        users.remove(id); 
        return true;        
    }
}

class Display{
    private Book activeBook; 
    private User activeUser; 
    private int pageNumber;

    public void displayUser(User user){
        activeUser = user; 
        refreshUsername(); 
    }

    public void displayBook(Book book){
        pageNumber = 0;
        activeBook = book; 
        refreshTitle(); 
        refreshPage(); 
        refreshDetails();       
    }

    public void turnPageForward(){
        pageNumber++; 
        refreshPage();
    }
    public void turnPageBackwrd(){
        pageNumber--; 
        refreshPage();
    }

    public void refreshUsername(){}
    public void refreshTitle(){}
    public void refreshDetails(){}
    public void refreshPage(){}

}

class Book{
    private int bookId; 
    private String details; 

    public Book(int id, String det){
        bookId = id; 
        details = det;
    }

    public int getID(){return bookId;}
    public void setID(int id){bookId = id;}
    public String getDetails(){return details;}
    public void setDetails(String d){details = d;}

}

class User{
    private int userId; 
    private String details; 
    private int accountType; 

    public void renewMembership(){}

    public User(int id, String details, int accountType){
        userId = id; 
        this.details = details; 
        this.accountType = accountType; 

    }

    public int getID(){return userId;}
    public void setID(int id){userId = id;}
    public String getDetails(){return details;}
    public void setDetails(String details){this.details = details;}

    public int getAccuntType(){return accountType;}
    public void setAccountType(int t){accountType = t;}

}