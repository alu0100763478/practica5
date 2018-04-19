#ifndef DNI_H
#define DNI_H
#include <iostream>

class DNI
{

private:
	int n_;

public:
	DNI(void): n_(-1) {}
	DNI(int n): n_(n) {}

	int n(void) const
	{
		return n_;
	}

	void operator=(int n)
	{
		n_=n;
	}
	
};

inline std::ostream& operator<<(std::ostream& out, const DNI& dni)
{
	out << dni.n();
}

inline bool operator==(const DNI& a, const DNI& b)
{
	return a.n()==b.n();
}


inline bool operator==(const DNI& a, int n)
{
	return a.n()==n;
}


inline int operator%(const DNI& a, const DNI& b)
{
	return a.n()%b.n();
}

inline bool operator<(const DNI& a, const DNI& b)
{
	return a.n()<b.n();
}

inline bool operator<=(const DNI& a, const DNI& b)
{
	return a.n()<b.n();
}

inline bool operator>(const DNI& a, const DNI& b)
{
	return a.n()<b.n();
}

inline int operator%(const DNI& a, int n)
{
	return a.n()%n;
}

inline int operator/(const DNI& a, int n)
{
	return a.n()/n;
}

inline int operator>(const DNI& a, int n)
{
	return a.n()>n;
}

inline int operator<(const DNI& a, int n)
{
	return a.n()<n;
}

#endif 
