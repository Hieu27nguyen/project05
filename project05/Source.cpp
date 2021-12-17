#include "Header.h"




// Part A
URL::URL(std::string U) {
    url = U;
    scheme = U.substr(0, 6);
    std::string newString = U.substr(8);
    std::string::size_type position = newString.find("/");
    author = U.substr(6, (position + 2));
    path = U.substr((position + 8));
}
std::string URL::getScheme() const{
    return scheme;
}
std::string URL::getAuthor() const {
    return author;
}
std::string URL::getPath() const {
    return path;
}
std::string URL::getURL() const {
    return url;
}

//add of non-member function for part 1 
std::ostream& operator <<(std::ostream& out, const URL url) {
    out << "URL: " << url.getURL() << "\n";
    out << "SCHEME: " << url.getScheme() << "\n";
    out << "AUTHORITY: " << url.getAuthor() << "\n";
    out << "PATH: " << url.getPath() << "\n";
    return out;
}

// display URl
void displayURL(const URL & url)
{
    std::cout << "scheme : " << url.getScheme() << "\n";
    std::cout << "authority : " << url.getAuthor() << "\n";
    std::cout << "path : " << url.getPath() << "\n";
    std::cout << "URL : " << url.getURL() << "\n";
}


// Part B
Image::Image(std::string name, std::string type, std::string _date, double _size, std::string _authorName, int _width, int _height, int _aperture, std::string _exposureTime, int _shutterSpeed, int _iso, bool _flash) {

    setFileName(name);
    setImageType(type);
    setDate(_date);
    setSize(_size);
    setAuthorName(_authorName);
    setWidth(_width);
    setHeight(_height);
    setAperture(_aperture);
    setExposureTime(_exposureTime);
    setIso(_iso);
    setFlash(_flash);
}
std::string Image::getFileName()const {
    return fileName;
}
void Image::setFileName(std::string name) {
    fileName = name;
}


std::string Image::getImageType() const {
    return imageType;
}
void Image::setImageType(std::string type) {
    if (imageType == "PNG" || imageType == "GIF" || imageType == "JPEF") {
        imageType = type;
    }
    else {
        imageType = "Invalid Type";
    }
}

std::string Image::getDate() const {
    return date;
}
void Image::setDate(std::string _date) {
    date = _date;
}

double Image::getSize() const {

    return size;
}
void Image::setSize(double _size) {
    if (_size < 0) {
        std::cout << "Incorrect size, cannot be negative\n";
        return;
    }
    size = _size;
}

std::string Image::getAuthorName() const {
    return authorName;
}
void Image::setAuthorName(std::string _authorName) {
    authorName = _authorName;
}

int Image::getWidth() const {

    return width;
}
void Image::setWidth(int _width) {
    if (_width < 0) {
        std::cout << "Incorrect width, cannot be negative\n";
        return;
    }
    else {
        width = _width;
    }
}

int Image::getHeight() const {
    return height;
}
void Image::setHeight(int _height) {
    if (_height < 0) {
        std::cout << "Incorrect height, cannot be negative\n";
        return;
    }
    else {
        height = _height;
    }

}

int Image::getAperture() const {
    return aperture;
}
void Image::setAperture(int _aperture) {
    aperture = _aperture;
}

std::string Image::getExposureTime() const {
    return exposureTime;
}
void Image::setExposureTime(std::string _exposureTime) {
    exposureTime = _exposureTime;
}

int Image::getIso() const {
    return iso;
}
void Image::setIso(int _iso) {
    iso = _iso;
}

bool Image::getFlash() const {
    return flash;
}
void Image::setFlash(bool _flash) {
    flash = _flash;
}

std::ostream& operator <<(std::ostream& out, const Image image) {
    out << "File name : " << image.getFileName() << "\n";
    out << "Image type : " << image.getImageType() << "\n";
    out << "Date created : " << image.getDate() << "\n";
    out << "Image size : " << image.getSize() << "\n";
    out << "Author name : " << image.getAuthorName() << "\n";
    out << "Dimension:  " << image.getWidth() << " Width " << image.getHeight() << " Height " << "\n";
    out << "Aperture size : f/" << image.getAperture() << "\n";
    out << "Exposure time : 1/" << image.getExposureTime() << "\n";
    out << "ISO value " << image.getIso() << "\n";
    if (image.getFlash()) {
        std::cout << "Flash enabled: Yes";
    }
    else {
        std::cout << "Flash enabled: No";
    }
    return out;
}



// Part C
Item::Item(std::string name, long id, double price, int quantity) {
    _name = name;
    _id = id;
    _price = price;
    _quantity = quantity;
}
std::string Item::getName() const {
    return _name;
}
long Item::getId() const{
    return _id;
}
double Item::getPrice() const {
    return _price;
}
int Item::getQuantity() const {
    return _quantity;
}
// add non-member 
std::ostream& operator << (std::ostream& out, const Item &item) {
    out << "NAME: " << item.getName() << "\n";
    out << "ID: " << item.getId() << "\n";
    out << "PRICE: " << item.getPrice() << "\n";
    out << "QUATITY: " << item.getQuantity() << "\n";
    return out;
}
// products int store
Store::Store() : books{ "books", 1001, 17, 12 }, coloredPencils{ "colored pencils", 1002, 2, 15 }, coloringPaper{ "coloring papers", 1003, 1, 20 }, markers{ "markers", 1004, 3, 50 }, crayons{ "crayons", 1005, 3, 3 }, staples{ "staples", 1006, 2, 7 }{}

int Store::getBooks() const {
    return books.getQuantity();
}
int Store:: getColoredPencils() const {
    return coloredPencils.getQuantity();
}
int Store::getColoringPaper() const {
    return coloringPaper.getQuantity();
}
int Store:: getMarkers() const {
    return markers.getQuantity();
}
int Store::getCrayons() const {
    return crayons.getQuantity();
}
int Store:: getStaples() const {
    return staples.getQuantity();
}
// total items
int Store::getTotal() const {
    return books.getQuantity() + coloredPencils.getQuantity() + coloringPaper.getQuantity() + markers.getQuantity() + crayons.getQuantity() + staples.getQuantity();
}
 // add non member
std::ostream& operator << (std::ostream& out, const Store &store) {
    out << "Store"<< "\n";
    out << "Books: " << store.getBooks() << "\n";
    out << "Colored Pencils: " << store.getColoredPencils() << "\n";
    out << "Coloring Paper: " << store.getColoringPaper() << "\n";
    out << "Crayons: " << store.getCrayons() << "\n";
    out << "Markers: " << store.getMarkers() << "\n";
    out << "Staples: " << store.getStaples() << "\n";
    return out;
}


//store items 
void Store::storeValue() {
    std::cout << "Store list's items : " << "\n";
    std::cout << "Books : " << books.getQuantity() << "\n";
    std::cout << "ColoredPencil : " << coloredPencils.getQuantity() << "\n";
    std::cout << "Maker :" << markers.getQuantity() << "\n";
    std::cout << "Coloring Paper : " << coloringPaper.getQuantity() << "\n";
    std::cout << "Crayons : " << crayons.getQuantity() << "\n";
    std::cout << "Staples : " << staples.getQuantity() << "\n";
    std::cout << "Price of all products: " << books.getPrice() * books.getQuantity() + coloredPencils.getPrice() * coloredPencils.getQuantity() + coloringPaper.getPrice() * coloringPaper.getQuantity() + markers.getPrice() * markers.getQuantity() + crayons.getPrice() * crayons.getQuantity() + staples.getPrice() * staples.getQuantity() << "$" << "\n";
}


Order::Order() : books{ "books", 1001, 17, 0 }, coloredPencils{ "colored pencils", 1002, 2, 0 }, coloringPaper{ "coloring papers", 1003, 1, 0 }, markers{ "markers", 1004, 3, 0 }, crayons{ "crayons", 1005, 3, 0 }, staples{ "staples", 1006, 2, 0 }{}

void Order::add(std::string name) {
    if (name == books.getName()) {
        int totalBooks = books.getQuantity() + 1;
        books.update(totalBooks);
    }
    if (name == coloredPencils.getName()) {
        int totalColoredPencils = coloredPencils.getQuantity() + 1;
        coloredPencils.update(totalColoredPencils);
    }
    if (name == coloringPaper.getName()) {
        int totalColoringPapers = coloringPaper.getQuantity() + 1;
        coloringPaper.update(totalColoringPapers);
    }
    if (name == markers.getName()) {
        int totalMarkers = markers.getQuantity() + 1;
        markers.update(totalMarkers);
    }
    if (name == crayons.getName()) {
        int totalCrayons = crayons.getQuantity() + 1;
        crayons.update(totalCrayons);
    }
    if (name == staples.getName()) {
        int totalStaples = staples.getQuantity() + 1;
        staples.update(totalStaples);
    }
}

void Item::update(int number) {
    _quantity = number;
}


double Order::totalPrice() const {
    return books.getPrice() * books.getQuantity() + coloredPencils.getPrice() * coloredPencils.getQuantity() + coloringPaper.getPrice() * coloringPaper.getQuantity() + markers.getPrice() * markers.getQuantity() + crayons.getPrice() * crayons.getQuantity() + staples.getPrice() * staples.getQuantity();
}


void Store::setBooks(int book) {
    books.update(book);
}
void Store::setColoredPencils(int book) {
    books.update(book);
}
void Store::setColoringPaper(int book) {
    books.update(book);
}
void Store::setMarkers(int book) {
    books.update(book);
}
void Store::setCrayons(int book) {
    books.update(book);
}
void Store::setStaples(int book) {
    books.update(book);
}


int Order::getBooks() const {
    return books.getQuantity();
}
int Order::getColoredPencils() const {
    return coloredPencils.getQuantity();
}int Order::getColoringPaper() const {
    return coloringPaper.getQuantity();
}int Order::getMarkers() const {
    return markers.getQuantity();
}int Order::getCrayons() const {
    return crayons.getQuantity();
}int Order::getStaples() const {
    return staples.getQuantity();
}

bool Store::process(const Order& order) {
    int currentBooks = books.getQuantity() - order.getBooks();
    if (currentBooks < 0) {//Check inventory
        std::cout << "Product not avaiable!"; 
        return 0;
    }
    int currentColoredPencils = coloredPencils.getQuantity() - order.getColoredPencils();
    if (currentColoredPencils < 0) {//Check inventory
        std::cout << "Product not avaiable!"; //
        return 0;
    }
    int currentColoringPaper = coloringPaper.getQuantity() - order.getColoringPaper();
    if (currentColoringPaper) {//Check inventory
        std::cout << "Product not avaiable!"; //
        return 0;
    }
    int currentMarkers = markers.getQuantity() - order.getMarkers();
    if (currentMarkers < 0) {//Check inventory
        std::cout << "Product not avaiable!"; //
        return 0;
    }
    int currentCrayons = crayons.getQuantity() - order.getCrayons();
    if (currentCrayons < 0) {//Check inventory
        std::cout << "Product not avaiable!"; //
        return 0;
    }
    int currentStaples = staples.getQuantity() - order.getStaples();
    if (currentStaples < 0) {//Check inventory
        std::cout << "Product not avaiable!"; //
        return 0;
    }
    books.update(currentBooks);
    coloredPencils.update(currentColoredPencils);
    coloringPaper.update(currentColoringPaper);
    markers.update(currentMarkers);
    crayons.update(currentCrayons);
    staples.update(currentStaples);
    return 1;
}