#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "GbxNamedParam.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxNamedParam : public FGbxParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Name;
    
    FGbxNamedParam();
};

