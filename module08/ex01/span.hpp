/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:32:33 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/26 22:33:00 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
// # include <set>
# include <vector>

// class Span
// {
// public:
// 	Span(const unsigned int n);
// 	// Span(const Span &other);
// 	// Span &operator=(const Span &other);
// 	~Span();
// 	void	addNumber(const int);
// 	int		shortestSpan() const;
// 	int		longestSpan() const;
// 	std::set<int>::iterator	begin();
// 	const std::set<int>::iterator	begin() const;
// private:
// 	class NumberAddException : public std::exception
// 	{
// 		public:
// 			virtual const char* what() const throw();
// 	};
// 	class NumberEmptyException : public std::exception
// 	{
// 		public:
// 			virtual const char* what() const throw();
// 	};
// 	class NumberOnlyOneException : public std::exception
// 	{
// 		public:
// 			virtual const char* what() const throw();
// 	};
// 	std::set<int>	set_;
// 	unsigned int	size_;
// };

class Span
{
public:
	Span(const unsigned int n);
	// Span(const Span &other);
	// Span &operator=(const Span &other);
	~Span();
	void	addNumber(const int);
	int		shortestSpan() const;
	int		longestSpan() const;
	std::vector<int>::iterator	begin();
	// const std::vector<const int>::iterator	begin() const;
	std::vector<int>::iterator	end();
	// const std::vector<const int>::iterator	end() const;
private:
	class NumberAddException : public std::exception
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
	std::vector<int>	vector_;
	unsigned int		size_;
};


#endif /* SPAN_HPP */
