#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrenadeChildGenerationData.generated.h"

USTRUCT(BlueprintType)
struct FGrenadeChildGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 DividerGrenadeGeneration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 MiniMirvGrenadeGeneration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 MirvGrenadeGeneration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 RainGrenadeGeneration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 SpringGrenadeGeneration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 StickyGrenadeGeneration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsLingering;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector LongbowTarget;
    
    OAKGAME_API FGrenadeChildGenerationData();
};

