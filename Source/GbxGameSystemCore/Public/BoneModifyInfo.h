#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneModifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FBoneModifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    FVector Translation;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    GBXGAMESYSTEMCORE_API FBoneModifyInfo();
};

