#pragma once
#include "CoreMinimal.h"
#include "GbxReplicatorProxyData.h"
#include "WeaponRecoilComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "WeaponRecoilPatternComponent.generated.h"

class URecoilPatternData;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponRecoilPatternComponent : public UWeaponRecoilComponent, public IGbxReplicatorProxyData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URecoilPatternData* Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat PatternWidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat PatternHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat PatternZoomScale;
    
    UPROPERTY(EditAnywhere)
    bool bScalePatternByFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetPatternWhenFiringEnds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoilSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoilRecoveryTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoilRecoveryDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartRecoilRecoveryWhenFiringEnds;
    
public:
    UWeaponRecoilPatternComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void ResetPattern();
    
    UFUNCTION()
    void OnUseFinished();
    
public:
    UFUNCTION(BlueprintPure)
    float GetRecoilPatternWidthGoodness() const;
    
    UFUNCTION(BlueprintPure)
    float GetRecoilPatternHeightGoodness() const;
    
    UFUNCTION(BlueprintPure)
    float GetRecoilPatternGoodness() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

