#pragma once
#include "CoreMinimal.h"
#include "DataActionPair_Base.h"
#include "GameplayTagContainer.h"
#include "DataActionPair_SmartObject.generated.h"

class UGbxBoneSet;

USTRUCT(BlueprintType)
struct FDataActionPair_SmartObject : public FDataActionPair_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionKey;
    
    UPROPERTY(EditAnywhere)
    UGbxBoneSet* BoneSetFilter;
    
    GBXGAMESYSTEMCORE_API FDataActionPair_SmartObject();
};

