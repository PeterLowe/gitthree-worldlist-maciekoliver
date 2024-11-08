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
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
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
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas." << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe." << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa." << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen." << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ys in the rest of the world." << std::endl;
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