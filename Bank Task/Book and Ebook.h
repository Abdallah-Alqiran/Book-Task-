#pragma once

#include<iostream>

using namespace std;

class Book
{
// initialize varialbles
protected:
	int bookId;
	string title;
	string author;
	double price;

public:

	// creating constructor
	Book(int bookId, string title, string author, double price) {
		this->bookId = bookId;
		this->title = title;
		this->author = author;
		this->price = price;
	}

	// displaying all elements
	void display() {
		cout << "Book ID = " << bookId << endl;
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Price = " << price << endl;
	}

	// add discount to the book price
	void applyDiscount(double discount) {
		price =  price - price * discount;
	}
	

	// compare book price with Ebook price
	bool operator>(Book book) {
		return this->price > book.price;
	}

};

class Ebook : private Book
{
private:
	double fileSize;

public:
	// creating constructor
	Ebook(int bookId, string title, string author, double price, double fileSize) 
		: Book(bookId, title, author, price) {
		this->fileSize = fileSize;
	}

	// displaying all elements
	void display() {
		cout << "Book ID = " << bookId << endl;
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Price = " << price << endl;
		cout << "file size = " << convertSize() << endl;
	}


	// converting the size from MB to KB
	double convertSize() {
		return fileSize * 1024;
	}


};

