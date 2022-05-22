#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersDecorationItemSaveGameData.generated.h"

class UCrewQuartersDecorationItemData;

USTRUCT(BlueprintType)
struct OAKGAME_API FCrewQuartersDecorationItemSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsNew;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UCrewQuartersDecorationItemData> DecorationItemAssetPath;
    
public:
    FCrewQuartersDecorationItemSaveGameData();
};

