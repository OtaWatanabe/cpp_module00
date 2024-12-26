#include "PhoneBook.hpp"

std::string	input(std::string field_name)
{
	std::string	ret = "";

	std::cout << "Enter your " << field_name << ": ";
	while (ret.size() == 0) {
		std::cin >> ret;
		if (std::cin.eof()) std::exit(1);
	}
	return ret;
}

int	input_id(int id)
{
	int	ret;
	int id_min;

	while (1) {
		std::cout << "Enter id. Available ids are ";
		id_min = 0;
		if (8 < id) id_min = id - 8;
		for (int i = id_min; i < id; ++i) {
			std::cout << '\'' << i;
			if (i == id - 1) std::cout << "': ";
			else std::cout << "', ";
		}
		std::cin >> ret;
		if (std::cin.eof()) std::exit(1);
		if (!std::cin.fail() && 0 <= ret && id - 8 <= ret && ret < id) return ret;
		std::cout << "Invalid id.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::add(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	first_name = input("first name");
	last_name = input("last name");
	nickname = input("nickname");
	phone_number = input("phone number");
	darkest_secret = input("darkset secret");
	if (8 <= id) {
		for (int i = 0; i < 7; ++i) contacts[i] = contacts[i + 1];
		contacts[7].set(first_name, last_name, nickname, phone_number, darkest_secret, id);
	}
	else contacts[id].set(first_name, last_name, nickname, phone_number, darkest_secret, id);
	++id;
}

void	PhoneBook::search(void)
{
	int	show_id;

	if (id == 0) {
		std::cout << "No contacts added.\n" << std::endl;
		return ;
	}
	for (int i = 0; i < id; ++i) {
		if (7 < i) break;
		contacts[i].print_simple();
	}
	show_id = input_id(id);
	for (int i = 0; i < id; ++i) {
		if (7 < i) return ;
		if (contacts[i].get_id() == show_id) contacts[i].print_fields();
	}
}
