r#include <iostream>

using namespace std;

int main(){
	string movie_name;
	double adult_ticket_price, child_ticket_price;
	int  number_of_adult_ticket_sold,  number_of_child_ticket_sold;
	
	cout << ("Please enter the name of the movie: ") ;"\n";
	cin >>  movie_name;
	
	cout << ("Please enter adult ticket price: ");"\n";
	cin >> adult_ticket_price;
	
	cout << ("Please enter child ticket price: ");"\n";
	cin >> child_ticket_price;
	
	cout << ("Please enter number of adult ticket sold: ");"\n";
	cin >> number_of_adult_ticket_sold;
	
	cout << ("Please enter number of child ticket sold: ");
	cin >> number_of_child_ticket_sold;
	
	double Amount_of_adult_ticket_sold = double(adult_ticket_price *  number_of_adult_ticket_sold);
	double Amount_of_child_ticket_sold = double (child_ticket_price *  number_of_child_ticket_sold);
	int Total_number_of_ticket_sold = int (number_of_adult_ticket_sold + number_of_child_ticket_sold);
	double Total_amount_of_ticket_sold = double (Amount_of_adult_ticket_sold + Amount_of_child_ticket_sold);
	double Amount_donated_to_charity = double (0.1 * Total_amount_of_ticket_sold);
	double Net_sale = double (Total_amount_of_ticket_sold - Amount_donated_to_charity);
	
	cout << ("The movie name is:  ");
	cout<< movie_name << endl;

	cout << ("The amount of adult ticket sold is: ");
	cout<< Amount_of_adult_ticket_sold << endl;
	
	cout << ("The amount of child ticket sold is: ");
	cout<< Amount_of_child_ticket_sold << endl;
	
	cout << ("The total number of ticket sold is: ");
	cout<< Total_number_of_ticket_sold << endl;
	
	cout << ("The total amount of ticket sold is: ");
	cout<< Total_amount_of_ticket_sold << endl;
		
	cout << ("The amount donated to charity is: ");
	cout<< Amount_donated_to_charity <<endl;
		
	cout << ("The net sale is: ");
	cout<< Net_sale; 

return 0;
}

