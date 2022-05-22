#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIUsableComponent.generated.h"

class USmartObjectComponent;
class UAIUseSlotComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UAIUsableComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(Export, Transient)
    USmartObjectComponent* SmartObjectComponent;
    
    UPROPERTY(Export, Transient)
    TArray<UAIUseSlotComponent*> UseSlots;
    
public:
    UAIUsableComponent();
};

