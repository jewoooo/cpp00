/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:33:45 by jewlee            #+#    #+#             */
/*   Updated: 2024/08/06 15:53:23 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		public:
			// Getter functions
			const std::string getFirstName(void);
			const std::string getLastName(void);
			const std::string getNickname(void);
			const std::string getPhoneNumber(void);
			const std::string getDarkestSecret(void);
			// Setter functions
			void setFirstName(const std::string& firstName);
			void setLastName(const std::string& lastName);
			void setNickname(const std::string& nickname);
			void setPhoneNumber(const std::string& phoneNumber);
			void setDarkestSecret(const std::string& darkestSecret);
}
#endif