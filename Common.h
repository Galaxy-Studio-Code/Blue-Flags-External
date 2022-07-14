#pragma once

#include "iostream"
#include "vector"
#include "array"
#include "map"
#include "chrono"
#include "list"
#include "filesystem"
#include "fstream"
#include "iomanip"
#include "memory"
#include "thread"
#include "Psapi.h"
#include "TlHelp32.h"
#include "optional"

namespace std
{
	template <class T, template <class...> class Template>
	struct is_specialization : std::false_type
	{
	};

	template <template <class...> class Template, class... Args>
	struct is_specialization<Template<Args...>, Template> : std::true_type
	{
	};
}

namespace ExMemory
{
	using namespace std::chrono_literals;

	inline std::atomic_bool g_running { true };
}

struct Vector3
{
	float x; float y; float z;
};