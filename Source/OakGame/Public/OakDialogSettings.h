#pragma once
#include "CoreMinimal.h"
#include "GbxDialogSettings.h"
#include "GameplayTagContainer.h"
#include "DialogScriptToLoadEntry.h"
#include "NumericRange.h"
#include "EUIDialogCallout.h"
#include "OakDialogSettings.generated.h"

class UDialogParameter;
class UDialogEvent;
class UDialogStyle;
class UDialogScriptData;
class UDialogEnumValue;
class UWeaponTypeData;

UCLASS(BlueprintType)
class UOakDialogSettings : public UGbxDialogSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogParameter* TargetParam;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* InstigatorParam;
    
    UPROPERTY(EditAnywhere)
    float MaxItemCalloutDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<UDialogScriptData*> AlwaysActiveDialogScripts;
    
    UPROPERTY(EditAnywhere)
    UDialogStyle* EchoLogStyle;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* DryFireCalloutEvent;
    
    UPROPERTY(EditAnywhere)
    float PlayerIdleTime;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* PlayerIdleCallout;
    
    UPROPERTY(EditAnywhere)
    FNumericRange SpotEnemyDistanceRange;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SpottedEnemyGameplayTag;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* SpottedEnemyCallout;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* PlayerAlertEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* PlayerAlertType;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* VehicleSpawnedEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* VehicleSwappedSeatEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogScriptToLoadEntry> DialogScriptsToLoadWithLevel;
    
    UPROPERTY(EditAnywhere)
    TMap<EUIDialogCallout, UDialogEvent*> UICallouts;
    
    UPROPERTY(EditAnywhere)
    TMap<UDialogEnumValue*, FGameplayTag> GameplayTagMappings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UWeaponTypeData*, UDialogEnumValue*> WeaponTypeEnumValues;
    
    UOakDialogSettings();
};

