// Grad.h
#ifndef GUARD_INTL_H
#define GUARD_INTL_H

#include "Core.h"

class Intl : public Core {
public:
	// 두 생성자 모두 암묵적으로 Core::Core()를 사용하여
	// 객체가 기본 클래스에서 상속한 부분을 초기화
	Intl() : toeic(0) {};
	Intl(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
protected:
	Intl* clone() const { return new Intl(*this); }
private:
	double toeic; // 논문
};

#endif