#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "Contact.hpp"

class PhoneBook {
private:
	int		id;
	Contact	contacts[8];
public:
	PhoneBook() {
		id = 0;
	}
	void	add(void);
	void	search(void);
};

#endif
