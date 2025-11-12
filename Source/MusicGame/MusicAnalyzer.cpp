// Fill out your copyright notice in the Description page of Project Settings.


#include "MusicAnalyzer.h"
//#include "JsonUtilities/Public/JsonObjectConverter.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Misc/CoreMisc.h"
#include "Misc/Paths.h"

MusicAnalyzer::MusicAnalyzer()
{
}

MusicAnalyzer::~MusicAnalyzer()
{
}


void MusicAnalyzer::Analyze(const FString& filepath, const FString& name)
{
    FString Path = FPaths::GetPath(FPaths::GetProjectFilePath());
    FString execPath = Path + "/SongData/streaming_extractor";

    FString output = Path + "/SongData/" + name + ".json";
    FString cmdString = filepath + " " + output;

    FPlatformProcess::CreateProc(
        *execPath,
        *cmdString,
        true,
        false,
        false,
        nullptr,
        0,
        nullptr,
        nullptr
    );

    FString sysString = execPath + " " + cmdString;
	system(TCHAR_TO_ANSI(*sysString));
    GEngine->AddOnScreenDebugMessage(
        -1,                 // Key: A unique identifier for the message. -1 means no key, so it will be a new message each time.
        5.0f,               // TimeToDisplay: How long the message will remain on screen (in seconds).
        FColor::Red,        // DisplayColor: The color of the text.
        TEXT("I did a thinge") // DebugMessage: The actual text to display. Use TEXT() macro for string literals.
    );
}

// TODO: this
float MusicAnalyzer::GetBPM(const FString& name) { return 0.0; }