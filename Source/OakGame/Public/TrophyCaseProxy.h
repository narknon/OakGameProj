#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "ChallengeTrophySet.h"
#include "UObject/NoExportTypes.h"
#include "TrophyCaseProxy.generated.h"

class UStaticMesh;
class UMaterialInstanceConstant;

UCLASS(NonTransient)
class ATrophyCaseProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FChallengeTrophySet> TrophySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* LockedTrophyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceConstant* BronzeTrophyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceConstant* SilverTrophyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceConstant* GoldTrophyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceConstant* PlatinumTrophyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceConstant* EridiumTrophyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TrophyRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstanceConstant* SelectedTrophyBaseMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSelectionAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSelectionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AngleWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DistanceWeight;
    
public:
    ATrophyCaseProxy();
    UFUNCTION(BlueprintCallable)
    void ZoomOut();
    
    UFUNCTION(BlueprintCallable)
    void ZoomIn();
    
    UFUNCTION(BlueprintCallable)
    void StopRotatingTrophy();
    
    UFUNCTION(BlueprintCallable)
    void SelectPrevious();
    
    UFUNCTION(BlueprintCallable)
    void SelectNext();
    
    UFUNCTION(BlueprintCallable)
    void RotateTrophyPositive();
    
    UFUNCTION(BlueprintCallable)
    void RotateTrophyNegative();
    
    UFUNCTION(BlueprintCallable)
    void OnAxisInput(FVector Vec, bool bGamePad);
    
};

