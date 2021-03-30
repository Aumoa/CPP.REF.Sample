// Copyright 2020-2021 Aumoa.lib. All right reserved.

#pragma once

#include "GameMinimal.h"
#include "Framework/PointLight.h"

class SAMPLEGAME_API ARotateLight : public APointLight
{
public:
	using Super = APointLight;

private:
	Degrees angle;

public:
	ARotateLight();
	~ARotateLight() override;

	void TickActor(Seconds inDelta) override;
};