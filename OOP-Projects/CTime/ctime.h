#pragma once

class CTime {
	int hours;
	int minutes;
	int seconds;

public:
	CTime();
	CTime(int hours_, int minutes_, int seconds_);
	CTime(const CTime& time);

	~CTime();
};
