#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxParam.h"
#include "GameplayTagContainer.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_GbxAction.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_GbxAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxAction> ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ActionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseActionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector ActionBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseActionBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanBeInterrupted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanBeInterruptedOnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam PlayRate;
    
    FAIAspectSettings_GbxAction();
};

