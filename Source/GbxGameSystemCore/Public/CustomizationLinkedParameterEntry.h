#pragma once
#include "CoreMinimal.h"
#include "CustomizationLinkedParameter.h"
#include "CustomizationLinkedParameterEntry.generated.h"

class UGbxCustomizationTargetData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCustomizationLinkedParameterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCustomizationLinkedParameter> LinkedParameters;
    
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTargetData* LinkedParameterSource;
    
    UPROPERTY()
    UGbxCustomizationTargetData* LinkedParameterTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxCustomizationTargetData*> LinkedParameterTargets;
    
    FCustomizationLinkedParameterEntry();
};

