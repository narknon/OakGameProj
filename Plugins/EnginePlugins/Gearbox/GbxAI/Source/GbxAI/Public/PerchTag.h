#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxParam.h"
#include "GameplayTagContainer.h"
#include "PerchTag.generated.h"

class UPerchType;

UCLASS()
class UPerchTag : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPerchType* PerchType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionType;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UsageTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam CooldownTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UserCooldownTime;
    
    UPerchTag();
};

