#ifndef _INPUTSTREAM_HPP_
# define _INPUTSTREAM_HPP_

class InputStream
{
private:
	double	m_num;
public:
	InputStream(/* args */);
	~InputStream();
	double	Get() const;
	bool	Set();
};

#endif // _INPUTSTREAM_HPP_