// Header.h*
// PROJECT 05
// by Hieu Nguyen
//

#include <iostream>
#include "Header.h"

int main()
{
    //URL 
    URL url{ "https://www.youtube.com/watch?v=cpSjuQ_ZJvY" };
    displayURL(url);
    std::cout << "\n";


    // Display image 
    Image image("Snow", "JPEG", "27-05-1997", 500, "Hieu", 50, 10, 8, "1/30", 45, 2500, true);
    imageInformation(image);
    std::cout << "\n";


    // Order Items
    std::cout << "\n";
    std::cout << Item("staples", 1006, 2, 7);
    Store store;
    store.storeValue();
    std::cout << store;
    std::cout << "Item in store: " << store.getTotal() << "\n";
    Order order; 
    if (store.process(order)) {
        std::cout << "After order, current item: " << store.getTotal() << "\n";
    }
    
