#pragma once
#include "CoreMinimal.h"
#include "AnimGraphBoneSet.generated.h"

class UGbxBoneSet;

USTRUCT(BlueprintType)
struct FAnimGraphBoneSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxBoneSet* BoneSet;
    
    UPROPERTY(Transient)
    FName AnimGraphMachineName;
    
    GBXGAMESYSTEMCORE_API FAnimGraphBoneSet();
};

