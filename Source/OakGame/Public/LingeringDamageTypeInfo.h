#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELingeringDamageStyle.h"
#include "AttributeInitializationData.h"
#include "LingeringDamageTypeInfo.generated.h"

class UDamageData;
class UParticleSystem;
class ULightBeamData;

USTRUCT(BlueprintType)
struct FLingeringDamageTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ELingeringDamageStyle DamageStyle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ElementalEmitter;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ULightBeamData> LightBeam;
    
    UPROPERTY(EditDefaultsOnly)
    FName BeamSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageScale;
    
    UPROPERTY(EditDefaultsOnly)
    float LingeringRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MirvChildLingeringRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float RainChildLingeringRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttributeInitializationData> StackValues;
    
    OAKGAME_API FLingeringDamageTypeInfo();
};

