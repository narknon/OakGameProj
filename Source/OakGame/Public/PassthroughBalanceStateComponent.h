#pragma once
#include "CoreMinimal.h"
#include "BalanceStateComponent.h"
#include "PassthroughBalanceStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPassthroughBalanceStateComponent : public UBalanceStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Replicated, Transient)
    TWeakObjectPtr<UBalanceStateComponent> PassthroughTarget;
    
public:
    UPassthroughBalanceStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnPassthroughTargetLevelChanged(int32 OldLevel, int32 NewLevel);
    
};

