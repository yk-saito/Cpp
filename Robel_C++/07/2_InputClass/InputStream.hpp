#ifndef _INPUTSTREAM_HPP_
# define _INPUTSTREAM_HPP_

class InputStream
{
private:
	double	m_num;
public:
	InputStream(/* args */);
	~InputStream();
	double	getInput() const;
	bool	setInput();
};

#endif // _INPUTSTREAM_HPP_