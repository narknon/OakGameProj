#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxHUDWidget.h"
#include "Engine/EngineTypes.h"
#include "GFxItemCardObject.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFxItemCard.generated.h"

class UCurveFloat;
class AWeapon;
class APawn;

UCLASS()
class UGFxItemCard : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float UpdateElementalInfoTime;
    
    UPROPERTY(Transient)
    FTimerHandle ElementalTimerHandle;
    
protected:
    UPROPERTY(EditAnywhere)
    FGFxItemCardObject ItemCardObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HideSmallIconDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShowSmallIconDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HideItemCardDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShowItemCardDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BeamAlignmentOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ItemCardHeightPivotOffsetFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplitscreenOffset;
    
    UPROPERTY(EditAnywhere)
    float CalibrationResolutionX;
    
    UPROPERTY(EditAnywhere)
    float CalibrationResolutionY;
    
    UPROPERTY(EditAnywhere)
    FVector2D VerticalSplitScreenMinItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    FVector2D VerticalSplitScreenMaxItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    FVector2D QuadSplitScreenMinItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    FVector2D QuadSplitScreenMaxItemCardOffset;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DistanceScaleCurve;
    
    UPROPERTY(Transient)
    FVector CachedItemPosition;
    
    UPROPERTY(Transient)
    FVector2D LocationScreenSpace;
    
    UPROPERTY(Transient)
    FTransform OriginalRootDisplayTransform;
    
    UPROPERTY(EditAnywhere)
    float TimeUntilOutro;
    
public:
    UGFxItemCard();
protected:
    UFUNCTION()
    void OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) const;
    
    UFUNCTION()
    void OnPawnChanged(APawn* Pawn, APawn* OldPawn) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDisplayed() const;
    
protected:
    UFUNCTION()
    void extFinishedTransition() const;
    
    UFUNCTION()
    void extFinishedHide() const;
    
};

