#pragma once
#include "CoreMinimal.h"
#include "TedioreBehavior.h"
#include "EnvQueryParams.h"
#include "TedioreBehavior_Homing.generated.h"

class UGrenadeHomingComponent;
class UWwiseEvent;

UCLASS(EditInlineNew)
class UTedioreBehavior_Homing : public UTedioreBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGrenadeHomingComponent* HomingTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialHomingDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float RetryHomingDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams InitialSearchQuery;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams RetrySearchQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float OutOfFuelDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float GravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* OnHomingFailed;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MIRVOnHomingInit;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MIRVHomingLoopEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MIRVOnHomingFailed;
    
public:
    UTedioreBehavior_Homing();
};

