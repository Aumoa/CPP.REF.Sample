// Copyright 2020-2021 Aumoa.lib. All right reserved.

#pragma once

#include "GameMinimal.h"
#include "Framework/GameModeBase.h"

class SAMPLEGAME_API ATHGameMode : public AGameModeBase
{
public:
	using Super = AGameModeBase;
	using This = ATHGameMode;

public:
	ATHGameMode();
	~ATHGameMode() override;
};