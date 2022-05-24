#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ExtraStandInAnimationMeshData.generated.h"

class UAnimInstance;
class UGbxAnimSet;

USTRUCT(BlueprintType)
struct FExtraStandInAnimationMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> AnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    UGbxAnimSet* AnimSet;
    
    OAKGAME_API FExtraStandInAnimationMeshData();
};

