// Header.h*
// PROJECT 05
// by Hieu Nguyen
//
#pragma once
#include <string>
#include <iostream>
// Part A
class URL {
private:
	std::string url;
	std::string scheme;
	std::string author;
	std::string path;
public:
	URL(std::string url);
	std::string getURL() const;
	std::string getScheme()const;
	std::string getAuthor()const;
	std::string getPath()const;
};
// add non-member funtion 
std::ostream& operator <<(std::ostream& out, const URL url);
void displayURL(const URL & url);

// Part B
class Image {
public:
	Image(std::string fileName, std::string imageType, std::string date, double size, std::string authorName, int width, int height, int aperture, std::string exposureTime, int shutterSpeed, int iso, bool flash);

	std::string getFileName()const;
	void setFileName(std::string fileName);

	std::string getImageType()const;
	void setImageType(std::string imageType);

	std::string getDate()const;
	void setDate(std::string date);

	double getSize()const;
	void setSize(double size);

	std::string getAuthorName() const;
	void setAuthorName(std::string authorName);

	int getWidth() const;
	void setWidth(int width);

	int getHeight()const;
	void setHeight(int heigh);

	int getAperture()const;
	void setAperture(int aperture);

	std::string getExposureTime() const;
	void setExposureTime(std::string exposureTime);

	int getIso()const;
	void setIso(int iso);

	bool getFlash()const;
	void setFlash(bool flash);

private:
	std::string fileName;
	std::string imageType;
	std::string date;
	double size;
	std::string authorName;
	int width;
	int height;
	int aperture;
	std::string exposureTime;
	int iso;
	bool flash;

};

std::ostream& operator <<(std::ostream& out, const Image & image);
void imageInformation(const Image& image);

// Part C
class Item {
private:
	std::string _name;
	int _quantity;
	double _price;
	long _id;
public:
	Item(std::string name, long id, double price, int quantity);
	std::string getName() const;
	long getId() const;
	double getPrice()const;
	int getQuantity()const;
	void update(int number);
};
// Add non-member for Item
std::ostream& operator<<(std::ostream& out, const Item &item);
class Store {
public:
	Store();
	int getTotal() const;
	void storeValue();
	
	int getBooks() const;
	int getColoredPencils() const;
	int getColoringPaper() const; 
	int getMarkers() const;
	int getCrayons() const;
	int getStaples() const;

	void setBooks(int);
	void setColoredPencils(int) ;
	void setColoringPaper(int) ;
	void setMarkers(int) ;
	void setCrayons(int) ;
	void setStaples(int) ;

	bool process(const Order& order);
private:
	Item books ;
	Item coloredPencils ;
	Item coloringPaper ;
	Item markers ;
	Item crayons ;
	Item staples;
};
// add non-member for store
std::ostream& operator << (std::ostream& out, const Store& store);
class Order {
public:
	Order();
	void add(std::string name);
	double totalPrice() const;

	int getBooks() const;
	int getColoredPencils() const;
	int getColoringPaper() const;
	int getMarkers() const;
	int getCrayons() const;
	int getStaples() const;


private:
	Item books;
	Item coloredPencils;
	Item coloringPaper;
	Item markers;
	Item crayons;
	Item staples;
};


