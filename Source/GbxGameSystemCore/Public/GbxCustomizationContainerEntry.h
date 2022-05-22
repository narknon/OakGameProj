#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GbxCustomizationContainerEntry.generated.h"

class UGbxCustomizationData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxCustomizationContainerEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxCustomizationData* CustomizationData;
    
    UPROPERTY()
    int32 OptionalCustomizationId;
    
private:
    UPROPERTY(NotReplicated)
    UGbxCustomizationData* ClientCachedCustomizationData;
    
public:
    FGbxCustomizationContainerEntry();
};

