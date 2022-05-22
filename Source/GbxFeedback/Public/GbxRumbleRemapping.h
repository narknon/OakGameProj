#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RemapByConsole.h"
#include "GbxRumbleRemapping.generated.h"

UCLASS(DefaultConfig, Config=Game)
class GBXFEEDBACK_API UGbxRumbleRemapping : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FRemapByConsole WindowsMapping;
    
    UPROPERTY(Config, EditAnywhere)
    FRemapByConsole XBoxOneMapping;
    
    UPROPERTY(Config, EditAnywhere)
    FRemapByConsole PS4Mapping;
    
    UPROPERTY(Config, EditAnywhere)
    FRemapByConsole XBoxSeriesXMapping;
    
    UPROPERTY(Config, EditAnywhere)
    FRemapByConsole PS5Mapping;
    
    UGbxRumbleRemapping();
};

