#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CohtmlGameHUD.generated.h"

class UCohtmlHUD;

UCLASS(MinimalAPI, NonTransient)
class ACohtmlGameHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCohtmlHUD* CohtmlHUD;
    
private:
    UPROPERTY(Export)
    UCohtmlHUD* CohtmlHUDInternal;
    
public:
    ACohtmlGameHUD();
    UFUNCTION(BlueprintCallable)
    void SetupView(const FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate);
    
};

