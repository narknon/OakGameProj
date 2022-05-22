#pragma once
#include "CoreMinimal.h"
#include "CreditsTextFieldInfo.generated.h"

class UGbxTextField;

USTRUCT(BlueprintType)
struct FCreditsTextFieldInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StyleId;
    
    UPROPERTY()
    UGbxTextField* TextField;
    
    OAKGAME_API FCreditsTextFieldInfo();
};

