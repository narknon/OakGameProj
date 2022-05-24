#pragma once
#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "PropertyToAttributeMapping.h"
#include "GbxAttributeSetBlueprint.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAttributeSetBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FPropertyToAttributeMapping> PropertyToAttributeMapping;
    
    UGbxAttributeSetBlueprint();
};

