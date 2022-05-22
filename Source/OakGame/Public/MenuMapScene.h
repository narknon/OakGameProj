#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClaptrapSkitSublevel.h"
#include "MenuMapScene.generated.h"

UCLASS()
class AMenuMapScene : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<FClaptrapSkitSublevel> ClaptrapSkitSublevels;
    
    AMenuMapScene();
private:
    UFUNCTION()
    void OnClaptrapSkitSublevelUnloaded();
    
    UFUNCTION()
    void OnClaptrapSkitSublevelLoaded();
    
};

