#include "Contact.hpp"

void	Contact::set(std::string first_name, std::string last_name, std::string nickname,
		std::string phone_number, std::string darkest_secret, int id)
{
	m_first_name = first_name;
	m_last_name = last_name;
	m_nickname = nickname;
	m_phone_number = phone_number;
	m_darkest_secret = darkest_secret;
	m_id = id;
}

void	print_setw(std::string str, int if_last, int if_id, int id)
{
	if (if_id) std::cout << std::setw(10) << id;
	else if (10 < str.size()) std::cout << std::setw(9) << str.substr(0, 9) << '.';
	else std::cout << std::setw(10) << str;
	if (!if_last) std::cout << '|';
	else std::cout << std::endl;
}

void	Contact::print_simple()
{
	print_setw("", 0, 1, m_id);
	print_setw(m_first_name, 0, 0, 0);
	print_setw(m_last_name, 0, 0, 0);
	print_setw(m_nickname, 1, 0, 0);
}

void	Contact::print_fields(void)
{
	std::cout << "first name: " << m_first_name << std::endl;
	std::cout << "last name: " << m_last_name << std::endl;
	std::cout << "nickname: " << m_nickname << std::endl;
	std::cout << "phone number: " << m_phone_number << std::endl;
	std::cout << "darkest secret: " << m_darkest_secret << '\n' << std::endl;
}

int	Contact::get_id()
{
	return m_id;
}
