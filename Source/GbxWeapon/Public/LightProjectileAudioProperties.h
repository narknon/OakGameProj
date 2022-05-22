#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LightProjectileAudioProperties.generated.h"

class UEffectCollectionData;
class UWwiseEvent;
class UWwiseRtpc;

USTRUCT(BlueprintType)
struct FLightProjectileAudioProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* BulletByEntrance;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* BulletByBody;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* BulletByExit;
    
    UPROPERTY(EditAnywhere)
    float BulletByMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float BulletByChance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> TravellingAudioFxCollection;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* TravellingAudio;
    
    UPROPERTY(EditAnywhere)
    float TravellingAudioComponentSize;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* ListenerApproachSpeedRtpc;
    
    GBXWEAPON_API FLightProjectileAudioProperties();
};

