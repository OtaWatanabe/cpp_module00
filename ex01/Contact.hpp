#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact {
private:
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_darkest_secret;
	int			m_id;

public:
	void	set(std::string first_name, std::string last_name, std::string nickname,
		std::string phone_number, std::string darkest_secret, int id);
	void	print_simple();
	void	print_fields(void);
	int		get_id();
};

#endif