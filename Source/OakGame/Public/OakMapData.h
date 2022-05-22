#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MapData -FallbackName=MapData
#include "MapCharacterPhysicsSettings.h"
#include "OakMapData.generated.h"

class UPhysicalMaterial;
class UParticleSystem;
class UDataTable;
class UEnum;
class UImpactExpansionData;
class UZoneMapMeshData;

UCLASS(EditInlineNew)
class OAKGAME_API UOakMapData : public UMapData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NorthDegreeOffset;
    
    UPROPERTY(EditAnywhere)
    bool bForceNormalDifficultySetting;
    
    UPROPERTY(EditAnywhere)
    uint8 MapNameEnumIdx;
    
    UPROPERTY(EditAnywhere)
    uint8 ZoneNameEnumIdx;
    
    UPROPERTY()
    UEnum* MapNameEnum;
    
    UPROPERTY()
    UEnum* ZoneNameEnum;
    
    UPROPERTY(EditAnywhere)
    FMapCharacterPhysicsSettings CharacterPhysicsSettings;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCombatExperienceGains;
    
    UPROPERTY(EditAnywhere)
    UDataTable* EchoDeviceScreenDataTable;
    
    UPROPERTY(EditAnywhere)
    UZoneMapMeshData* LocalZoneMapMeshData;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UImpactExpansionData*> ImpactExpansions;
    
    UPROPERTY(EditAnywhere)
    TMap<UPhysicalMaterial*, UParticleSystem*> PlayerWakeParticleSystemExpansions;
    
public:
    UOakMapData();
    UFUNCTION()
    UEnum* ZoneNameEnumFunc();
    
    UFUNCTION()
    UEnum* MapNameEnumFunc();
    
};

