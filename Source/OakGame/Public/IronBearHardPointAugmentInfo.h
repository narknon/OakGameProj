#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IronBearHardPointAugmentInfo.generated.h"

class UGbxAction;
class UOakActionAbilityAugmentData;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FIronBearHardPointAugmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakActionAbilityAugmentData> HardPointAugment;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> LeftFlourishAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> RightFlourishAnimation;
    
    OAKGAME_API FIronBearHardPointAugmentInfo();
};

