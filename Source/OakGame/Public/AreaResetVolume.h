#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AreaResetDelegateDelegate.h"
#include "AreaResetVolume.generated.h"

UCLASS()
class AAreaResetVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableOnReset;
    
    UPROPERTY(BlueprintAssignable)
    FAreaResetDelegate ResetAreaEvent;
    
    AAreaResetVolume();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetAreaIfEmpty();
    
};

