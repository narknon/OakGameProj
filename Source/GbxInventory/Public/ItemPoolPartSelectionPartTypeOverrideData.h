#pragma once
#include "CoreMinimal.h"
#include "ItemPoolPartSelectionPartTypeOverrideData.generated.h"

class UActorPartData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FItemPoolPartSelectionPartTypeOverrideData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 PartType;
    
    UPROPERTY(EditAnywhere)
    TArray<UActorPartData*> PreferredParts;
    
public:
    FItemPoolPartSelectionPartTypeOverrideData();
};

