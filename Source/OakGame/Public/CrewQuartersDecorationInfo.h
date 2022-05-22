#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersDecorationInfo.generated.h"

class UCrewQuartersDecorationItemData;

USTRUCT(BlueprintType)
struct OAKGAME_API FCrewQuartersDecorationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCrewQuartersDecorationItemData* DecorationItemData;
    
    UPROPERTY()
    bool IsNew;
    
    FCrewQuartersDecorationInfo();
};

