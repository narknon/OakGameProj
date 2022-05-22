#pragma once
#include "CoreMinimal.h"
#include "TestInfoSkeletalMesh.generated.h"

class UAssetTraitSkeletalMesh;

USTRUCT(BlueprintType)
struct FTestInfoSkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UAssetTraitSkeletalMesh*> AssetTraits;
    
    UPROPERTY(BlueprintReadOnly)
    bool Placeholder;
    
    GBXTEST_API FTestInfoSkeletalMesh();
};

