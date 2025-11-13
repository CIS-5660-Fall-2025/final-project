// Fill out your copyright notice in the Description page of Project Settings.


#include "MusicAnalyzer.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
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
float MusicAnalyzer::GetBPM(const FString& name) {
    FString Path = FPaths::GetPath(FPaths::GetProjectFilePath());
    FString filePath = Path + "/SongData/" + name + ".json";

    FString FileContent;
    if (!FFileHelper::LoadFileToString(FileContent, *filePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *filePath);
        return 0.0f;
    }

    // Simple text search for BPM
    TArray<FString> Lines;
    FileContent.ParseIntoArrayLines(Lines);

    for (const FString& Line : Lines)
    {
        if (Line.Contains("bpm:"))
        {
            FString BPMString = Line;
            BPMString = BPMString.Replace(TEXT("bpm:"), TEXT(""));
            BPMString = BPMString.TrimStartAndEnd();

            float BPM = FCString::Atof(*BPMString);
            UE_LOG(LogTemp, Log, TEXT("Found BPM: %.2f"), BPM);
            return BPM;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("BPM not found in file"));

    return 0.0;
}