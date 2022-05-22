#pragma once
#include "CoreMinimal.h"
#include "ELinkedParameterType.h"
#include "CustomizationLinkedParameter.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCustomizationLinkedParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName LinkedParameterName;
    
    UPROPERTY(EditAnywhere)
    ELinkedParameterType LinkedParameterType;
    
    FCustomizationLinkedParameter();
};

