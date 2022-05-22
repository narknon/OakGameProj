#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "ProtectionTimerSettings.h"
#include "AttributeInitializationData.h"
#include "LevelBasedDamageScale.h"
#include "Curves/CurveFloat.h"
#include "DamageLocalizationSettings.h"
#include "DamageGlobalsData.generated.h"

class UImpactData;
class UGbxDamageType;

UCLASS()
class GBXGAMESYSTEMCORE_API UDamageGlobalsData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FProtectionTimerSettings ProtectionTimerSettings;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DefaultInstigatorSelfDamageScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DefaultHealingDamageType;
    
    UPROPERTY(EditAnywhere)
    UImpactData* DefaultHealingImpact;
    
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData GlobalAIDamageScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FLevelBasedDamageScale> PlayerDamageScaleByLevelDifference;
    
    UPROPERTY(EditAnywhere)
    TArray<FLevelBasedDamageScale> AIDamageScaleByLevelDifference;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SplatterProbabilityCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SplatterTraceDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    float SplatterDirectionSpread;
    
    UPROPERTY(EditAnywhere)
    float GibLifeSpan;
    
    UPROPERTY(EditAnywhere)
    FName GibCollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    FName GibCollisionProfileNameAttached;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> GibMaterialParameterResetList;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FDamageLocalizationSettings> LanguageToTextureMap;
    
public:
    UDamageGlobalsData();
};

