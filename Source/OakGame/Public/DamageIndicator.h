#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DamageIndicator.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UDamageIndicator : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShowDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDuration;
    
private:
    UPROPERTY(Transient)
    AActor* DamageCauser;
    
public:
    UDamageIndicator();
    UFUNCTION(BlueprintCallable)
    void SetDamageCauser(AActor* NewDamageActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAlpha(float NewAlpha);
    
};

