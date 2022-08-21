/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bookli.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:54:08 by dbenkhar          #+#    #+#             */
/*   Updated: 2022/08/21 17:38:41 by dbenkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOKLI_HPP
# define BOOKLI_HPP

# include <iostream>
# include <iomanip>

class	Contact{

public:
	void	SetFirstname(std::string str);
	void	SetLastname(std::string str);
	void	SetNickname(std::string str);
	void	SetLogin(std::string str);
	void	SetZip(std::string str);
	void	SetEmail(std::string str);
	void	SetNumber(std::string str);
	void	SetBday(std::string str);
	void	SetFavmeal(std::string str);
	void	SetColor(std::string str);
	void	SetSecret(std::string str);

	std::string	GetFirstname(void);
	std::string	GetLastname(void);
	std::string	GetNickname(void);
	std::string	GetLogin(void);
	std::string	GetZip(void);
	std::string	GetEmail(void);
	std::string	GetNumber(void);
	std::string	GetBday(void);
	std::string	GetFavmeal(void);
	std::string	GetColor(void);
	std::string	GetSecret(void);

private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _login;
	std::string _zip;
	std::string _email;
	std::string _number;
	std::string _bday;
	std::string _favmeal;
	std::string _colour;
	std::string _secret;
};

#endif
