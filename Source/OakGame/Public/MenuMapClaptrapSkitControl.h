#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnPlaySkitDelegate.h"
#include "MenuMapClaptrapSkitControl.generated.h"

UCLASS()
class AMenuMapClaptrapSkitControl : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlaySkit OnPlaySkit;
    
    AMenuMapClaptrapSkitControl();
    UFUNCTION(BlueprintCallable)
    void OnSkitComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnAllSkitsComplete();
    
};

