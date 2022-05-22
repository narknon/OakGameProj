#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CharacterItemPoolExpansionInfo.h"
#include "CharacterItemPoolExpansionData.generated.h"

UCLASS()
class UCharacterItemPoolExpansionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FName, FCharacterItemPoolExpansionInfo> CharacterExpansions;
    
public:
    UCharacterItemPoolExpansionData();
};

