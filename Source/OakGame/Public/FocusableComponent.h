#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "FocusableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFocusableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector2D FocusScreenOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseFocusSocket;
    
    UPROPERTY(EditAnywhere)
    FName FocusSocket;
    
    UPROPERTY(EditAnywhere)
    float FocusRadius;
    
public:
    UFocusableComponent();
};

