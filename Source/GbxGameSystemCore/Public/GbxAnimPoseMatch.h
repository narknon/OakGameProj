#pragma once
#include "CoreMinimal.h"
#include "GbxAnimPoseMatch.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxAnimPoseMatch {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FName> PoseMatchBones;
    
public:
    FGbxAnimPoseMatch();
};

