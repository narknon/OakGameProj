#pragma once
#include "CoreMinimal.h"
#include "EGFxInWorldIconClampUpdate.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxObject.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HUDInWorldIconTargetInfo.h"
#include "GFxInWorldIcon.generated.h"

class AActor;
class UInWorldIconData;
class USceneComponent;

UCLASS(Blueprintable, NonTransient)
class OAKGAME_API UGFxInWorldIcon : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 Stacks;
    
    UPROPERTY(Transient)
    FVector2D CurrentLocation;
    
    UPROPERTY(Transient)
    FVector2D TransitionStartingLocation;
    
    UPROPERTY(Transient)
    FVector2D SmoothTransitionStart;
    
private:
    UPROPERTY(Transient)
    UInWorldIconData* IconData;
    
    UPROPERTY(Transient)
    FName TargetSocketName;
    
    UPROPERTY(Transient)
    FVector TargetLocation;
    
    UPROPERTY(Transient)
    FGuid TargetGuid;
    
    UPROPERTY(Transient)
    EGFxInWorldIconClampUpdate LastClampUpdateType;
    
public:
    UGFxInWorldIcon();
    UFUNCTION(BlueprintCallable)
    void SetTargetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationOffset(FVector InLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationComponent(USceneComponent* InTargetLocationComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeTimer(float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetIconData(UInWorldIconData* InIconData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNumberOfStacksChanged(int32 NewStacksNumber);
    
    UFUNCTION(BlueprintPure)
    bool IsForTarget(const FHUDInWorldIconTargetInfo& Target) const;
    
    UFUNCTION(BlueprintPure)
    bool HasValidTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool HasLifeTimeExpired() const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetLocationOffset() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetTargetLocationComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    UInWorldIconData* GetIconData() const;
    
};

