#include<iostream>

/* This main function purpose is to get four values from the user. 
Values are two different years and the number of patients that the hospital had in each of those years.
This program calculates the charity charges for each year using a constant variable for charity charges. 
And it calculates how much the patients increased from the first year to the second year.
Program prints out all the calculated results.
*/
int main(){

	int firstYear = 0;
	int secondYear = 0;
	int numberOfPatients1 = 0;
	int numberOfPatients2 = 0;
	const double CHARITY_CHARGES = 1071.87;

	std::cout << "Enter the first year: ";
	std::cin >> firstYear;
	std::cout << "Enter the number of patients we saw that year: ";
	std::cin >> numberOfPatients1;
	std::cout << "Enter the second year: ";
	std::cin >> secondYear;
	std:: cout << "Enter the number of patients we saw that year: ";
	std::cin >> numberOfPatients2;

	double charity1 = numberOfPatients1 * CHARITY_CHARGES;
	double charity2 = numberOfPatients2 * CHARITY_CHARGES;
	std::cout << "In year " << firstYear << ", our hospital issued " << charity1<< " dollars of charity charges.\n";
	std::cout << "In year " << secondYear << ", our hospital issued " << charity2 << " dollars of charity charges.\n";

	double patientIncreasePercentage = ((numberOfPatients2 - numberOfPatients1) / static_cast<double>(numberOfPatients1)) * 100;
	std::cout << "Between " << firstYear << " and " << secondYear << ", there was a " << patientIncreasePercentage << "% increase in patients seen at our hospital.\n";


	return 0;



}