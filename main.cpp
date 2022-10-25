//started at 2:11
//finished at 2:16

/*

 CS 141 Midterm #2, Fall 2022
 Professor Kidane and Professor Riazi

 This midterm exam consists of a single problem.  All points
 come from your solution passing tests in Zybooks.

 You may not communicate with anyone else during the test. You may
 consult your text, your notes, files archived in your account, and
 the Web, but you may not use text messages, phone calls, chat or any
 sort of messaging service.

 You don't need to comment your code or worry about having meaningful
 variable names.  We will only be grading the output of your program.

 You may assume perfect input (i.e. no error checking is necessary)
 unless we specifically state otherwise.

*/

#include <iostream>
#include <vector>
using namespace std;

// TODO: Your code here
// Write code here to make main() work and run as intended.
struct PantryItem {
	string itemName;
	int daysUntilExpiration;
};

void display(PantryItem item) {
	cout << item.itemName << " will expire in " << item.daysUntilExpiration << " days" << endl;
}

void replacementCost(PantryItem item, double priceOfItem) {
	cout << item.itemName << " should be replaced in " << item.daysUntilExpiration - 7 << " days, before it expires in " << item.daysUntilExpiration << " days." << endl;
	cout << "It will cost $" << priceOfItem << " to replace." << endl;
}
void displayFirstToExpire(vector<PantryItem> pantryCabinet) {
	int min = pantryCabinet[0].daysUntilExpiration;
	int index = 0;
	for (int i = 0; i < reinterpret_cast<int>(pantryCabinet.size()); i++) {
		if (pantryCabinet[i].daysUntilExpiration < min) {
			min = pantryCabinet[i].daysUntilExpiration;
			index = i;
		}
	}
	cout << "The item that will expire first is : " << pantryCabinet[index].itemName << endl;
}
	


int main() {

    struct PantryItem itemOne;
    itemOne.itemName = "can of beans";
    itemOne.daysUntilExpiration = 45;

    cout << itemOne.itemName << " will expire in " << itemOne.daysUntilExpiration << " days" << endl;

    struct PantryItem itemTwo;
    cout << "Enter an pantry item name and days until expiration (e.g. crackers 32): ";
    cin >> itemTwo.itemName >> itemTwo.daysUntilExpiration;
    display(itemTwo);

    replacementCost(itemOne, 3.49);
    replacementCost(itemTwo, 5.99);

    struct PantryItem itemThree;
    itemThree.itemName = "salt and vinegar chips";
    itemThree.daysUntilExpiration = 23;

    vector<PantryItem> pantryCabinet;
    pantryCabinet.push_back(itemOne);
    pantryCabinet.push_back(itemTwo);
    pantryCabinet.push_back(itemThree);

    displayFirstToExpire(pantryCabinet);

    return 0;
}//end main()
