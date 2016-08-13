/*
Question: Implement the "people who bought X item also bought Y item" feature in amazon.com?

Expectations:
- We should be able to understand your implementation without needing to reach out to you.
- Use comments when appropriate to document your design or implementation choices.
- Implement the interface given in either C++ or Java. Feel free to use C++11 features or Java 1.8 features
- Submitted code should compile and include unit tests
- Consider making a very basic implementation that works and is readable before enhancing it.

*/

#include <vector>

class RelatedProducts {
public:
  
    // Called when a product purchase is made by a customer
    virtual void registerPurchase(long customerID, long productId) = 0;

    // Returns the next `numProducts` products related to this product
    virtual std::vector<long> getRelatedProducts(long customerID, long productId, int numProducts) = 0;

    // Returns the ID of a different customer who has also bought the productID
    virtual long getRelatedCustomer(long customerID, int productID) = 0;
};
