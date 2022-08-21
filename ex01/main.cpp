/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:32:15 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/21 17:57:51 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bookli.hpp"

std::string	truncate(std::string str){
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	showContact(Contact *bookli, int i){
	std::cout << "First name	:" << bookli[i].GetFirstname() << std::endl;
	std::cout << "Last name		:" << bookli[i].GetLastname() << std::endl;
	std::cout << "Nickname		:" << bookli[i].GetNickname() << std::endl;
	std::cout << "Login			:" << bookli[i].GetLogin() << std::endl;
	std::cout << "Postal Code	:" << bookli[i].GetZip() << std::endl;
	std::cout << "Email			:" << bookli[i].GetEmail() << std::endl;
	std::cout << "Phone Number	:" << bookli[i].GetNumber() << std::endl;
	std::cout << "Date of birth	:" << bookli[i].GetBday() << std::endl;
	std::cout << "Fav Meal		:" << bookli[i].GetFavmeal() << std::endl;
	std::cout << "Underwear		:" << bookli[i].GetColor() << std::endl;
	std::cout << "Secret		:" << bookli[i].GetSecret() << std::endl;
}

void	searchContact(Contact *bookli, int count){
	std::string cmd;
	int			i;

	for (i = 0; i < count; i++){
		std::cout << "#############################################" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(bookli[i].GetFirstname());
		std::cout << "|" << std::setw(10) << truncate(bookli[i].GetLastname());
		std::cout << "|" << std::setw(10) << truncate(bookli[i].GetNickname());
		std::cout << "|" << std::endl; 
	}
	std::cout << "#############################################" << std::endl;
	std::cout << "Select Contact by typing 'ID'" << std::endl;
	getline(std::cin, cmd);
	if (cmd[0] > '0' && cmd[0] < '9' && cmd[1] == '\0')
		showContact(bookli, stoi(cmd) -1);
	std::cout << std::endl;
	std::cout << "returning to start menue..." <<std::endl;
}

void	addContact(Contact **bookli, int i){
	std::string str;

	std::cout << "Please enter first name..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetFirstname(str);
	std::cout << "Please enter last name..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetLastname(str);
	std::cout << "Please enter Nickname..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetNickname(str);
	std::cout << "Please enter Login..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetLogin(str);
	std::cout << "Please enter postal code..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetZip(str);
	std::cout << "Please enter Email..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetEmail(str);
	std::cout << "Please enter phone number..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetNumber(str);
	std::cout << "Please enter birthday..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetBday(str);
	std::cout << "Please enter favorit meal..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetFavmeal(str);
	std::cout << "Please enter underwear color..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetColor(str);
	std::cout << "Please enter Secret..." << std::endl;
	getline(std::cin, str);
	(*bookli)[i].SetSecret(str);
	std::cout << "entry stored..." << std::endl;
	std::cout << "returning to start menue..." << std::endl;
}

int	main(void){
	Contact *bookli;
	std::string cmd;
	int	i = 0;

	bookli = new Contact[8];
	std::cout << "Welcome to Bookli..." << std::endl;
	std::cout << "Type 'ADD' to add your first bookli entry" << std::endl;
	while (1){
		getline(std::cin, cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD"){
			if (i < 8)
				addContact(&bookli, i++);
			else
				std::cout << "Can't store more than 8 Contacts..." << std::endl;
		}
		else if (cmd == "SEARCH"){
			if (i == 0)
				std::cout << "No entries yet. ADD entry first..." << std::endl;
			else{
				searchContact(bookli, i);
			}
		}
		else
			std::cout << "Invalid command, try again ADD, SEARCH, EXIT" << std::endl;	
}
	delete[] bookli;
	return (0);
}
