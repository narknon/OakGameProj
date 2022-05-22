#pragma once
#include "CoreMinimal.h"
#include "GalaxySkyboxData.generated.h"

class UWorld;
class UGbxLevelSequence;

USTRUCT(BlueprintType)
struct OAKGAME_API FGalaxySkyboxData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWorld> WorldAsset;
    
    UPROPERTY(EditAnywhere)
    uint8 MapNameEnumIdx;
    
    UPROPERTY(EditAnywhere)
    uint8 ZoneNameEnumIdx;
    
    UPROPERTY(EditAnywhere)
    UGbxLevelSequence* ArriveSequence;
    
    UPROPERTY(EditAnywhere)
    UGbxLevelSequence* ExitSequence;
    
public:
    FGalaxySkyboxData();
};

