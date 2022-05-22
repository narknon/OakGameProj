#pragma once
#include "CoreMinimal.h"
#include "EEncounterAdvanceType.h"
#include "EncounterAdvanceData.generated.h"

USTRUCT(BlueprintType)
struct FEncounterAdvanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEncounterAdvanceType Type;
    
    UPROPERTY()
    bool bUseTimer;
    
    UPROPERTY(EditAnywhere)
    float Timer;
    
    UPROPERTY()
    bool bUsePercent;
    
    UPROPERTY(EditAnywhere)
    float Percent;
    
    GBXSPAWN_API FEncounterAdvanceData();
};

