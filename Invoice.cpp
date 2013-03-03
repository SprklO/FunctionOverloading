#include <iostream>
#include <string>
using namespace std;

class Invoice
{
	
public:
    Invoice(); // default constructor
    Invoice(string partNum, string partInfo, int quanity, int price); // 4parm constuctor
    
    //setters and getters for partNumber
    void setPartNumber (string newPartNum); //sets new part number
    string getPartNumber (); //returns part number as a string
    
    //setters and getters for partDiscription
    void setPartDiscription (string newPartInfo); //sets new part discription
    string getPartDiscription (); //returns part number as a string
    
    //setters and getters for quanityOfPart
    void setQuanity (int newQuanity); //sets new quanity
    int getQuanity (); //returns the quanity
    
    //setters and getters for partPrice
    void setPartPrice (int newPartNum); //sets new part number
    int getPartPrice (); //returns part number as a string
    
    int getInvoiceAmount(); //multiplies the quantity by the price per item
    
    
private:
    string partNumber;
    string partDiscription;
    int quanityOfPart;
    int partPrice;
	
};

//-----------Invoice--------------
//default constructor, sets all variables to 0
//using the setter methods
Invoice::Invoice()
{
    setPartNumber("0");
    setPartDiscription("0");
    setQuanity(0);
    setPartNumber(0);
}

//-----------Invoice--------------
//4pram constructor, sets all variables to the values passed in
//using the setter methods
Invoice::Invoice(string newPartNum, string newPartInfo, int newQuanity, int newPrice)
{
    setPartNumber(newPartNum);
    setPartDiscription(newPartInfo);
    setQuanity(newQuanity);
	setPartPrice(newPrice);
}

//-----------setPartNumber--------------
//sets the string for partNumber to the new string, 
//preconditions: takes in a string
//postcondition: doesnt return anything
void Invoice::setPartNumber (string newPartNum)
{
	partNumber = newPartNum;
	
	return;
}

//-----------getPartNumber--------------
//returns the string for partNumber 
//preconditions: none
//postcondition: returns the string for partNumber
string Invoice::getPartNumber ()
{
	return partNumber;
}


//-----------setPartDiscription--------------
//sets the string for partDiscription to the new string, 
//preconditions: takes in a string
//postcondition: doesnt return anything
void Invoice::setPartDiscription (string newPartInfo)
{
	partDiscription = newPartInfo;
	
	return;
}

//-----------getPartDiscription--------------
//returns the string for partDiscription  
//preconditions: none
//postcondition: returns the string for partDiscription
string Invoice::getPartDiscription ()
{
	return partDiscription;
}

//-----------setQuanity--------------
//sets the int for partDiscription, 
//if newQuanity is negative then it is set to 0
//preconditions: takes in a positive int
//postcondition: doesnt return anything
void Invoice::setQuanity (int newQuanity)
{
	if (newQuanity < 0)
	{
		cout << "the quanity can not be a negative number" << endl;
		cout << "Invoice data members modified" << endl << endl;
		quanityOfPart = 0;
	}	
	else 
	{
		quanityOfPart = newQuanity;
	}
	
	return;
}

//-----------getQuanity--------------
//returns the int for quanityOfPart  
//preconditions: none
//postcondition: returns the int for quanityOfPart
int Invoice::getQuanity ()
{
	return quanityOfPart;
}


//-----------setPartPrice--------------
//sets the int for partPrice, 
//if partPrice is negative then it is set to 0
//preconditions: takes in a positive int
//postcondition: doesnt return anything
void Invoice::setPartPrice (int newPartNum)
{
	if (partPrice < 0)
	{
		cout << "the price can not be a negative number" << endl;
		cout << "Invoice data members modified" << endl << endl;
		partPrice = 0;
	}	
	else 
	{
		partPrice = newPartNum;
	}
	
	return;
}

//-----------setPartPrice--------------
//returns the int for partPrice  
//preconditions: none
//postcondition: returns the int for partPrice
int Invoice::getPartPrice()
{
	return partPrice;
}

//-----------getInvoiceAmount--------------
//multiplies the quantity by the price per item
//preconditions: none
//postcondition: an int 
int Invoice::getInvoiceAmount() 
{
	int invoiceAmount = 0;
	
	invoiceAmount = quanityOfPart * partPrice;
	
	return invoiceAmount;
}

int main() 
{
	Invoice invoice1("12345", "Hammer", 100, 5);
	Invoice invoice2("123456", "Saw", -8, 10);
	
	int invoice1Amount = 0;
	int invoice2Amount = 0;
	
	invoice1Amount = invoice1.getInvoiceAmount();
	invoice2Amount = invoice2.getInvoiceAmount();
	
	cout << "Part Number: " << invoice1.getPartNumber() << endl;
	cout << "Discription: " << invoice1.getPartDiscription() << endl;
	cout << "Quanity: " << invoice1.getQuanity()<< endl;
	cout << "Price per item: $" << invoice1.getPartPrice() << endl;
	cout << "Invoice amount: $" << invoice1.getInvoiceAmount() << endl;
	
	cout << endl << endl;
	
	cout << "Part Number: " << invoice2.getPartNumber() << endl;
	cout << "Discription: " << invoice2.getPartDiscription() << endl;
	cout << "Quanity: " << invoice2.getQuanity()<< endl;
	cout << "Price per item: $" << invoice2.getPartPrice() << endl;
	cout << "Invoice amount: $" << invoice2.getInvoiceAmount() << endl;
	
	
	
	
    return 0;
}