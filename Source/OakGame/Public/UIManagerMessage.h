#pragma once
#include "CoreMinimal.h"
#include "EMessageSpecialType.h"
#include "BrushInfo.h"
#include "MessageHandle.h"
#include "UIManagerMessage.generated.h"

class AOakPlayerState;

USTRUCT(BlueprintType)
struct OAKGAME_API FUIManagerMessage {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText Title;
    
    UPROPERTY(Transient)
    FText PlayerName;
    
    UPROPERTY(Transient)
    FText Description;
    
    UPROPERTY(Transient)
    FText Glyph;
    
    UPROPERTY(Transient)
    FText CommandText;
    
    UPROPERTY(Transient)
    FString IconFrame;
    
    UPROPERTY(Transient)
    FName IntroSound;
    
    UPROPERTY(Transient)
    FName OutroSound;
    
    UPROPERTY(Transient)
    bool bIsBlocking;
    
    UPROPERTY(Transient)
    bool bTimedMessage;
    
    UPROPERTY(Transient)
    float TimeCreated;
    
    UPROPERTY(Transient)
    float TimeRemaining;
    
    UPROPERTY(Transient)
    bool bDisplaySpinner;
    
    UPROPERTY(Transient)
    EMessageSpecialType SpecialType;
    
    UPROPERTY()
    FBrushInfo BrushInfo;
    
    UPROPERTY()
    FMessageHandle Handle;
    
    UPROPERTY(Transient)
    AOakPlayerState* OtherPlayerState;
    
    FUIManagerMessage();
};

