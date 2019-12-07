#pragma once
#include <iostream>
#include <chrono>
#include <thread>

// TODO:: Refactor overrides

namespace kb
{
	namespace kb_settings
	{
		inline unsigned default_dur = 75;
		inline bool default_endl = false;
	}

	inline void type_to_console(const std::string_view str, const unsigned dur, const bool endl)
	{
		for (const auto c : str)
		{
			std::cout << c;
			std::this_thread::sleep_for(std::chrono::milliseconds(dur));
		}

		if (endl)
		{
			std::cout << std::endl;
		}
	}
	
	inline void type_to_console(const std::string_view str, const bool endl)
	{
		for (const auto c : str)
		{
			std::cout << c;
			std::this_thread::sleep_for(std::chrono::milliseconds(kb_settings::default_dur));
		}

		if (endl)
		{
			std::cout << std::endl;
		}
	}
	
	inline void type_to_console(const std::string_view str, const unsigned dur)
	{
		for (const auto c : str)
		{
			std::cout << c;
			std::this_thread::sleep_for(std::chrono::milliseconds(dur));
		}

		if (kb_settings::default_endl)
		{
			std::cout << std::endl;
		}
	}

	inline void type_to_console(const std::string_view str)
	{
		for (const auto c : str)
		{
			std::cout << c;
			std::this_thread::sleep_for(std::chrono::milliseconds(kb_settings::default_dur));
		}

		if (kb_settings::default_endl)
		{
			std::cout << std::endl;
		}
	}
}
