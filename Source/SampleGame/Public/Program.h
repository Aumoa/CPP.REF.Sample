// Copyright 2020-2021 Aumoa.lib. All right reserved.

#pragma once

#include "GameMinimal.h"

class SAMPLEGAME_API Program : virtual public Object
{
public:
	using Super = Object;
	using This = Program;

public:
	static int32 Main();
};