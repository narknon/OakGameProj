#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "GbxDataAsset.h"
#include "SmartObjectAction.generated.h"

class UGbxCondition;

UCLASS(EditInlineNew)
class GBXAI_API USmartObjectAction : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPassiveAction;
    
    UPROPERTY(EditAnywhere)
    bool bCombatAction;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UseChance;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* UseCondition;
    
    UPROPERTY(EditAnywhere)
    bool bUsageTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UsageTime;
    
    UPROPERTY(EditAnywhere)
    bool bMaxUsers;
    
    UPROPERTY(EditAnywhere)
    int32 MaxUsers;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ActionCooldownTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LocalUserCooldownTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam GlobalUserCooldownTime;
    
    USmartObjectAction();
};

