#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ViewLeadingInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakFirstPersonData.generated.h"

UCLASS(BlueprintType, EditInlineNew, Within=OakCharacterAnimInstance)
class UOakFirstPersonData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FViewLeadingInfo> LeadingInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinSpeed2DWhenTryingToMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WeaponAngleAlphaExp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RAddAlphaInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PistolStockAddAlphaInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MantleReachInterpInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MantleReachInterpOutSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MantleReachOutMaximumUpwardVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MantleReachOutMinimumHeightOffGround;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector ReloadVariationTranslationMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector ReloadVariationTranslationMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator ReloadVariationRotationMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator ReloadVariationRotationMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BringHandsDownReturnRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector BringHandsDownLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator BringHandsDownRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BringHandsDownCurveExponent;
    
    UOakFirstPersonData();
};

