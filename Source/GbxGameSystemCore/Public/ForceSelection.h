#pragma once
#include "CoreMinimal.h"
#include "EForceSelection.h"
#include "ForceSelection.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FForceSelection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EForceSelection Selection;
    
    UPROPERTY(EditAnywhere)
    FName Preset;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* Attribute;
    
    UPROPERTY(EditAnywhere)
    float Force;
    
    FForceSelection();
};

