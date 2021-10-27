/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:32:33 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/27 17:53:18 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <set>
# include <vector>

typedef std::vector<int>::iterator			VectorIterator;
typedef std::vector<int>::const_iterator	ConstVectorIterator;

class Span
{
public:
	typedef std::set<int>::iterator			SetIterator;
	typedef std::set<int>::const_iterator	ConstSetIterator;
	Span();
	Span(const unsigned int n);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	void	addNumber(const int);
	void	addNumberFromItr(ConstVectorIterator begin, ConstVectorIterator end);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;
	void	printNumber(unsigned int print_num) const;
	void	printNumberEnd(unsigned int print_num) const;
private:
	class NumberFullException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NumberEmptyException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NumberOnlyOneException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	std::set<int>	set_;
	unsigned int	size_;
};

#endif /* SPAN_HPP */
