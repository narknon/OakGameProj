#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "DamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "SoundPerceptionProperties.h"
#include "ExplosionComponent.generated.h"

class UWwiseEvent;
class UEffectCollectionData;
class UParticleSystem;
class UFeedbackData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UExplosionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* ExplosionParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UEffectCollectionData> ExplosionEffectCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParticleSystemSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bModifyParticleSystemSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* ExplosionAudioEvent;
    
    UPROPERTY(EditAnywhere)
    FSoundPerceptionProperties SoundPerception;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* Feedback;
    
    UPROPERTY(EditAnywhere)
    float MaxFeedbackRangeScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCauseExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationOverride;
    
    UExplosionComponent();
    UFUNCTION(BlueprintCallable)
    void SetExplosionLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Explode(const FDamageInfo& DamageInfo);
    
};

