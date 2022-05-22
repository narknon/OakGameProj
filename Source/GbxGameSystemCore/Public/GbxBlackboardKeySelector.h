#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxBlackboardKeySelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName KeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRuntimeKey;
    
    FGbxBlackboardKeySelector();
};

