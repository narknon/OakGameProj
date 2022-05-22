#pragma once
#include "CoreMinimal.h"
#include "GbxAction_Navigation.h"
#include "GbxAction_NavLerp.generated.h"

class AActor;

UCLASS()
class GBXAI_API UGbxAction_NavLerp : public UGbxAction_Navigation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bWaitForDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalDistance;
    
    UPROPERTY(EditAnywhere)
    bool bWaitForVelocity;
    
    UPROPERTY(EditAnywhere)
    float MaxVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bCallAlmostDone;
    
    UPROPERTY(EditAnywhere)
    float AlmostedDoneTime;
    
    UPROPERTY(EditAnywhere)
    bool bSpecifyLerpTime;
    
    UPROPERTY(EditAnywhere)
    float LerpTime;
    
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
public:
    UGbxAction_NavLerp();
    UFUNCTION(BlueprintImplementableEvent)
    void OnAlmostDone(AActor* Actor) const;
    
};

