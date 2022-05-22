#pragma once
#include "CoreMinimal.h"
#include "AimAssistStrategy.h"
#include "AimAssistSmoothingProperties.h"
#include "OakAimAssistStrategy.generated.h"

class AActor;
class AOakPlayerController;
class UOakGameInstance;
class UTargetingComponent;

UCLASS()
class UOakAimAssistStrategy : public UAimAssistStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AOakPlayerController* OakPlayerController;
    
    UPROPERTY(Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(Transient)
    UOakGameInstance* OakGameInstance;
    
private:
    UPROPERTY(Transient)
    AActor* AimAssistActor;
    
    UPROPERTY(Transient)
    FAimAssistSmoothingProperties AimAssistSmoothingProperties;
    
    UPROPERTY(Transient)
    AActor* CurrentBestTarget;
    
public:
    UOakAimAssistStrategy();
};

