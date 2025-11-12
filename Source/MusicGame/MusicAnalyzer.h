// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


class MUSICGAME_API MusicAnalyzer
{
public:
	MusicAnalyzer();
	~MusicAnalyzer();
	static void Analyze(const FString& filepath, const FString& name);
	static float GetBPM(const FString& name);
};
