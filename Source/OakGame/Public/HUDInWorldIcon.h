#pragma once
#include "CoreMinimal.h"
#include "GbxHUDWidget.h"
#include "UObject/NoExportTypes.h"
#include "HUDInWorldIconTargetInfo.h"
#include "HUDInWorldIcon.generated.h"

class AActor;
class UInWorldIconData;
class USceneComponent;

UCLASS(EditInlineNew)
class UHUDInWorldIcon : public UGbxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 Stacks;
    
private:
    UPROPERTY(Transient)
    UInWorldIconData* IconData;
    
    UPROPERTY(Transient)
    FName TargetSocketName;
    
public:
    UHUDInWorldIcon();
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
    void OnVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetOffscreenChanged(bool bOffscreen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetLocationOffsetChanged(FVector NewLocationOffset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetInRangeChanged(bool bTargetInRange);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetChanged(AActor* NewTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetAngleChanged(float AngleDegrees);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNumberOfStacksChanged(int32 NewStacksNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocationComponentChanged(USceneComponent* NewLocationComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIconDataChanged(UInWorldIconData* NewIconData);
    
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

