// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Maciek Krzyzynski
// Oliver Junca
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to G or T to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}
	if (letter == 'b' || letter == 'B')// written by Maciek
	{
		if (region == 5)
		{
			std::cout << "There are no Bs in rest of the world" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei Darussalam" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Bahrain Arabian Peninsula, Belize, Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 1)
		{
			std::cout << "Belize, Brazil, Bolivia, Bahamas, Barbados, Bermuda" << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C') // written by Maciek
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica, Cayman Islands, Cuba" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Colombia, Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of Congo, Congo Republic of Brazzaville, Ivory Coast (Côte D'ivoire)" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Chrismas Island, Cocos Islands, Cyprus" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cook Islands" << std::endl;
		}
	}
	if (letter == 'd' || letter == 'D') // written by Maciek
	{
		if (region == 1)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ds in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ds in the rest of the world" << std::endl;
		}
	}
	if (letter == 'e' || letter == 'E') // written by Maciek
	{
		if (region == 1)
		{
			std::cout << "Equador, El Salvador" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Egypt, Equadorial Guinea, Eritea, Ethopia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "East Timor, " << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Es in the rest of the world" << std::endl;
		}
	}
	if (letter == 'f' || letter == 'F') // written by Maciek
	{
		if (region == 1)
		{
			std::cout << "Falkland Islands, French Guiana" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Finland, France, Faroe Islands" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There is no Fs in africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There is no Fs in asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Fiji, French Polynesia, French Southern Territories" << std::endl;
		}
	}
	if (letter == 'g' || letter == 'G') // written by Maciek
	{
		if (region == 1)
		{
			std::cout << "Greenland, Grenada, Guadeloupe, Guatemala, Guyana" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Gibraltar, Greece" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Gambia, Gabon, Ghana, Guinea-Bissau" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Georgia, " << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Guam" << std::endl;
		}
	}
	if (letter == 't' || letter == 'T') // Written by Oliver Junca
	{
		if (region == 1)
		{
			std::cout << "Trinidad and Tobago, Turks and Caicos Islands." << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ts in Europe." << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Tunisia, Togo, Tanzania; officially the United Republic of Tanzania." << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Taiwan (Republic of China), Tajikistan, Thailand, Tibet, Timor-Leste (East Timor), Turkey, Turkmenistan." << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tokelau, Tonga, Tuvalu." << std::endl;
		}
	}
	if (letter == 'u' || letter == 'U') // Written by Oliver Junca
	{
		if (region == 1)
		{
			std::cout << "United States of America, Uruguay." << std::endl;
		}
		if (region == 2)
		{
			std::cout << "United Kingdom, Ukraine." << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "United Arab Emirates, Uzbekistan." << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Us in the rest of the world." << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V') // Written by Oliver Junca
	{
		if (region == 1)
		{
			std::cout << "Venezuela, Virgin Islands (British), Virgin Islands (US)." << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State (Holy See)." << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa." << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam." << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu." << std::endl;
		}
	}
	if (letter == 'w' || letter == 'W') // Written by Oliver Junca
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas." << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe." << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara." << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia." << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futana Islands." << std::endl;
		}
	}
	if (letter == 'x' || letter == 'X') // Written by Oliver Junca
	{
		std::cout << "There are no Xs in any country of the world." << std::endl;
	}
	if (letter == 'y' || letter == 'Y') // Written by Oliver Junca
	{
		if (region == 5)
		{
			std::cout << "There are no Ys in the rest of the world." << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen." << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa." << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe." << std::endl;
		}
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas." << std::endl;
		}
	}
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}