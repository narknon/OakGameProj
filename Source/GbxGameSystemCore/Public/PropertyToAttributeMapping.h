#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PropertyToAttributeMapping.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPropertyToAttributeMapping {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FName PropertyName;
    
    UPROPERTY(VisibleDefaultsOnly)
    FGuid PropertyGuid;
    
protected:
    UPROPERTY(VisibleDefaultsOnly)
    FSoftObjectPath AttributeDataReference;
    
public:
    FPropertyToAttributeMapping();
};

