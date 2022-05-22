#pragma once
#include "CoreMinimal.h"
#include "ERelativeDirectionType.h"
#include "AttributeInitializationData.h"
#include "UObject/NoExportTypes.h"
#include "RelativeDirectionData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRelativeDirectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ERelativeDirectionType RelativeDirection;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ConeAroundDirection;
    
    UPROPERTY(EditAnywhere)
    FRotator AdditionalRotation;
    
    FRelativeDirectionData();
};

