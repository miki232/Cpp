/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:06:10 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/17 15:12:54 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:

		int					FixNum;
		static const int	Bits = 8;

	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed &operator=(const Fixed &assign);

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif