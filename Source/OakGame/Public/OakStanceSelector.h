#pragma once
#include "CoreMinimal.h"
#include "StanceDataSelector.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "OakStanceSelector.generated.h"

class UStanceDataProvider;

UCLASS()
class OAKGAME_API UOakStanceSelector : public UStanceDataSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* AICombatStanceProvider;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector AICombatStanceKey;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* AIAlertStanceProvider;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UseAIAlertStance;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* AIFriendlyTargetStanceProvider;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector AIFriendlyTargetStanceKey;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* AIFlyingStanceProvider;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector AIFlyingStanceKey;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* CrouchingStanceProvider;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* SprintingStanceProvider;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* InjuredStanceProvider;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* InjuredSprintStanceProvider;
    
    UPROPERTY()
    UStanceDataProvider* AIAngryPatrolStanceProvider;
    
public:
    UOakStanceSelector();
};

