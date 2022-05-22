#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "LargeLiquidBodyConfigurationData.generated.h"

class UElementalInteractionConfigurationData;
class UExplosionData;
class UParticleSystem;
class UElementalPuddleConfigurationData;
class AElementalPuddle_LargeLiquidBody;

UCLASS()
class OAKGAME_API ULargeLiquidBodyConfigurationData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UParticleSystem* SurfaceParticle;
    
    UPROPERTY(EditAnywhere)
    UExplosionData* NearbyExplosionData;
    
    UPROPERTY(EditAnywhere)
    UElementalInteractionConfigurationData* ElementalInteractionConfiguration;
    
    UPROPERTY(EditAnywhere)
    UElementalPuddleConfigurationData* ElementalReactionConfiguration;
    
    UPROPERTY(EditAnywhere)
    bool bElementalReactionNegatesDamage;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AElementalPuddle_LargeLiquidBody> LocalReactionPuddleClass;
    
public:
    ULargeLiquidBodyConfigurationData();
};

