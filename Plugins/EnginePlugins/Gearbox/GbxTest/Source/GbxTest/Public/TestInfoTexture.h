#pragma once
#include "CoreMinimal.h"
#include "TestInfoTexture.generated.h"

class UAssetTraitTexture;

USTRUCT(BlueprintType)
struct FTestInfoTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UAssetTraitTexture*> AssetTraits;
    
    UPROPERTY(BlueprintReadOnly)
    FName CompressionMethod;
    
    UPROPERTY(BlueprintReadOnly)
    FName LODGroup;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODBias;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    bool HassRGB;
    
    GBXTEST_API FTestInfoTexture();
};

