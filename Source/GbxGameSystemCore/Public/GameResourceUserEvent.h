#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolUpdatedDelegateDelegate.h"
#include "GameResourceUserEvent.generated.h"

class UGameResourceData;

USTRUCT(BlueprintType)
struct FGameResourceUserEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGameResourceData* ResourceData;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowDepleted;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowNotDepleted;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowFilled;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowNotFilled;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowRegenerating;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowNotRegenerating;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowDepleting;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowNotDepleting;
    
    UPROPERTY(BlueprintAssignable, EditInstanceOnly)
    FGameResourcePoolUpdatedDelegate OnResourceNowIdle;
    
    GBXGAMESYSTEMCORE_API FGameResourceUserEvent();
};

