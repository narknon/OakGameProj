#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "OakCapsuleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIronBearNoBounce;
    
    UOakCapsuleComponent();
};

