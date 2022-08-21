/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bookli.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:45:54 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/21 17:38:38 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bookli.hpp"

void	Contact::SetFirstname(std::string str){
	_firstname = str;
}

void	Contact::SetLastname(std::string str){
	_lastname = str;
}

void	Contact::SetNickname(std::string str){
	_nickname = str;
}

void	Contact::SetLogin(std::string str){
	_login = str;
}

void	Contact::SetZip(std::string str){
	_login = str;
}

void	Contact::SetEmail(std::string str){
	_email = str;
}

void	Contact::SetNumber(std::string str){
	_number = str;
}

void	Contact::SetBday(std::string str){
	_bday = str;
}

void	Contact::SetFavmeal(std::string str){
	_favmeal = str;
}

void Contact::SetColor(std::string str){
	_colour = str;
}

void	Contact::SetSecret(std::string str){
	_secret = str;
}

std::string	Contact::GetFirstname(void){
	return (_firstname);
}

std::string	Contact::GetLastname(void){
	return (_lastname);
}

std::string	Contact::GetNickname(void){
	return (_nickname);
}

std::string	Contact::GetLogin(void){
	return (_login);
}

std::string	Contact::GetZip(void){
	return (_zip);
}

std::string	Contact::GetEmail(void){
	return (_email);
}

std::string	Contact::GetNumber(void){
	return (_number);
}

std::string	Contact::GetBday(void){
	return (_bday);
}

std::string	Contact::GetFavmeal(void){
	return (_favmeal);
}

std::string	Contact::GetColor(void){
	return (_colour);
}

std::string	Contact::GetSecret(void){
	return (_secret);
}
