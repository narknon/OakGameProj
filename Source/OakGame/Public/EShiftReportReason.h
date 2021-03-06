#pragma once
#include "CoreMinimal.h"
#include "EShiftReportReason.generated.h"

UENUM()
enum class EShiftReportReason : int32 {
    Username,
    Sportsmanship,
    Abuse,
    HateSpeech,
    LeavingOrAfk,
    Cheating,
    UserGeneratedContent,
    IllicitBehavior,
};

